	//	Ввести два целых числа a и b (a ≤ b) и вывести
	//  сумму квадратов всех чисел от a до b.

#include <stdio.h>
#include <locale.h>

int main(void)
{
	int num_1, num_2;	// рассматриваемые числа
	int squareSum = 0;	//	сумма квадратов чисел
	setlocale(LC_ALL, ".utf-8");
	scanf ("%d%d", &num_1, &num_2);
	if (num_1 > num_2)
	{
		printf("второе число меньше первого");
	}
	else 
	{
		int i;
		for (i = num_1; i <= num_2; i++)
		{
			squareSum += i*i;
		}
	printf("%d ", squareSum);
	}
	return 0;
}
