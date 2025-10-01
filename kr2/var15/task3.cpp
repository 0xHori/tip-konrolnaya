//
// Created by admin on 01.10.2025.
//

// var15; task3
// Напишите функцию, которая принимает массив и его размер, а затем находит количество четных элементов.

#include <iostream>

using namespace std;

int func(int arr[], int count ) {
    int value = 0;
    for (int i = 0; i < count; i++) {
        if (arr[i] % 2 == 0) {
            value++;
        }
    }
    return value;
}


int main() {
    int m;
    cin >> m;

    // Создание динамического массива
    int* arr = new int[m]{1,2,3,4,5,6,7,8};

    int x = func(arr,m);
    cout << x << endl;

    delete[] arr;
}