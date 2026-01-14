// Необходимые библиотеки
#include <stdio.h>
#include <locale.h>
// Максимальный размер массива
#define MAX_SIZE 100
// Объявление функций
int min(int value);

// Основная функция 
int main() {
	// Русская локаль
	setlocale(LC_CTYPE, "RUS");

	// Объявление переменных и массива
	int size_array;
	int arr[MAX_SIZE];
	int count = 0;

	// Ввод размера массива
	printf("Введите количество чисел, которые хотите записать в массив: ");
	scanf("%d",&size_array);
	getchar();

	// Заполнение массива
	for (int i = 0; i < size_array; i++) {
		printf("Введите %d элемент массива\n", i+1);
		scanf("%d", &arr[i]);
		getchar();


	}
	printf("\n");
	// Вычисление количества элементов до минимального элемента
	for (int i = 0; arr[i] != min(arr); i++) {
		count++;
	}
	

	// Вывод массива
	for (int i = 0; i < size_array; i++) {
		printf("%d:  %d\n",i+1 ,arr[i]);
		
	}
	printf("Количсетво до минимального элемента : %d", count);
}
// Функция расчета минимального числа в массиве
int min(int array[]) {
	// Инициализация счетчка
	int count = array[0];

	for (int i = 0; i <= sizeof(array) / sizeof(array[0]); i++) {
		if (array[i] < count) {
			count = array[i];
		}
	}
	return count;
}