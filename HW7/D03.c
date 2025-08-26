//  Дано целое не отрицательное число N. Выведите все его цифры
//  по одной, в обратном порядке, разделяя их пробелами
//  или новыми строками.

#include <stdio.h>

void converter(int n)
{
    do
    {
    printf("%d ", n % 10);
    n /= 10;
    }
    while (n > 0);
}

int main(void)
{
    int n;
    scanf("%d", &n);
    converter(n);
    return 0;
}
