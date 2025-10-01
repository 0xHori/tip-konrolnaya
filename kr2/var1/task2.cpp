//
// Created by andrey on 29.09.2025.
//

// var1; task2
// Напишите программу, которая создает двумерный массив размером NxM, заполняет его случайными числами и выводит на экран.

#include <iostream>

using namespace std;

int main() {
    int m,n;
    cin>>m>>n;
    int** arr = new int*[m];

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

    // Вывод двумерного массива
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Освободить память
    for (int i = 0; i < m; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    // Очевидно
    return 0;
}
