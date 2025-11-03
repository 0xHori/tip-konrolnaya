//
// Created by andrey on 03.11.2025.
//

#include <iostream>
using namespace std;

void kek(int a) {
    if (a<3) {
        kek(++a);
        cout << a << " ";
    }
}


int main() {
    int a = 0;
    kek(a);
    return 0;
}