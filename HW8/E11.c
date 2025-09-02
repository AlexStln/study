//  Считать массив из 10 элементов и отсортировать
//  его по последней цифре.

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

void PrintArr(int arr[], int size) // печать массива
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

void SwapArr(int* arr,int i,int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void BubbleSortLastNum(int* arr, int n)
{
    int noSwap;
    for (int i = 0; i < n; i++)
    {
        noSwap = 1;
        for (int j = n-1; j > i; j--)
        {
            if(arr[j-1] % 10 > arr[j] % 10)
            {
                SwapArr(arr,j-1,j);
                noSwap = 0;
            }
        }
        if(noSwap)
            break;
    }
}

int main(void) 
{
    //int arr[SIZE] = {11,29,32,48,52,60,72,83,990,102};
    int arr[SIZE] ={0};
    ReadArr(arr, SIZE);
    BubbleSortLastNum(arr, SIZE);
    PrintArr(arr, SIZE);
    return 0;
}
