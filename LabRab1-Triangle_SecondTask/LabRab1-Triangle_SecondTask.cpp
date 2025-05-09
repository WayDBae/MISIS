﻿#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

double a, b, c, alfa, betta, gammaVgradusah; //a,b - стороны. gammaVgradusah - угол гамма.

int main() {
    setlocale(LC_ALL, "ru");
    //Вводим параметры треугольника
    cout << "Введите сторону a\n"; cin >> a;
    cout << "Введите сторону b\n"; cin >> b;
    cout << "Введите угол гамма между ними в градусах\n"; cin >> gammaVgradusah;

    //перевод угла Гамма с градусов в радианы
    double gammaVradianah = (gammaVgradusah * (M_PI / 180));

    c = sqrt((a * a) + (b * b) - ((2 * (a * b)) * cos(gammaVradianah)));//находим сторону c
    //Вычисление угла альфа
    double cosinusA = ((b * b) + (c * c) - (a * a)) / (2 * b * c);
    //cout<<"Cos alpha = "<< cosinusA<<endl;
    //cout<<"Arccos alpha в радианах = " << acos(cosinusA)<<endl;
    double alpha = (acos(cosinusA) * 180.0 / M_PI);

    //Вычисление угла бетта
    double cosinusB = ((a * a) + (c * c) - (b * b)) / (2 * a * c);
    //cout<<"Косинус betta = "<< cosinusB <<endl;
    //cout<<"Arccos betta в радианах = " << acos(cosinusB) <<endl;
    double betta = (acos(cosinusB) * 180.0 / M_PI);

    cout << "Ответ: " << "Сторона c = " << c <<
        "\tУгол альфа = " << alpha << " градусов" <<
        "\tУгол betta = " << betta << " градусов";

    return 0;
}