// Считать массив из 10 элементов и выполнить циклический
//  сдвиг ВПРАВО на 1.

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

void ArrShift(int arr[], int size) // сдвиг массива вправо
{
    int i = 0;
    int tmp = arr[0], tmp2;
    for (i = 0; i < (size-1); i++)
    {
        tmp2 = arr[i+1];
        arr[i+1] = tmp;
        tmp = tmp2;
    }
    arr[0] = tmp;
}

int main(void) 
{
    //int arr[SIZE] = {1,2,3,4,5,6,7,8,9,10};
    int arr[SIZE] ={0};
    ReadArr(arr, SIZE);
    ArrShift(arr, SIZE);
    PrintArr(arr, SIZE);
    return 0;
}
