//  Ввести c клавиатуры массив из 5 элементов, найти среднее
//  арифметическое всех элементов массива.

#include <stdio.h>

int main(void)
{
    int n[5] = {0}, i;
        for (i = 0; i < 5; i++)
        {
        scanf("%d", &n[i]);
        }
        int min = n[0];
    for (i = 0; i < 5; i++)
        {
        if (n[i]<min)
            min = n[i];
        }
    printf("%d", min);
    return 0;
}
