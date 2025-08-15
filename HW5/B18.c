    //  Вывести на экран ряд чисел Фибоначчи, состоящий из n элементов.

#include <stdio.h>

int main ()
{
    int input;
    int numFibbLast = 0;
    int numFibbCurr = 1;
    int numFibbNext;
    scanf ("%d", &input);
    int i;
    for (i = 0; i < input; i++)
    {
        numFibbNext = numFibbCurr + numFibbLast;
        numFibbLast = numFibbCurr;
        numFibbCurr = numFibbNext;        
        printf ("%d ", numFibbLast);
    }
    return 0;
}
