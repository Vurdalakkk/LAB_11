<h1 align="center">Домашнее задание к работе 11</h1>
<div align="center">

## Условие задачи

<img width="609" height="73" alt="изображение" src="https://github.com/user-attachments/assets/d99beb6c-a57a-46b5-b167-1773cf607d29" />
<img width="611" height="41" alt="изображение" src="https://github.com/user-attachments/assets/6ac8c31a-ce62-4a2e-893f-7c4f218cdc22" />


## 1. Алгоритм и блок-схема

### Алгоритм
1. **Начало**
2. Подключение необходимых библиотек:<br>
   - `stdio.h` - для ввода/вывода<br>
   - `locale.h` - для поддержки русского языка
3. Определение константы `MAX_SIZE = 100`
4. Объявление функции `min()`
5. Установка русской локали
6. Объявление переменных:<br>
   - `size_array` - размер массива<br>
   - `arr[MAX_SIZE]` - массив целых чисел<br>
   - `count = 0` - счетчик элементов
7. Ввод размера массива с клавиатуры
8. Цикл заполнения массива:
   - Для `i = 0` до `size_array - 1`<br>
   - Ввод `arr[i]` с клавиатуры
9. Вычисление минимального элемента массива через вызов функции `min(arr)`
10. Подсчет количества элементов до минимального:
    - Цикл `for i = 0` до `arr[i] != min(arr)`<br>
    - Увеличение `count` на каждой итерации
11. Вывод всего массива на экран:
    - Цикл `for i = 0` до `size_array`<br>
    - Вывод номера и значения каждого элемента
12. Вывод результата: количество элементов до минимального
13. **Конец**

### Функция `min()` (поиск минимального):
1. **Начало функции**
2. Инициализация переменной `count = array[0]`
3. Цикл `for i = 0` до `sizeof(array) / sizeof(array[0])`
4. Сравнение `array[i]` с `count`:
   - Если `array[i] < count`, то `count = array[i]`
5. Возврат значения `count`
6. **Конец функции**
</div>

### Блок-схема




</div>

## 2. Реализация программы

\```c
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
\```

<div align="center">

## 3. Результаты работы программы

<img width="640" height="200" alt="изображение" src="https://github.com/user-attachments/assets/6277fcd2-afe9-47ee-befd-3425518f9760" />


## 4. Информация о разработчике

Выполнил Гребенников Артем, бИПТ-252
