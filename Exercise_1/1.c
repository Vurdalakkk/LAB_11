// Необходимые библиотеки
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
// Константа
#define K 10
#define N 10
// Основная функция
int main() {
	// Русская локаль
	setlocale(LC_CTYPE, "RUS");
	// Инициализация переменных и массива
	float A[N];
	float sr_ar = 0;
	// Цикл для заполнения массива
	for (int i = 0; i < N; i++) {
		printf("Введите %d элемент массива:\n ", i + 1);
		scanf("%f", &A[i]);
		getchar();
		A[i] = A[i] - K;
	}
	// Цикл для вывода массива
	for (int i = 0; i < N; i++) {
		printf("|----|---------|\n|%4d|%9.f|\n", i, A[i]);
	}
	// Цикл для вычисления среднего арифметического
	for (int i = 0; i < N; i++) {
		sr_ar += A[i];
	}
	printf("\nСреднее арифметическое  =  %f\n" , sr_ar/N);
}
	