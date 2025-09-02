//  Ввести c клавиатуры массив из 5 элементов, найти среднее
//  арифметическое всех элементов массива.

#include <stdio.h>

int main(void)
{
    int n[5] = {0}, i, sum = 0;
    float sar = 0;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &n[i]);
        sum += n[i];
    }
    sar = sum / 5.;    
    printf("%.3f", sar);
    return 0;
}
