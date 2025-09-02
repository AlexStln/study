//  Считать массив из 10 элементов и найти в нем два максимальных
//  элемента и напечатать их сумму.

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

int twoMax(int arr[], int size) //  поиск максимумов
{
    int i, sum, max1, max2;
    if (arr[0]<=arr[1])
    {
    max1 = arr[0];
    max2 = arr[1];
    }
    else
    {
    max1 = arr[1];
    max2 = arr[0];
    }
    for (i = 2; i < size; i++)
        {
        if (arr[i]>max2)
            {
            max1 = max2;
            max2 = arr[i];            
            }
        else if (arr[i]>max1)
            {
            max1 = arr[i];
            }
        }
        sum = max1 + max2;
        return sum;
}

int main(void)
{
    int arr[SIZE] ={0};
    ReadArr(arr, SIZE);
    printf("%d ", twoMax (arr, SIZE));
    return 0;
}
