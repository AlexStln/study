    //  Проверить число на простоту.

#include <stdio.h>

int main ()
{
    int input;
    int count = 0;
    scanf ("%d", &input);
    int i;
    for (i = 1; i <= input; i++)
    {
        if ((input % i) == 0)
        count ++;
        if (count > 2)
        break;
    }
    (count == 2) ? printf ("YES") : printf ("NO");
    return 0;
}
