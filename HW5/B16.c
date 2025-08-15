    //  Составить программу для вычисления НОД с помощью
    //  алгоритма Евклида. Даны два натуральных числа.
    //  Найти наибольший общий делитель.

#include <stdio.h>

int main ()
{
    int firstNum, secondNum, firstNumCurr, secondNumCurr;
    int ost;
    scanf ("%d %d", &firstNum, &secondNum);
    firstNumCurr = firstNum;
    secondNumCurr = secondNum;
    do
    {
        ost = firstNumCurr % secondNumCurr;
        firstNumCurr = secondNumCurr;
        secondNumCurr = ost;
    } while (ost != 0);
    printf ("%d\n", firstNumCurr);
    return 0;
}

