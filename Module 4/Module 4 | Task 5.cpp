#include <iostream>

using namespace std;

int main() {
    int a;
    int b;

    cout << "Введите первое число ";
    cin >> a;

    cout << "Введите второе число ";
    cin >> b;

    cout << "----------Проверяем--------" << endl;

    if (a%b==0) {
        cout <<"Да, число 8"<<a <<" делится на " <<b <<" без остатка";
    } else {
        cout << "Нет, число "<<a <<" не делится на " <<b <<" без остатка";
    }
}
