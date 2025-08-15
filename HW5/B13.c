    //  Посчитать количество четных и нечетных цифр числа. 

#include <stdio.h>

int main ()
{
    int input, n, m, nEven = 0, nOdd = 0;
    scanf ("%d", &input);
    n = input;
    while (n > 0)
    {
        m = n % 10;    // проверяем последнюю цифру
        if ((m % 2) == 0)
        nEven ++;
        else 
        nOdd ++;
        n = n / 10;    //  отбрасываем последнюю цифру 
    }
    printf ("%d %d\n", nEven, nOdd);
    return 0;
}
