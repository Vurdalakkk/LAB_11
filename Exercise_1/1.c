#define _CRT_SECURE_NO_WARNINGS

// Необходимые библиотеки
#include <stdio.h>
#include <locale.h>

// Основная функция
int main()
{
	// Русская локаль
	setlocale(LC_CTYPE, "RUS");

	// Объявление переменных и указателей
	char c = 'A';
	int i = 5;
	double d = 3.14;
	char* pc;
	int* pi;
	double* pd;

	// Инициализация указателей
	pc = &c;
	pi = &i;
	pd = &d;

	// Вывод размеров указателей
	printf("Размер указателя на char: %lu байт\n", sizeof(pc));
	printf("Размер указателя на int: %lu байт\n", sizeof(pi));
	printf("Размер указателя на double: %lu байт\n", sizeof(pd));

	// Вывод размеров значений
	printf("\nРазмер значения char: %lu байт\n", sizeof(*pc));
	printf("Размер значения int: %lu байт\n", sizeof(*pi));
	printf("Размер значения double: %lu байт\n", sizeof(*pd));

	getchar();
	return 0;
}
