    //  Ввести натуральное число вывести квадраты и кубы всех чисел
    //  от 1 до этого числа. Число не превосходит 100.

#include <stdio.h>
#include <locale.h>

int main(void)
{
    int number;    //  рассматриваемое число
    setlocale(LC_ALL, ".utf-8");
    scanf ("%d", &number);
    if (number > 100)
    {
    printf("число больше 100");
    }
    else 
    {
        int i;
        for (i = 1; i <= number; i++)
        {
            printf("%d %d %d\n", i, i*i, i*i*i);
        }
    }
    return 0;
}
