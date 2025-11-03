//
// Created by andrey on 20.10.2025.
//

// var16; task2;
// Создайте программу, которая считывает даты из файла
// и определяет количество дней между каждой парой дат, записывая результаты в новый файл.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main() {
    string s1 = "16.07.2007";
    string s2 = "17.07.2007";

    string year1 = "";
    string month1 = "";
    string day1 = "";
    int cnt1 = 0;
    for (int i = 0; i < s1.size(); i++) {
        if (s1[i] == '.') {
            cnt1++;
        } else {
            switch (cnt1) {
                case 0:
                    day1 += s1[i];
                    break;
                case 1:
                    month1 += s1[i];
                    break;
                case 2:
                    year1 += s1[i];
                    break;
                default:
                    cout << "А такого исхода и быть не может c:";
            }
        }
    }

    string year2 = "";
    string month2 = "";
    string day2 = "";
    int cnt2 = 0;
    for (int i = 0; i < s2.size(); i++) {
        if (s2[i] == '.') {
            cnt2++;
        } else {
            switch (cnt2) {
                case 0:
                    day2 += s2[i];
                    break;
                case 1:
                    month2 += s2[i];
                    break;
                case 2:
                    year2 += s2[i];
                    break;
                default:
                    cout << "А такого исхода и быть не может c:";
            }
        }
    }

    cout << day1 << "/" << month1 << "/" << year1 << endl;
    cout << day2 << "/" << month2 << "/" << year2 << endl;


    return 0;
}