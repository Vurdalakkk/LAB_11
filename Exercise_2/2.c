#define _CRT_SECURE_NO_WARNINGS

// Необходимые библиотеки
#include <stdio.h>
#include <locale.h>

// Основная функция
int main()
{
	// Русская локаль
	setlocale(LC_CTYPE, "RUS");

	float PI = 3.14159, * p1, * p2;

	// Оба указателя получают адрес переменной PI
	p1 = p2 = &PI;

	// Вывод в шестнадцатеричном формате
	printf("По адресу p1=%p хранится *p1=%g\n", p1, *p1);
	printf("По адресу p2=%p хранится *p2=%g\n", p2, *p2);

	// Вывод в десятичном формате для сравнения
	printf("\nВ десятичной системе:\n");
	printf("Адрес p1: %lu\n", (unsigned long)p1);
	printf("Адрес p2: %lu\n", (unsigned long)p2);

	getchar();
	return 0;
}
