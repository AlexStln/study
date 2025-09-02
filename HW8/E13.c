//  Считать массив из 10 элементов и отобрать в другой массив все
//  числа, у которых вторая с конца цифра (число десятков) – ноль.

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

int decZero(int n)
{
    int m = (n/10)%10;
    return m;
}

void sortArr(int arr[], int size) // сортировка в массив
{
    int n = 0;
    for (int i = 0; i < size; i++)
    {
        if (decZero(arr[i]) == 0)
        {
            n++;
        }
    }
    int arr2[n], k = 0;
    for (int i = 0; i < size; i++)
    {
        if (decZero(arr[i]) == 0)
        {
            arr2[k] = arr[i];
            k++;
        }
    }
    PrintArr(arr2, n);
}

int main(void) 
{
    //int arr[SIZE] = {11,209,302,8,502,300,72,83,90,100};
    int arr[SIZE] ={0};
    ReadArr(arr, SIZE);
    sortArr(arr, SIZE);
    return 0;
}
