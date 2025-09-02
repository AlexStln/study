// Считать массив из 12 элементов и выполнить инверсию
//  для каждой трети массива.

#include <stdio.h> 

#define SIZE 12

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

void ArrRev(int arr[], int first, int last) // реверс части массива
{
    int a = first, b = last;
    int tmp;
    while ((b-a)>=1)
        {
        tmp = arr[a];
        arr[a] = arr[b];
        arr[b] = tmp;
        a++;
        b--;        
        }
}

int main(void) 
{
    //int arr[SIZE] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int arr[SIZE] ={0};
    ReadArr(arr, SIZE);
    ArrRev(arr, 0, SIZE/3-1);
    ArrRev(arr, SIZE/3, SIZE*2/3-1);
    ArrRev(arr, SIZE*2/3, SIZE-1);
    PrintArr(arr, SIZE);
    return 0;
}
