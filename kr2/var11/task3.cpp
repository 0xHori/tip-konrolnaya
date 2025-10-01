//
// Created by admin on 01.10.2025.
//

// var11; task3
// Напишите функцию, которая проверяет, является ли число простым.

#include <iostream>
using namespace std;

bool func(int num) {
    bool is_prime = true;
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            is_prime = false;
            break;
        }
    }

    return is_prime;
}

int main() {
    int num;
    cin >> num;
    cout << (func(num) ? "Число простое" : "Число не простое") << endl;

    return 0;
}