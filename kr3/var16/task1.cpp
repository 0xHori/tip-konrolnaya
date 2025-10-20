//
// Created by andrey on 20.10.2025.
//

// var16; task1;
// Реализуйте рекурсивную функцию для умножения двух чисел без использования оператора умножения.

#include <iostream>
using namespace std;

double multiply(double x, double y, double cnt = 0) {
    if (y > 0) {
        return multiply(x, y-1, cnt + x);
    }
    return cnt;
}

int main() {
    double x, y;
    cin >> x >> y;
    cout << multiply(x, y);

    return 0;

}