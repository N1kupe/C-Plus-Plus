#include <iostream>

using namespace std;

int main() {
    double a, b;
    char op;
    cout << "Введите выражение (например, 10 + 5): ";
    if (!(cin >> a >> op >> b)) {
        cout << "Ошибка ввода!" << endl;
        return 1;
    }
    if (op == '+') {
        cout << "Результат: " << a + b << endl;
    } 
    else if (op == '-') {
        cout << "Результат: " << a - b << endl;
    } 
    else if (op == '*') {
        cout << "Результат: " << a * b << endl;
    } 
    else if (op == '/') {
        if (b != 0) {
            cout << "Результат: " << a / b << endl;
        } else {
            cout << "делить на ноль нельзя!" << endl;
        }
    } 
    else {
        cout << "Ошибка: операция '" << op << "' не поддерживается" << endl;
    }
    return 0;
}