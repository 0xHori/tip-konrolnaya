//
// Created by admin on 14.09.2025.
//

#ifndef TIP_KONROLNAYA_1_VAR1_H
#define TIP_KONROLNAYA_1_VAR1_H

#include <iostream>
#include <cmath>
using namespace ::std;

inline void var1() {
    setlocale(LC_ALL, "Russia");
    double a, b, c;
    char symbol;
    cin >> a >> b >> c;
    cin >> symbol;
    if (symbol == 'A') {
        cout << "Savchenko Andrey" << endl;
    } else if (symbol == 't') {
        if (a == 0 && b == 0 && c == 0) {
            cout << "x - действительное число" << endl;
        } else {
            double D;
            D = b * b - 4*a*c;
            if (D == 0) {
                double x = (-b)/(2*a);
                cout << "x = " << x << endl;
            } else if (D < 0) {
                cout << "Выражение не имеет действительных корней";
            } else if (D > 0) {
                double x1 = (-b + sqrt(D))/(a*2);
                double x2 = (-b - sqrt(D))/(a*2);
                cout << "x1 = " << x1 << endl;
                cout << "x2 = " << x2 << endl;
            }
        }
    } else if (symbol == 'c') {
        int question;
        cin >> question;
        cout << (question < 18 ? "Бар закрыт для тебя" : "Бар открыт!") << endl;

        /*
        if (question < 18) {
            cout << "Бар закрыт для тебя" << endl;
        } else {
            cout << "Бар открыт!" << endl;
        }
         */
    } else {
        cout << "Доступные символы для ввода: A, t, c. Перезапустите приложение и повторите попытку" << endl;
    }

}


#endif
