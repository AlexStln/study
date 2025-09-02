// Переставить цифры в числе так, что бы получилось максимальное число.

#include <stdio.h>

void SwapArr(int* arr,int i,int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void BubbleSortDown(int* arr, int n)
{
    int noSwap;
    for (int i = 0; i < n; i++)
    {
        noSwap = 1;
        for (int j = n-1; j > i; j--)
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

int intToMax(int n) //  перестановка цифр в числе
{
    int m = n, k = 0, res = 0;
    while (m)
    {
        m = m/10;
        k++;        
    }
    int arr[k];
    for (int i = k; i > 0; i--)
    {
       arr[i-1] = n%10;
       n /= 10;       
    }
    BubbleSortDown(arr, k);
    for (int i = 0; i < k; i++)
    {
        res = res*10 + arr[i];
    }
    return res;
}

int main(void)
{
    int num = 0;
    scanf("%d", &num);
    printf("%d", intToMax(num));
    return 0;
}
