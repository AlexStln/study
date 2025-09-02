//  Считать массив из 10 элементов и отсортировать первую половину
//  по возрастанию, а вторую – по убыванию.

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

void BubbleSortMax(int* arr, int first, int last)
  // сортировка по возрастанию части массива
{
    int noSwap;
    for (int i = first; i < last; i++)
    {
        noSwap = 1;
        for (int j = last; j > i; j--)
        {
            if(arr[j-1] > arr[j])
            {
                SwapArr(arr,j-1,j);
                noSwap = 0;
            }
        }
        if(noSwap)
            break;
    }
}

void BubbleSortMin(int* arr, int first, int last) 
  // сортировка по убыванию части массива
{
    int noSwap;
    for (int i = first; i < last; i++)
    {
        noSwap = 1;
        for (int j = last; j > i; j--)
        {
            if(arr[j-1] < arr[j])
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
    //int arr[SIZE] = {11,29,32,8,52,30,72,83,9,102};
    int arr[SIZE] ={0};
    ReadArr(arr, SIZE);
    BubbleSortMax(arr, 0, SIZE/2-1);
    BubbleSortMin(arr, SIZE/2, SIZE-1);
    PrintArr(arr, SIZE);
    return 0;
}
