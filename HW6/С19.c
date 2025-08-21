//  Составить функцию, которая преобразует текущий символ цифры в число.
//  Написать программу считающую сумму цифр в тексте.
//  int digit_to_num(char c)

#include <stdio.h>

int digit_to_num(char c)
{
    int digit;
    if (c >= '0'&& c<='9')
    digit = c - '0';
    return digit;
}

int main ()
{
    int sum = 0;
    char c;
    while ((c = getchar()) != '.')
    {
    sum += digit_to_num(c);
    }
    printf ("%d", sum);
    return 0;
}
