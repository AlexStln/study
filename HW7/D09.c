//  Дано натуральное число n ≥ 1. Проверьте, является ли оно простым.
//  Программа должна вывести слово YES, если число простое или NO
//  в противном случае. Необходимо составить рекурсивную функцию
//  и использовать ее. int is_prime(int n, int delitel)

#include <stdio.h>

int is_prime(int n, int delitel)
{
    if (delitel == 1)
        return 1;
    else if (n % delitel == 0)
        return 0;
    else return is_prime(n, delitel--);
}

int main(void)
{
    int n;
    scanf("%d", &n);
    is_prime(n, n/2) ? printf("YES") : printf("NO");
    return 0;
}
