    //  Ввести натуральное число и определить,
    //  верно ли, что сумма его цифр равна 10.

#include <stdio.h>

int main ()
{
    int numbSum = 0;    //  сумма цифр числа
    int check = 10;
    int input, n;
    scanf ("%d", &input);
    n = input;
    while (n > 0)    
    {
        numbSum += n % 10;
        n = n / 10;
    }
    (numbSum == check) ? printf ("YES") : printf ("NO");
    return 0;
}
