//  Проверить строку состоящую из скобок "(" и ")" на корректность.

#include <stdio.h>

int t = 1;

int main ()
{
    char c;
    char cprev;
    c = (getchar());
    if (c != '(')    // проверка первой скобки
    {
        printf ("NO");
        return 0;
    }
    while ((c = getchar()) != '.')
    {
    if (c == '(')
        t ++;
    else if (c == ')')
        {
        t --;
        cprev = c;
        }
    }
    if ((t == 0) && (cprev == ')'))    // проверка последней скобки 
        //if ((t == 0)) 
        printf ("YES");
    else
        printf ("NO");
    return 0;
}
