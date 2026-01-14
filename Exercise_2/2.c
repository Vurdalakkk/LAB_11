// Необходимые библиотеки
#include <stdio.h>
#include <math.h>
#include <locale.h>

// Объявление функций
double average_value(double array[100]);
double summ_plus(double array[100]);
double summ_minus(double array[100]);
int count_plus(double array[100]);
int count_minus(double array[100]);


// Основная функция
int main() {
	// Русская локаль
	setlocale(LC_CTYPE, "RUS");
	// Инициализация переменных
	// Шаг, необходимый для заполнения массива на 100 значений
	double step = 0.0195;
	// Массив с результатами
	double res[100];
	//Промежуток
	double a1 = 0.15, a2 = 2.1;
	// F(x)
	double result;
	// Счетчик
	int i1 = 0;
	
	// Цикл для вычисления 100 значений для массива 
	for (double i = a1; i <= a2; i += step, i1++) {
		result = i - (3 * pow(cos(1.04 * i), 2));
		res[i1] = result;
	}

	// Вывод найденных значений
	printf("Имя массива: res\n");
	printf("Накопленное значение положительных элементов массива: %lf\n", summ_plus(res));
	printf("Накопленное значение отрицательных элементов массива: %lf\n", summ_minus(res));
	printf("Количество положительных элементов массива: %d\n", count_plus(res));
	printf("Количество отрицательных элементов массива: %d\n", count_minus(res));
	printf("Среднее значение положительных значений массива: %lf\n", average_value(res));
	printf("\n");
}

// Пользовательские функции

// Определяет среднее значение положительных чисел списка
double average_value(double array[100]) {
	int count = 0;
	double summ = 0;
	for (int i = 0; i <= 99; i++ ) {
		if (array[i] > 0) {
			summ += array[i];
			count++;
		}
	}
	return (summ/count);
}

// Определяет сумму всех положительных чисел списка
double summ_plus(double array[100]) {
	double summ = 0;
	for (int i = 0; i <= 99; i++) {
		if (array[i] > 0) {
			summ += array[i];

		}
	}
	return (summ);
}	

// Определяет сумму всех отрицательных чисел списка
double summ_minus(double array[100]) {
	double summ = 0;
	for (int i = 0; i <= 99; i++) {
		if (array[i] < 0) {
			summ += array[i];

		}
	}
	return (summ);
}

// Считает количество положительных элементов списка
int count_plus(double array[100]) {
	int count = 0;
	for (int i = 0; i <= 99; i++) {
		if (array[i] > 0) {
			count++;

		}
	}
	return (count);
}


// Считает количество отрицательных элементов списка
int count_minus(double array[100]) {
	int count = 0;
	for (int i = 0; i <= 99; i++) {
		if (array[i] < 0) {
			count++;

		}
	}
	return (count);
}