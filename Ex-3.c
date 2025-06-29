#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main()
{
	long a, b, size;
	char* type;

	printf("Введите макс. значение числа из набора: ");
	scanf("%ld", &a);
	a = labs(a); // labs - модуль для long (long abs, labs)
	printf("Введите количество чисел в наборе: ");
	scanf("%ld", &b);

	if (a <= CHAR_MAX) {
		size = sizeof(char);
		type = "char";
	} else if (a <= SHRT_MAX) {
		size = sizeof(short);
		type = "short";
	} else if (a <= INT_MAX) {
		size = sizeof(int);
		type = "int";
	} else {
		size = sizeof(long);
		type = "long";	
	}
	printf("Оптимальный тип данных - %s.\n", type);
	printf("Минимальная память для хранения всех чисел - %ld байт (%.2f кб)\n", size*b, size*b/1024.0);
	return 0;
}