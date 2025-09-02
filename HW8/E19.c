//  Вывести в порядке следования цифры, входящие в десятичную 
//  запись натурального числа N.

#include <stdio.h>

void PrintArr(int arr[], int size) // печать массива
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

void intToArr(int n) //  перевод числа в массив цифр и вывод
{
    int m = n, k = 0;
    while (m)
    {
        m = m/10;
        k++;        
    }
    int arr[k];
    for (int i = k; i > 0; i--)
    {
       arr[i-1] = n%10;
       n /= 10;       
    }
    PrintArr(arr, k);
}

int main(void)
{
    int num = 0;
    scanf("%d", &num);
    intToArr(num);
    return 0;
}
