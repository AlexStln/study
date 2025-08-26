//  Дана строка заканчивающаяся символом точка '.'
// Напечатать строку наоборот. Реализуйте рекурсивную функцию,
//  которая считывает и печатает строку наоборот.
//  void reverse_string()

#include <stdio.h>

void reverse_string()
{
    char c;
    if ((c = getchar()) != '.')
    reverse_string();
    if (c != '.')
    printf ("%c", c);
}

int main(void)
{
    reverse_string();
    return 0;
}
