//  Необходимо составить функцию, которая определяет,
//  сколько зерен попросил положить на N-ую клетку изобретатель шахмат

#include <stdio.h>
#include <inttypes.h>

uint64_t chess(int a)
{
    int i;
    uint64_t n = 1;
    if (a == 1)
    return 1;
    for (i = 2; i <= a; i++)
    {
    n *= 2;
    }
    return n;
}

int main ()
{
    int n;
    scanf ("%d", &n);
    printf ("%" PRIu64, chess (n));
    return 0;
}
