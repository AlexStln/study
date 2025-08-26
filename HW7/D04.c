//  Дано натуральное число N. Выведите все его цифры по одной,
//  в прямом порядке, разделяя их пробелами или новыми строками.
//  Необходимо реализовать рекурсивную функцию.
//  void print_num(int num)

#include <stdio.h>

void print_num(int num)
{
    if ((num / 10) > 0)
        print_num(num / 10);
    printf("%d ", num % 10);
}

int main(void)
{
    int n;
    scanf("%d", &n);
    print_num(n);
    return 0;
}
