//
// Created by andrey on 06.10.2025.
//

// var16; task1
// Напишите программу, которая запрашивает у пользователя размер массива и заполняет его числами.
// Затем выводит только те элементы, которые больше среднего значения.
#include <iostream>
#include <ctime>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russia");
    srand(time(NULL));

    unsigned int m;
    int x = 0;
    cout << "Укажите размер массива: ";
    cout << endl;
    cin >> m;

    // Создание динамического массива
    int* arr = new int[m];

    // Заполнение случайными числами
    for (int i = 0; i < m; i++) {
        arr[i] = rand() % 10;
    }


    // Вывод чисел, которые находятся в массиве
    for (int i = 0; i < m; i++) {
        cout << arr[i] << " ";
        x += arr[i];
    }
    cout << endl;


    double average = x / m;
    cout << "Среднее значение: " << average << endl;


    // Вывод чисел, которые больше среднего значения
    for (int i = 0; i < m; i++) {
        if (arr[i] > average) {
            cout << arr[i] << " ";
        }
    }

    
    // Освобождение памяти
    delete[] arr;

    return 0;
}