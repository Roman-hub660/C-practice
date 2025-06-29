#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main() {
	srand(time(NULL));

	int a, b, c;
	printf("Введите основание степени: ");
	scanf("%d", &a);
	printf("Введите показатель степени: ");
	scanf("%d", &b);

	c = 100 + rand() % 900;
	double res = pow(a, b) + c;
	printf("\nСлучайное число (от 100 до 999) - %d\n", c);
	printf("Результат расчета - %.0f\n", res);

	return 0;
}
