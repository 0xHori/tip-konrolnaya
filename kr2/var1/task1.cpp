//
// Created by andrey on 01.10.2025.
//

// var1; task1
// Напишите программу, которая запрашивает у пользователя размер массива и заполняет его случайными числами.
// Затем выводит массив и находит его среднее значение.

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russia");
    srand(time(NULL));

    int m;
    double x = 0;
    cin >> m;

    // Создание динамического массива
    int* arr = new int[m];

    // Заполнение случайными числами и запись суммы в переменную x.
    for (int i = 0; i < m; i++) {
        arr[i] = rand() % 1000;
        x += arr[i];
    }

    // Вывод чисел, которые находятся в массиве
    for (int i = 0; i < m; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Вывод среднего значения массива
    cout << x / m << endl;

    // Освобождение памяти
    delete[] arr;

    // Очевидно
    return 0;
}