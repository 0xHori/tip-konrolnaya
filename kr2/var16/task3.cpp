//
// Created by andrey on 06.10.2025.
//

// var16; task3
// Напишите процедуру, которая генерирует случайные числа и заполняет ими массив заданного размера.


#include <iostream>
#include <cstdlib>

using namespace std;

void func(unsigned int m) {
    srand(time(NULL));

    int *arr = new int[m];

    for (int i = 0; i < m; i++) {
        arr[i] = rand() % 1000;
    }

    for (int i = 0; i < m; i++) {
        cout << arr[i] << " ";
    }

    delete[] arr;

}

int main() {
    setlocale(LC_ALL, "Russia");

    unsigned int m;
    cout << "Укажите размер одномерного массива:" << endl;
    cin >> m;

    func(m);

    return 0;
}


