//  Считать массив из 10 элементов и посчитать сумму
//  положительных элементов массива.

#include <stdio.h>

#define SIZE 10

void ReadArr(int arr[], int size) // считывание массива
{
    int i;
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

int posSum(int arr[], int size) // поиск суммы положительных элементов
{
    int i, sum = 0;

    for (i = 0; i < size; i++)
        {
        if (arr[i]>0)
            {
            sum += arr[i];
            }
        }
        return sum;
}

int main(void) 
{
    int arr[SIZE] ={0};
    ReadArr(arr, SIZE);
    printf("%d ", posSum (arr, SIZE));
    return 0;
}
