#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double a,b,c, a1, b1, c1;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%lf",&c);
	a1=pow(a,2);
	b1=pow(b,2);
	c1=pow(c,2);
	if (a<(b+c)&&b<(a+c)&&c<(a+b)){
		printf("Треугольник с данными сторонами может существовать\n");
	}
	if (a>(b+c)||b>(a+c)||c>(a+b)){
		printf("Треугольник с данными сторонами не может существовать\n");
	}
	if (a1==(b1+c1)||b1==(a1+c1)||c1==(a1+b1)){
		printf("Данный треугольник является прямоугольным\n");
	}
	if (a1==(b1+c1)){
		printf("Гипотенузой является сторона %.2lf\n", a);
	}
	if (b1==(a1+c1)){
		printf("Гипотенузой является сторона %.2lf\n", b);
	}
	if (c1==(a1+b1)){
		printf("Гипотенузой является сторона %.2lf\n", c);
	}

	return 0;
}
