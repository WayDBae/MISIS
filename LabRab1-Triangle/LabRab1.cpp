/*Решение треугольника по трём сторонам
  Дано: a,b,c. Найти ∠A,∠B,∠C*/
#define _USE_MATH_DEFINES           //для объявления M_PI
#include <iostream>                 //для ввода-вывода
#include <cmath>                   //для математических операций, acos
#include <stdlib.h>
using namespace std;

float a = 0, b = 0, c = 0;

void task1() {

    setlocale(LC_ALL, "ru-ru");

    //Вводим параметры треугольника
    cout << "Введите сторону a\n"; cin >> a;
    cout << "Введите сторону b\n"; cin >> b;
    cout << "Введите сторону c\n"; cin >> c;
    //функция на проверку существования треугольника
    if (a + b > c && b + c > a && a + c > b)
        cout << "Такой треугольник существует!" << endl;
    else {
        cout << "Такого треугольника нет(" << endl;
        abort();
    };
    //Вычисление угла альфа
    float cosinusA = ((b * b) + (c * c) - (a * a)) / (2 * b * c);
    //cout<<"Cos alpha = "<< cosinusA<<endl;
    //cout<<"Arccos alpha в радианах = " << acos(cosinusA)<<endl;
    float alpha = (acos(cosinusA) * 180.0 / M_PI);
    cout << "Угол альфа = " << alpha << " градусов" << endl;
    //Вычисление угла бетта
    float cosinusB = ((a * a) + (c * c) - (b * b)) / (2 * a * c);
    //cout<<"Косинус betta = "<< cosinusB <<endl;
    //cout<<"Arccos betta в радианах = " << acos(cosinusB) <<endl;
    float betta = (acos(cosinusB) * 180.0 / M_PI);
    cout << "Угол betta = " << betta << " градусов" << endl;
    //Вычисление угла гамма
    float gamma = 180 - alpha - betta;
    cout << "Угол gamma = " << gamma << " градусов" << endl;

    system("CLS");

    cout << "Ответ: " << "alfa = " << alpha <<
        "            \n" << "betta = " << betta <<
        "            \n" << "gamma = " << gamma;

}
int main() {
    setlocale(LC_ALL, "Russian");
    unsigned short choice;
    cout << "Введите номер задания(1/0, где 0 это выход): ";
    cin >> choice;
    while (choice != 0) {
        switch (choice)
        {
        case 1:
            task1();
            cout << "\nВведите номер задания(1/0, где 0 это выход): ";
            cin >> choice;
            break;
        }
    }
        return 0;
    }
