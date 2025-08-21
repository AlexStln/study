//  Составить функцию, которая определяет сумму всех чисел
//  от 1 до N и привести пример ее использования.

#include <stdio.h>

int numsum(int a)
{
    int i, sum = 0;
    for (i = 1; i <= a; i++)
    sum += i;
    return sum;
}

int main ()
{
    int n;
    scanf ("%d", &n);
    printf ("%d", numsum (n));
    return 0;
}
