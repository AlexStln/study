//  Составить логическую функцию, которая определяет, что текущий
//  символ это цифра. Написать программу считающую количество цифр
//  в тексте. int is_digit(char c)

#include <stdio.h>

int is_digit(char c)
{
    if (c >= '0'&& c<='9')
    return 1;
    else
    return 0;
}

int main ()
{
    int i = 0;
    char c;
    while ((c = getchar()) != '.')
    {
    i += is_digit (c);
    }
    printf ("%d", i);
    return 0;
}
