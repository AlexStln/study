    //  Ввести целое число и определить, верно ли,
    //  что все его цифры четные.

#include <stdio.h>

int main ()
{
    int input, n, m;
    scanf ("%d", &input);
    n = input;
    while (n > 0)
    {
        m = ((n % 10) % 2);    // проверяем последнюю цифру
        if (m != 0)
        {
            printf ("NO");
            return 0;
        }
        n = n / 10;    //  отбрасываем последнюю цифру 
    }
    printf ("YES");
    return 0;
}
