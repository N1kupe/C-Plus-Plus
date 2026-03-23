#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    int x,y;
    cout << "введите х"; cin >> x;
    cout << "введите у"; cin >> y;

    double dist_sq = pow(x, 2) + pow(y, 2);
    double limit = pow(25, 2) / -4.0; 

    if (dist_sq < limit)
        cout << "Да" << endl;
    else if (dist_sq > limit)
        cout << "нет" << endl;
    else
        cout <<"На границе" << endl;

    return 0;
}