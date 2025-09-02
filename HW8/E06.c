//  Считать массив из 12 элементов и посчитать
//  среднее арифметическое элементов массива.

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

float Avr(int arr[], int size) // поиск среднего арифметического
{
    int i;
    int sum = 0;
    for (i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    float avr = (float) sum / size;    
    return avr;
}

int main(void) 
{
    int arr[SIZE] ={0};
    ReadArr(arr, SIZE);
    printf("%.2f", Avr (arr, SIZE));
    return 0;
}
