#ifndef TOKEN_H
#define TOKEN_H



typedef enum{
    T_If = 256, T_Then, T_Else, T_End, T_Repeat, T_Until, T_Read, T_Write,
    T_Plus, T_Minus, T_Mul, T_Div, T_Eq, T_Le, T_Left, T_Right, T_Sem, T_War,
    T_Integer,  T_Identifier
}TokenType;

static void print_token(int token) {
    static char* token_strs[] = {
        "Token_If", "Token_Then", "Token_Else", "Token_End", "Token_Repeat", "Token_Until", "Token_Read",
        "Token_Write", "Token_Plus", "Token_Minus", "Token_Mul", "Token_Div",
        "Token_Eq", "Token_Le", "Token_Left", "Token_Right", "Token_Sem", "Token_War",
         "Toker_Integer", "T_Identifier"
    };

    if (token < 256) {
        printf("%-20c", token);
    } else {
        printf("%-20s", token_strs[token-256]);
    }
}
#endif