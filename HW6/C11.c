//  Составить функцию, которая определяет наибольший общий делитель
//  двух натуральных чисел и привести пример ее использования.



#include <stdio.h>

int nod(int a, int b)
{
    int firstNum, secondNum;
    int ost;
    firstNum = a;
    secondNum = b;
    do
    {
        ost = firstNum % secondNum;
        firstNum = secondNum;
        secondNum = ost;
    } while (ost != 0);
    return firstNum;
}

int main ()
{
    int a, b;
    scanf ("%d%d", &a, &b);
    printf ("%d", nod(a, b));
    return 0;
}
