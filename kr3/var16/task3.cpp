//
// Created by andrey on 20.10.2025.
//

// var16; task3;
// Напишите программу, которая считывает дату в формате "гггг-мм-дд"
// и выводит её в формате "дд/мм/гггг".

#include <iostream>
#include <ctime>

using namespace std;


// int main() {
//     string s = "2007-07-16";
//     cout << "Введите дату в формате 2007-07-16" << endl;
//     cin>>s;
//     if (s.length() == 10) {
//         cout << s[8] << s[9] << "/" << s[5] << s[6] << "/" << s[0] << s[1] << s[2] << s[3];
//     } else {
//         cout << "Перечитайте условие задачи. Дата подаётся в формате \"гггг-мм-дд\"";
//     }
//     return 0;
// }

int main() {
    string s = "2007-07-16";
    cout << "Введите дату в формате 2007-07-16" << endl;
    cin>>s;
    string year = "";
    string month = "";
    string day = "";
    int cnt = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '-') {
            cnt++;
        } else {
            switch (cnt) {
                case 0:
                    year += s[i];
                    break;
                case 1:
                    month += s[i];
                    break;
                case 2:
                    day += s[i];
                    break;
                default:
                    cout << "А такого исхода и быть не может c:";
            }
        }
    }

    if (year.length() != 4 || month.length() != 2 || day.length() != 2) {
        cout << "Очевидно, что нужно внимательнее читать условие. Дата подаётся в формате \"гггг-мм-дд\"";
    } else {
        cout << day << "/" << month << "/" << year << endl;
    }

}

/*
Попробовать оптимизировать - не string, а char. И сделать проверку, что месяц 1 < месяц < 12,
и с днём также
*/