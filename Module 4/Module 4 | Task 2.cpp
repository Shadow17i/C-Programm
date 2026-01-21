#include <iostream>

using namespace std;

int main() {
    int a;
    int b;
    int sum;

    cout << "Введите первое число ";
    cin >> a;

    cout << "Введите второе число ";
    cin >> b;

    cout << "Введите сумму ";
    cin >> sum;

    cout << "----------Проверяем--------" << endl;

    if (a+b==sum) {
        cout <<"Верно!";
    } else {
        cout << "Ошибка! Верный результат: " << a+b ;
    }
}
