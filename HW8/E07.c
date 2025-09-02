//  Считать массив из 10 элементов и выполнить инверсию отдельно
//  для 1-ой и 2-ой половин массива. Необходимо изменить
//  считанный массив и напечатать его одним циклом.

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
    //int arr[SIZE] = {1,2,3,4,5,6,7,8,9,10};
    int arr[SIZE] ={0};
    ReadArr(arr, SIZE);
    ArrRev(arr, 0, SIZE/2-1);
    ArrRev(arr, SIZE/2, SIZE-1);
    PrintArr(arr, SIZE);
    return 0;
}
