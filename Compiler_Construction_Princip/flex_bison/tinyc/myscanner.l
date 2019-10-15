%{
#include "mytoken.h"
int cur_line_num = 1;
void init_scanner();
void lex_error(char* msg, int line);
%}

/* Definitions, note: \042 is '"' */
INTEGER             ([0-9]+)
IDENTIFIER          ([_a-zA-Z][_a-zA-Z0-9]*)
SINGLE_COMMENT1     ("//"[^\n]*)
SINGLE_COMMENT2     ("#"[^\n]*)

%%

[\n]                { cur_line_num++;                       }
[ \t\r\a]+          { /* ignore all spaces */               }
{SINGLE_COMMENT1}   { /* skip for single line comment */    }
{SINGLE_COMMENT2}   { /* skip for single line commnet */    }



"if"                {return T_If;       }
"then"              {return T_Then;     }
"else"              {return T_Else;     }
"end"               {return T_End;      }
"repeat"            {return T_Repeat;   }
"until"             {return T_Until;    }
"read"              {return T_Read;     }
"write"             {return T_Write;    }
"+"                 {return T_Plus;     }
"-"                 {return T_Minus;    }
"*"                 {return T_Mul;      }
"/"                 {return T_Div;      }
"="                 {return T_Eq;       }
"<"                 {return T_Le;       }
"("                 {return T_Left;     }
")"                 {return T_Right;    }
";"                 {return T_Sem;      }
":="                {return T_War;      }



{INTEGER}           { return T_Integer;     }
{IDENTIFIER}        { return T_Identifier;      }

<<EOF>>             { return 0; }

.                   { lex_error("Unrecognized character", cur_line_num);        }

%%

int main(int argc, char* argv[]) {
    int token;
    init_scanner();
    while (token = yylex()) {
        print_token(token);
        puts(yytext);
    }
    return 0;
}

void init_scanner() {
    printf("%-20s%s\n", "TOKEN-TYPE", "TOKEN-VALUE");
    printf("-------------------------------------------------\n");
}

void lex_error(char* msg, int line) {
    printf("\nError at line %-3d: %s\n\n", line, msg);
}

int yywrap(void) {
    return 1;
}