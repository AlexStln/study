	//	Ввести номер месяца и вывести название времени года.

#include <stdio.h>

int main(void)
{
	int m;
	scanf ("%d", &m);
	if ((m >= 1 && m <= 2) || m == 12)
	{
		printf("winter");
	}
	else if ( m >= 3 && m <= 5 )
	{
		printf("spring");
	}
	else if ( m >= 6 && m <= 8 )
	{
		printf("summer");
	}
	else if ( m >= 9 && m <= 11 )
	{
		printf("autumn");
	}
	else 
	{
		printf("???");
	}
	return 0;
}

