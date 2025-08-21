//  Составить функцию, модуль числа и привести пример ее использования.

#include <stdio.h>

int modul (int a)
{
    if (a>0)
    return (a);
    else
    return (-a);
}

int main ()
{
    int input;
    scanf ("%d", &input);
    printf ("%d", modul (input));
    return 0;
}
