//  Составить рекурсивную функцию, Выведите все числа от A до B
//  включительно, в порядке возрастания, если A < B,
//  или в порядке убывания в противном случае.

#include <stdio.h>

void recAB(int a, int b) 
{
    if (a < b)
        recAB(a, (b-1));
    if (a > b)
        recAB(a, (b+1));
    printf("%d ", b);
}

int main(void)
{
    int n, m;
    scanf("%d%d", &n, &m);
    recAB(n, m);
    return 0;
}
