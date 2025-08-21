//  Составить функцию логическую функцию, которая определяет, верно ли,
//  что число простое. Используя функцию решить задачу.

#include <stdio.h>

void is_prime(int n)
{
    int i, s;
    for (i = 1; i < n; i++)
    {
        if ((n % i) == 0)
        s++;
    }
    (s == 2) ? printf ("YES") : printf ("NO");
}

int main ()
{
    int n;
    scanf ("%d", &n);
    is_prime (n);
    return 0;
}
