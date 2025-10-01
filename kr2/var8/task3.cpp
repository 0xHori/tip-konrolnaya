//
// Created by admin on 01.10.2025.
//

// var8; task3
// Напишите функцию, которая принимает два числа и возвращает большее из них.

#include <iostream>
using namespace std;

double func(double a, double b) {
    return a > b ? a : b;
}

int main() {
    double a, b;
    cin >> a >> b;
    cout << func(a, b) << endl;

    return 0;
}