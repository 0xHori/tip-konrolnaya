//
// Created by andrey on 06.10.2025.
//

// var16; task2
// Напишите программу, которая создает двумерный массив и заполняет его числами.
// Затем находит количество элементов, равных заданному числу.


#include <iostream>

using namespace std;

int main() {
    cout << "Укажите размер двумерного массива:" << endl;
    unsigned int m,n;
    cin>>m>>n;
    int** arr = new int*[m];

    cout << "Введите элемент, кол-во которого вы хотите посчитать:" << endl;
    int x;
    cin >> x;

    int counter = 0;
    srand(time(NULL));

    // Выделение памяти
    for (int i = 0; i < m; i++) {
        arr[i] = new int[n];
    }

    // Заполнение случайными числами
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = rand() % 10;
        }
    }

    /*
    // Вывод двумерного массива
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    */

    // Проверка, является ли элемент массива равным counter
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] == x) {
                counter++;
            }
        }
    }
    cout << counter << endl;

    // Освободить память
    for (int i = 0; i < m; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    // Очевидно
    return 0;
}
