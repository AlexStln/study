// Cчитать массив из 10 элементов и найти в нем максимальный 
// и минимальный элементы и их номера.

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

int Min(int arr[], int size) // поиск минимума массива
{
    int min = arr[0];
    int i;
    for (i = 0; i < size; i++)
    {
        if (arr[i]<min)
            min = arr[i];
    }
    return min;
}

int Max(int arr[], int size) // поиск максимума массива
{
    int max = arr[0];
    int i;
    for (i = 0; i < size; i++)
    {
        if (arr[i]>max)
            max = arr[i];
    }
    return max;
}

int MinPos(int arr[], int size) // поиск позиции минимума
{
    int minPos = 0;
    int min = arr[0];
    int i;
    for (i = 0; i < size; i++)
    for (i = 0; i < size; i++)
    {
        if (arr[i]<min)
            { 
            min = arr[i];
            minPos = i;
            }
    }
    minPos++;
    return minPos;
}

int MaxPos(int arr[], int size) // поиск позиции минимума
{
    int maxPos = 0;
    int max = arr[0];
    int i;
    for (i = 0; i < size; i++)
    for (i = 0; i < size; i++)
    {
        if (arr[i]>max)
            { 
            max = arr[i];
            maxPos = i;
            }
    }
    maxPos++;
    return maxPos;
}
int main(void)
{
    // int arr[SIZE] ={1,2,3,4,5,6,7,8,9,10};
    int arr[SIZE] ={0};
    ReadArr(arr, SIZE);
    printf("%d ", MaxPos (arr, SIZE));
    printf("%d ", Max (arr, SIZE));
    printf("%d ", MinPos (arr, SIZE));
    printf("%d ", Min (arr, SIZE));
    return 0;
}
