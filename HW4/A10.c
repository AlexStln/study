	//	Наименьшее из пяти чисел
	//	Ввести пять чисел и найти наименьшее из них.
	
#include <stdio.h>

int main()
{
	int a, b, c, d, e, min, max, sum;	//	объявляем переменные
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);	//	вводим данные
	min = (a < b) ? a : b;	//	ищем минимальное значение
	min = (min < c) ? min : c;
	min = (min < d) ? min : d;
	min = (min < e) ? min : e;
	printf("%d ", min);	//	выводим
	return 0;
}

