#include <stdio.h>

int main()
{
	double a, b, c, a1, b1, c1;
	printf("Введите в каждой следующей строке 3 стороны треугольника.\n");
	scanf("%lf", &a);
	scanf("%lf", &b);
	scanf("%lf", &c);
	a1 = a*a;
	b1 = b*b;
	c1 = c*c;

	if (a1==(b1+c1) || b1==(a1+c1) || c1==(a1+b1)){
		printf("Данный треугольник является прямоугольным, ");
		int hypot;
		if (a1==(b1+c1)) hypot = a;
		if (b1==(a1+c1)) hypot = b;
		if (c1==(a1+b1)) hypot = c;
		printf("его гипотенуза - %d\n", hypot);
	} else if (a<(b+c)&&b<(a+c)&&c<(a+b)){
		printf("Треугольник с данными сторонами может существовать\n");
	} else {
		printf("Треугольник с данными сторонами не может существовать\n");
	}
	
	return 0;
}
