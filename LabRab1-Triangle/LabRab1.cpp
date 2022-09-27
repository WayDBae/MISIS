#include <iostream>                  //для ввода-вывода
#include <cmath>                   //для математических операций, acos и M_PI

using namespace std;

double a=0,b=0,c=0;

int main() {

setlocale(LC_ALL,"ru-ru");

//Вводим параметры треугольника
cout<<"Enter a"; cin>>a;
cout<<"Enter b"; cin>>b;
cout<<"Enter c"; cin>>c;
//функция на проверку существования треугольника
if(a + b > c && b + c > a && a + c > b)
cout << "Такой треугольник существует!" << endl;
else
cout << "Такого треугольника нет("<<endl;
//Вычисление угла альфа
float cosinusA = ((b*b)+(c*c)-(a*a))/(2*b*c);
//cout<<"Cos alpha = "<< cosinusA<<endl;
//cout<<"Arccos alpha в радианах = " << acos(cosinusA)<<endl;
float alpha = (acos (cosinusA) * 180.0 / M_PI);
cout<<"Угол альфа = " <<alpha<<" градусов"<<endl;
//Вычисление угла бетта
float cosinusB = ((a*a)+(c*c)-(b*b))/(2*a*c);
//cout<<"Косинус betta = "<< cosinusB <<endl;
//cout<<"Arccos betta в радианах = " << acos(cosinusB) <<endl;
float betta = (acos(cosinusB) * 180.0 / M_PI);
cout<<"Угол betta = " <<betta<<" градусов"<<endl;
//Вычисление угла гамма
float gamma = 180 - alpha - betta;
cout<<"Угол gamma = " <<gamma<<" градусов" << endl;

cout <<"Ответ: "<<"α = "<< alpha <<
"            \n"<<"β = "<< betta <<
"            \n"<<"γ = "<<gamma;
return 0;
}