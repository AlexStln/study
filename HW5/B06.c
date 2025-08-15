    // Ввести целое число и определить, верно ли,
    // что в его записи есть две одинаковые цифры, стоящие рядом.

#include <stdio.h>

int main ()
{
    int input, n;
    scanf ("%d", &input);
    n = input;
    while (n > 0)
    {
        int a = n % 10;
        int b = (n % 100) / 10;
        if (a == b)
        {
            printf ("YES");
            return 0;
        }        
        n = n / 10;
    }
    printf ("NO");
    return 0;
}
