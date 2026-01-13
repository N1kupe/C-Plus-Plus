// Пример простейших программ 4
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
  int a, b, c, d, e, f, g, h, v;
  double s;

  cout << "Введите значение 1 координаты" << endl;
  cin >> a >> b;
  cout << "Введите значение 2 координаты" << endl;
  cin >> c >> d;
  cout << "Введите значение 3 координаты" << endl;
  cin >> e >> f;

  g = sqrt(pow(c - a, 2) + pow(d - b, 2));
  h = sqrt(pow(e - c, 2) + pow(f - d, 2));
  v = sqrt(pow(e - a, 2) + pow(f - b, 2));

  double p = (g + h + v) / 2.0;
  s = sqrt(p * (p - g) * (p - h) * (p - v));

  cout << "Площадь треугольника=" << s << endl;
  return 0;
}