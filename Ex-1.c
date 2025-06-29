#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	int a,b,c;
	scanf("%d", &a);
	scanf("%d", &b);
	c=100+rand()%(999+1-100);
	double res;
	res=(double)pow(a,b)+c;
	printf("Случайное число (от 100 до 999) - %d,\n \nРезультат расчета - %.0f\n",c, res);
	return 0;
}
