//
// Created by andrey on 29.09.2025.
//


// var15; task1
// Напишите программу, которая запрашивает у пользователя размер массива и заполняет его числами.
// Затем находит сумму квадратов всех элементов массива.

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russia");
    srand(time(NULL));
    
    int m;
    int x = 0;
    cin >> m;

    // Создание динамического массива
    int* arr = new int[m];

    // Заполнение случайными числами и запись суммы квадратов всех элементов в переменную x
    for (int i = 0; i < m; i++) {
        arr[i] = rand() % 1000;
        x = x + arr[i] * arr[i];
    }
    cout << endl;

    // Вывод чисел, которые находятся в массиве
    for (int i = 0; i < m; i++) {
        cout << arr[i] << " ";
    }

    // Вывод суммы квадратов всех элементов массива
    cout << x << endl;

    // Освобождение памяти
    delete[] arr;

    return 0;
}
