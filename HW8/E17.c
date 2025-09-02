//  Дан массив из 10 элементов. В массиве найти элементы, которые
//  в нем встречаются только один раз, и вывести их на экран.

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

int inArrNum(int arr[], int size, int n) // кол-во повторений элемента
{
    int k = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == arr[n])
        {
            k++;
        }
    }
    return k;
}

void onlyOneArr(int arr[], int size)
{
    int n = 0;
    for (int i = 0; i < size; i++)
    {
        if (inArrNum(arr, size, i) == 1)
        {
            n++;   
        }
    }
    int k = 0;
    int arrOne[n];
    for (int i = 0; i < size; i++)
    {
        if (inArrNum(arr, size, i) == 1)
        {
        arrOne[k] = arr[i];
        k++;
        }
    }
    PrintArr(arrOne, k);
}

int main(void) 
{
    //int arr[SIZE] = {1,4,0,1,4,60,3,3,10,2};
    int arr[SIZE] ={0};
    ReadArr(arr, SIZE);
    onlyOneArr(arr, SIZE);
    return 0;
}
