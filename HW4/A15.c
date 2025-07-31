	//	Уравнение прямой
	//	Определить уравнение прямой по координатам двух точек. Уравнение вида

#include <stdio.h>
#include <locale.h>

int main(void)
{
	int X1, Y1, X2, Y2;
	float k, b;
	setlocale(LC_ALL, ".utf-8");
	scanf ("%d%d%d%d", &X1, &Y1, &X2, &Y2);
	if (X2 == X1) 
	{
		printf("X1 совпадает с X2");
	}
	else 
	{
		k = (float)(Y2-Y1)/(X2-X1);
		b = Y1 - k*X1;
		printf("%.2f %.2f", k, b);
	}
	return 0;
}

