// Пример простейших программ 3 
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
int p;
float S;
cout << "Введите периметр квадрата" << endl;
cin >> p;
S=pow(p/4.0, 2);
cout<<"Площадь квадрата ="<<S;

return 0;

}