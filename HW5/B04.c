    // Ввести целое число и определить,
    // верно ли, что в нём ровно 3 цифры.

#include <stdio.h>

int main ()
{
	int checkNum = 3;
    int input, n, count;
    scanf ("%d", &input);
    count = 0;
    n = input;
    while (n > 0)
    {
        count++;
        n = n / 10;
    }
    (count == checkNum) ? printf ("YES") : printf ("NO");
    return 0;
}
