//  Составить функцию, которая переводит латинскую
//  строчную букву в заглавную.

#include <stdio.h>

char simbconv(char simbol)
{
    char simbolBig;
    if (simbol >= 'a' && simbol <= 'z')
    {
    simbolBig = 'A' - 'a' + simbol;
    return simbolBig;
    }
    else
    return simbol;
}

int main ()
{
    char c;
    while ((c = getchar ())!='.')
    putchar (simbconv(c));
    return 0;
}
