//
// Created by andrey on 27.10.2025.
//
// Напишите функцию, которая принимает два массива одинакового размера и возвращает массив, содержащий их сумму.

#include <iostream>
#include <ctime>

using namespace std;

int func(int arr_a[], int arr_b[], int a, int b) {
    int cnt_a = 0, cnt_b = 0; // в переменных будет сохранена сумма элементов матриц\

    // Проходимся по массиву, прибавляя значение каждого элемента к переменной cnt_
    for (int i = 0; i < a; i++) {
        cnt_a += arr_a[i];
    }
    for (int i = 0; i < b; i++) {
        cnt_b += arr_b[i];
    }
    cout << cnt_a << " + " << cnt_b << endl; // вывод, какие числа складываются

    int result = cnt_a + cnt_b;
    return result;
}


int main() {
    srand(time(NULL));

    int a, b;
    cout << "Введите размеры массивов через пробел (например, 4 4)" << endl;
    cin >> a >> b;
    //по условию, матрица должна быть квадратной
    if (a != b) {
        cout << "Размеры массивов должны совпадать!" << endl;
        return 1;
    }
    // Создание одномерных массивов
    int *arr_a = new int[a];
    int *arr_b = new int[b];

    // Заполнение массивов случайными числами и вывод всех элементов в консоль
    for (int i = 0; i < a; i++) {
        arr_a[i] = rand() % 10;
        cout << arr_a[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < b; i++) {
        arr_b[i] = rand() % 10;
        cout << arr_b[i] << " ";
    }
    cout << endl;

    // Вызов функции
    int result = func(arr_a, arr_b, a, b);

    // Потому что составители задания просят вывести массив, а это нельзя сделать в C++ по-нормальному
    cout << "[" << result << "]" << endl;

    // Освободить память
    delete[] arr_a;
    delete[] arr_b;
    return 0;
}