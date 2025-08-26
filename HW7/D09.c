//  Дано натуральное число N. Вычислите сумму его цифр.
//  Необходимо составить рекурсивную функцию.
//  int sum_digits(int n)

#include <stdio.h>

int sum_digits(int n) 
{
    if(n <= 0) 
        return 0;
    int sum = (n % 10) + sum_digits(n/10);
    return sum;
}

int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%d ", sum_digits(n));
    return 0;
}
