/**
* Driver code for a simple lexer
*
**/

#include "Tokens.h"
#include <stdio.h>

#ifdef EOF
#undef EOF
#endif

#define EOF 0

/**
* Prototipos de funcion
**/
int yylex(void);
extern char *yytext; // The actual representation of the token.
extern tokenCount;

char *getTokenLabel(int tokenCode);

int main(int argc, char *argv[])
{
    int tokenCode = yylex();
    char *tokenName = getTokenLabel(tokenCode);

    while (tokenCode != EOF)
    {
        printf("El lexema detectado '%s' pertence al token %s\n", yytext, tokenName);
        tokenCode = yylex();
        tokenName = getTokenLabel(tokenCode);
    }

    printf("El analizador ha detectado un total de %d lexemas", tokenCount);

    return 0;
}

char *getTokenLabel(int tokenCode)
{
    switch (tokenCode)
    {
    case _ID:
        return "_ID";
        break;

    case _ICONST:
        return "_ICONST";
        break;

    case _RCONST:
        return "_RCONST";
        break;

    case _ECONST:
        return "_ECONST";
        break;

    case _LITERAL:
        return "_LITERAL";
        break;

    case _COMMENT:
        return "_COMMENT";
        break;

    case _LBRACK:
        return "_LBRACK";
        break;

    case _RBRACK:
        return "_RBRACK";
        break;

    case _LPAREN:
        return "_LPAREN";
        break;

    case _RPAREN:
        return "_RPAREN";
        break;

    case _SEMI:
        return "_SEMI";
        break;

    case _COLON:
        return "_COLON";
        break;

    case _COMMA:
        return "_COMMA";
        break;

    case _ASSIGN:
        return "_ASSIGN";
        break;

    case _PLUS:
        return "_PLUS";
        break;

    case _MINUS:
        return "_MINUS";
        break;

    case _MULT:
        return "_MULT";
        break;

    case _DIVIDE:
        return "_DIVIDE";
        break;

    case _EQL:
        return "_EQL";
        break;

    case _LESS:
        return "_LESS";
        break;

    case _GTR:
        return "_GTR";
        break;

    case _LEQ:
        return "_LEQ";
        break;

    case _GEQ:
        return "_GEQ";
        break;

    case _NEQ:
        return "_NEQ";
        break;

    case _PROGRAM:
        return "_PROGRAM";
        break;

    case _ENDVARS:
        return "_ENDVARS";
        break;

    case _ENDPROCS:
        return "_ENDPROCS";
        break;

    case _VARS:
        return "_VARS";
        break;

    case _NOVARS:
        return "_NOVARS";
        break;

    case _INTEGER:
        return "_INTEGER";
        break;

    case _REAL:
        return "_REAL";
        break;

    case _STRING:
        return "_STRING";
        break;

    case _PROCS:
        return "_PROCS";
        break;

    case _NOPROCS:
        return "_NOPROCS";
        break;

    case _PROC:
        return "_PROC";
        break;

    case _BEGIN:
        return "_BEGIN";
        break;

    case _END:
        return "_END";
        break;

    case _FOR:
        return "_FOR";
        break;

    case _TO:
        return "_TO";
        break;

    case _DO:
        return "_DO";
        break;

    case _IF:
        return "_IF";
        break;

    case _THEN:
        return "_THEN";
        break;

    case _ELSE:
        return "_ELSE";
        break;

    case _READ:
        return "_READ";
        break;

    case _WRITE:
        return "_WRITE";
        break;

    default:
        return "UNKW";
        break;
    }
}
