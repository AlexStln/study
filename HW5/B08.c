    //  Ввести целое число и определить, верно ли,
    //  что в нём ровно одна цифра «9».

#include <stdio.h>

int main ()
{
    int input, n, m;
    int check = 9;    //  проверяемая цифра
    int checkNUM = 1;    //  необходимое количество в числе
    int checkSum = 0;
    scanf ("%d", &input);
    n = input;
    while (n > 0)
    {
        m = n % 10;    //  берем последнюю цифру числа
        n = n / 10;    //  отбрасываем последнюю цифру        
        if (m == check) checkSum ++;
    }
    (checkSum == checkNUM) ? printf ("YES") : printf ("NO");
    return 0;
}
