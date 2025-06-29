#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <windows.h>
#include <limits.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	long a, b;
	scanf("%ld", &a);
	scanf("%ld", &b);
	double c=(double)1/1024; //кол-во кбайт в байте
	int v_ch=1, v_sh=2, v_int=4, v_long=8; //вес в байтах каждого типа данных
	if (a>0 && a<=127) {
		printf("Оптимальный тип данных - char.\nМинимальная память для хранения всех чисел - %ld байт (%.2f) кб", v_ch*b,v_ch*b*c);
	}
	if (a>127 && a<=32767) {
		printf("Оптимальный тип данных - short.\nМинимальная память для хранения всех чисел - %ld байт (%.2f) кб", v_sh*b,v_sh*b*c);
	}
	if (a>32767 && a<=2147483647) {
		printf("Оптимальный тип данных - int.\nМинимальная память для хранения всех чисел - %ld байт (%.2f) кб", v_int*b,v_int*b*c);
	}
	if (a>2147483647 && a<=9223372036854775807) {
		printf("Оптимальный тип данных - long.\nМинимальная память для хранения всех чисел - %ld байт (%.2f) кб", v_long*b,v_long*b*c);
	}
	//не работает последнее условие
	//return 0;
	//}
