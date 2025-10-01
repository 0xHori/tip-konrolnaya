//
// Created by admin on 01.10.2025.
//

// var3; task3
// Напишите функцию, которая принимает строку и возвращает её длину.

#include <iostream>
#include <string>
using namespace std;

int func(string str) {
    return str.length();
}

int main() {
    string str;
    getline(cin, str);
    cout << func(str) << endl;

    return 0;
}