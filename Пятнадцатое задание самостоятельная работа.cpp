// Программа для расчета решаемое уравнение или нет
#include <iostream>
using namespace std;
int main() {
 float x;a;b;c;d;e;f;u;g
 cout <<"Введите вещественное число а"
 cin >> a;
 cout <<"Введите вещественное число b"
 cin >> b;
 cout <<"Введите вещественное число c"
 cin >> c;
 d=pow(b;2)-4*a*c;
 e=(-b+sqrt d)/(2*a)
 f=(-b-sqrt d)/(2*a)
 u=a*pow(e;2)+b*e+c
 g=a*pow(f;2)+b*f+c
 (u%g==0)?cout<<"решаемое уравнение";
 cout<< не решаемое
  return 0;
}