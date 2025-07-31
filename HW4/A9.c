	//	Наибольшее из пяти чисел
	//	Ввести пять чисел и найти наибольшее из них.
	
#include <stdio.h>

int main()
{
	int a, b, c, d, e, max;	//	объявляем переменные
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);	//	вводим данные
	max = (a > b) ? a : b;	//	ищем максимальное значение
	max = (max > c) ? max : c;
	max = (max > d) ? max : d;
	max = (max > e) ? max : e;
	printf("%d ", max);	//	выводим
	return 0;
}

