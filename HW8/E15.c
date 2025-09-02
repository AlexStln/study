//  Считать 10 чисел в диапазоне от -500 до 500 и разложить по двум
//  массивам: в одни помещать только положительные, во второй -
//  только отрицательные. Числа, равные нулю, игнорировать. Вывести
//  на экран все элементы обоих массивов.  

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

void sortArrSign(int arr[], int size) // сортировка
{
    int pos = 0, neg = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            pos++;
        }
        else
        if (arr[i] < 0)
        {
            neg++;
        }
    }
    int arrPos[pos], iPos = 0;
    int arrNeg[neg], iNeg = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            arrPos[iPos] = arr[i];
            iPos++;
        }
        else
        if (arr[i] < 0)
        {
            arrNeg[iNeg] = arr[i];
            iNeg++;
        }
    }
    PrintArr(arrPos, iPos);
    PrintArr(arrNeg, iNeg);
}

int main(void) 
{
    //int arr[SIZE] = {11,-209,302,8,-502,300,72,-83,90,100};
    int arr[SIZE] ={0};
    ReadArr(arr, SIZE);
    sortArrSign(arr, SIZE);
    return 0;
}
