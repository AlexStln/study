    // Ввести целое число и найти сумму его цифр.

#include <stdio.h>

int main ()
{
    int numbSum = 0;    //  сумма цифр числа
    int input, n;
    scanf ("%d", &input);
    n = input;
    while (n > 0)    
    {
        numbSum += n % 10;
        n = n / 10;
    }
    printf ("%d", numbSum);
    return 0;
}
