/*Решение треугольника по трём сторонам
  Дано: a,b,c. Найти ∠A,∠B,∠C*/
#define _USE_MATH_DEFINES           //для объявления M_PI
#include <iostream>                 //для ввода-вывода
#include <cmath>                   //для математических операций, acos
using namespace std;

float a, b, c;  //глобальные переменные

void FindTriangleParams(float a,float b,float c) {

    if (a + b > c && b + c > a && a + c > b) {  //Проверка на правильный треугольник путем сравнивания двух сторон с третьей
        cout << "Такой треугольник существует!" << endl;
        float cosinusA = ((b * b) + (c * c) - (a * a)) / (2 * b * c);   //Вычисление cos альфа
        float alpha = (acos(cosinusA) * 180.0 / M_PI);  //Вычисление угла альфа
        float cosinusB = ((a * a) + (c * c) - (b * b)) / (2 * a * c);   //Вычисление cos бетта
        float betta = (acos(cosinusB) * 180.0 / M_PI);  //Вычисление бетта
        float gamma = 180 - alpha - betta;  //Нахождение гамма
        cout << "Ответ в градусах: " << "alfa = " << alpha <<
            "\n                  " << "betta = " << betta <<
            "\n                  " << "gamma = " << gamma;
    }
    else //если треугольник неправильный, то выводим сообщение
        cout << "Такого треугольника нет(" << endl;
}

int main() {
    setlocale(LC_ALL, "ru-ru");
    //Вводим параметры треугольника
    cout << "Введите сторону a\n"; cin >> a;
    cout << "Введите сторону b\n"; cin >> b;
    cout << "Введите сторону c\n"; cin >> c;
    FindTriangleParams(a,b,c);  //вызов функции
    return 0;
}