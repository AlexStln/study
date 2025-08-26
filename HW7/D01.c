//  Составить рекурсивную функцию, печать всех чисел от 1 до N

#include <stdio.h>

void count(int n) 
{
    if(n>1) 
        count(n-1);
    printf("%d ", n);
}

int main(void)
{
    int n;
    scanf("%d", &n);
    count(n);
    return 0;
}
