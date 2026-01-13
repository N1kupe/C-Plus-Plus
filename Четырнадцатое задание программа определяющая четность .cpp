// Программа определяющая четность 
#include <iostream>
using namespace std;
int main() {
  int x;
  cout<<"Введите число х"<<endl;
  cin>>x;
  (x%2==0)?cout<<"четное":cout<<"нечетное";
  return 0;
}