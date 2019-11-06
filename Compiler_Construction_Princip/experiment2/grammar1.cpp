#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <iostream>
#include <string>
using namespace std;

string S(void);
string L(void);
string E(void);

char token;
// string result;
void error(void)
{
    fprintf(stderr, "Error\n");
    exit(0);
}

void match(char expectedToken)
{
    if (token == expectedToken)
    {
        token = getchar();
    }
    else
    {
        error();
    }
}

int main(){
    string result;
    token = getchar();
    result = S();
    if (token == '\n')
    {
        cout << "result is "<< endl <<  result << endl;
    }
        else
        {
            error();
        }
        return 0;
}


string S()
{
    string temp;
    if (token == 'i')
    {
        match('i');
        temp += 'i';
        match('f');
        temp += 'f';
        match(' ');
        temp += ' ';
        temp += E();
        match(' ');
        temp += ' ';
        match('t');
        temp += 't';
        match('h');
        temp += 'h';
        match('e');
        temp += 'e';
        match('n');
        temp += 'n';
        match(' ');
        temp += ' ';
        temp += S();
        match(' ');
        temp += ' ';
        match('e');
        temp += 'e';
        match('l');
        temp += 'l';
        match('s');
        temp += 's';
        match('e');
        temp += 'e';
        match(' ');
        temp += ' ';
        temp += S();
    }
    else if (token =='b')
    {
        match('b');
        temp += 'b';

        match('e');
        temp += 'e';

        match('g');
        temp += 'g';

        match('i');
        temp += 'i';

        match('n');
        temp += 'n';

        match(' ');
        temp += ' ';

        temp += S();
        match(' ');
        temp += ' ';

        temp += L();
        

    }
    else if (token == 'p')
    {
        match('p');
        temp += 'p';
        match('r');
        temp += 'r';
        match('i');
        temp += 'i';
        match('n');
        temp += 'n';
        match('t');
        temp += 't';
        match(' ');
        temp += ' ';

        temp += E();

    }
    else
    {
        error();
    }
    
    return temp;
}

string L(void)
{
    string temp = "";
    if (token == 'e')
    {
        match('e');
        temp += 'e';

        match('n');
        temp += 'n';

        match('d');
        temp += 'd';


    }
    else if (token == ';')
    {
        match(';');
        temp += S();
        temp += L();
    }
    else
    {
        error();
    }
    return temp;
    
}

string E()
{
    string temp = "";
    if(token == 'n')
    {
        match('n');
        temp += 'n';

        match('u');
        temp += 'u';

        match('m');
        temp += 'm';

        match(' ');
        temp += ' ';

        match('=');
        temp += '=';

        match(' ');
        temp += ' ';

        match('n');
        temp += 'n';

        match('u');
        temp += 'u';

        match('m');
        temp += 'm';

    }
    
    else
    {
        error();
    }
    return temp;
}
