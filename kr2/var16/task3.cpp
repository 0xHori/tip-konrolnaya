//
// Created by andrey on 06.10.2025.
//

// var16; task3


#include <iostream>
#include <cstdlib>

using namespace std;

int* func(int m) {
    int *arr = new int[m];

    for (int i = 0; i < m; i++) {
        arr[i] = rand() % 1000;
    }

    return arr;
}

int main() {
    setlocale(LC_ALL, "Russia");
    srand(time(NULL));

    int m;
    cout << "Укажите размер одномерного массива:" << endl;
    cin >> m;

    // Создание динамического массива
    int* arr = func(m);

    // Вывод чисел, которые находятся в массиве
    for (int i = 0; i < m; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;


    // Освобождение памяти
    delete[] arr;

    // Очевидно
    return 0;
}
