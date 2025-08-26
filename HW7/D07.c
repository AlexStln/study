//  Составить рекурсивную функцию, печать всех чисел от N до 1.

#include <stdio.h>

void prnt(int n) 
{
    if(n >= 1) 
    {
        printf("%d ", n);
        prnt(n-1);
    }
}

int main(void)
{
    int n;
    scanf("%d", &n);
    prnt(n);
    return 0;
}
