/*
Необходимо найти и исправить все ошибки в программе.

Программа должна выводить на экран оценку ученика,
в зависимости от его набранных баллов (0..100).
80..100 баллов - отл
60..79 баллов - хор
45..59 баллов - удов
0.44 балла - неуд
*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int credit;
    printf("Введите количество баллов: ");
    scanf("%d", &credit);

    if (credit >= 80 && credit <= 100) {
        printf("отл\n");
    } else if (credit >= 60&&credit<80) {
        printf("хор\n");
    } else if (credit >= 45&&credit<60) {
        printf("удов\n");
    } else if (credit >=0&&credit<45) {
        printf("неуд");
    } else {
        printf("Неверное значение баллов");
    }

    return 0;
}