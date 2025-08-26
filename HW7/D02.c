//  Составить рекурсивную функцию, которая определяет сумму
//  всех чисел от 1 до N.

#include <stdio.h>

int summator(int n) 
{
    if(n<=1) 
        return 1;
    int sum = n + summator(n-1);
    return sum;
}

int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%d ", summator(n));
    return 0;
}
