//  Составить функцию вычисления N!. Использовать ее при вычислении
//  факториала int factorial(int n)

#include <stdio.h>

int factorial(int n)
{
    int i, factor = 1;
    for (i = 1; i <= n; i++)
    {
    factor *= i;
    }
    return factor;
}

int main ()
{
    int n;
    scanf ("%d", &n);
    printf ("%d", factorial (n));
    return 0;
}
