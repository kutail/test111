#include <iostream>

using namespace std;

int main() {
    int x1, x2, itog;
    char znak;

    cout << "введи число: " << endl;
    cin >> x1;
    cout << "введи второе число: : " << endl;
    cin >> x2;

    cout << "введи операцию (+, -, *, /, %): ";
    cin >> znak;

    if (znak== '+') {
        itog = x1 + x2;
        cout << "результат: " << itog << endl;
    }
    else if (znak == '-') {
        itog = x1 - x2;
        cout << "результат: " << itog << endl;
    }
    else if (znak == '*') {
        itog = x1 * x2;
        cout << "результат: " << itog << endl;
    }
    else if (znak == '/') {
        if (x2 != 0) {
            itog = x1 / x2;
            cout << "результат: " << itog << endl;
        } else {
            cout << "ошибка: Деление на ноль!" << endl;
        }
    }
    else if (znak == '%') {
        if (x2 != 0) {
            itog = x1 % x2;
            cout << "результат: " << itog << endl;
        } else {
            cout << "Ошибка: Деление на ноль!" << endl;
        }
    }
    else {
        cout << "ввыбрана не верная операция" << endl;
    }

    return 0;
}
