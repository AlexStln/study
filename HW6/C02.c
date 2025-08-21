//  Составить функцию, возведение числа N в степень P.
//  int power(n, p) и привести пример ее использования.

#include <stdio.h>

int power (int n, int p)
{
    int i, pwr = 1;
    for (i = 0; i < p; i++)
    {
    pwr *= n;
    }
    return (pwr);
}

int main ()
{
    int n, p;
    scanf ("%d" "%d", &n, &p);
    printf ("%d", power (n, p));
    return 0;
}
