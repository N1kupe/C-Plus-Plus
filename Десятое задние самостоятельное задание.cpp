// Пример простейших программ 1 
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
int x;
double y;
cout<<"Введите значение х"<<endl;
cin >> x;
y=(pow(x,2)+sin(x+1))/2;
cout<<"y="<<y<<endl;
return 0;

}