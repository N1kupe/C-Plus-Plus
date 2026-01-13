// Пример простейших программ 2
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
float x,y,z;
cout<<"Введите значение х"<<endl;
cin>>x;
cout<<"Введите значение y"<<endl;
cin>>y;
z=(1+pow(sin(x+y),2))/(2+abs(x-(2*x/(1+pow(x,2)*pow(y,2)))));
cout<<"z="<<fixed<<setprecision(8)<<z<<endl;
return 0;

}