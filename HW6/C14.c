//  Составить функцию логическую функцию, которая определяет,
//  верно ли, что сумма его цифр – четное число.
//  Используя эту функцию решить задачу.

#include <stdio.h>

void chetn (int x)
{
    int numbSum = 0;
    int n;
    n = x;
    while (n > 0)    
    {
        numbSum += n % 10;
        n = n / 10;
    }
    ((numbSum % 2) == 0) ? printf ("YES") : printf ("NO");
}

int main ()
{
    int a;
    scanf ("%d", &a);
    chetn (a);
    return 0;
}
