//  Составить функцию логическую функцию, которая определяет, верно ли,
//  что в заданном числе все цифры стоят по возрастанию.

#include <stdio.h>

void grow_up(int n)
{
    int a, m, m2;
    a = n;
    while (a > 0)
    {
        m = a % 10;
        m2 = (a % 100) / 10;
        if (m <= m2)
        {
            printf ("NO");
            return;
        }
        a = a / 10; 
    }
    printf ("YES");
}

int main ()
{
    int n;
    scanf ("%d", &n);
    grow_up (n);
    return 0;
}
