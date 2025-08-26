// Написать логическую рекурсивную функцию и используя ее определить
// является ли введенное натуральное число точной степенью двойки.

#include <stdio.h>
void is2pow(int n)
{

    if(n <= 2)
        {
        printf("YES");
        return;
        }
    if((n / 2 != 0) && (n % 2 != 0))
        {
        printf("NO");
        return;
        }
        is2pow(n / 2);
}

int main(void)
{
    int n;
    scanf("%d", &n);
    is2pow(n);
    return 0;
}
