    //  Ввести натуральное число и напечатать все числа от 10 до
    //  введенного числа - у которых сумма цифр равна произведению цифр

#include <stdio.h>

int main ()
{
    int numbSum = 0;    //  сумма цифр числа
    int numbMltp = 0;   //  произведение цифр числа
    int input, n;
    int i;
    scanf ("%d", &input);
    for (i = 10; i <= input; i++)
    {
        n = i;
        numbSum = 0;
        numbMltp = 1;
        while (n > 0)
        {
            numbSum += n % 10;
            numbMltp *= n % 10;
            n = n / 10;
        }
        if (numbSum == numbMltp) printf ("%d ", i);
    }
    return 0;
}
