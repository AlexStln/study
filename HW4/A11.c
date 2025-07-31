	//	Сумма максимума и минимума
	//	Напечатать сумму максимума и минимума.
	
#include <stdio.h>

int main()
{
	int a, b, c, d, e, min, max, sum;	//	объявляем переменные
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);	//	вводим данные
	min = (a < b) ? a : b;	//	ищем минимальное значение
	min = (min < c) ? min : c;
	min = (min < d) ? min : d;
	min = (min < e) ? min : e;
	max = (a > b) ? a : b;	//	ищем максимальное значение
	max = (max > c) ? max : c;
	max = (max > d) ? max : d;
	max = (max > e) ? max : e;
	sum = min + max;
	printf("%d ", sum);	//	выводим
	return 0;
}

