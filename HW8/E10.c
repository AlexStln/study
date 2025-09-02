// Cчитать массив из 12 элементов и выполнить циклический сдвиг
//  ВПРАВО на 4 элемента.

#include <stdio.h> 

#define SIZE 12
#define SHIFT 4

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
    //int arr[SIZE] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int arr[SIZE] ={0};
    ReadArr(arr, SIZE);
    for (int i = 1; i <= SHIFT; i++)
    {
        ArrShift(arr, SIZE);
    }    
    PrintArr(arr, SIZE);
    return 0;
}
