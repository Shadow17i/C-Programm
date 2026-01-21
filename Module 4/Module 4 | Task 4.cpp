#include <iostream>

using namespace std;

int main() {
    int exp;

    cout << "Введите количество опыта ";
    cin >> exp;

    cout << "----------Проверяем--------" << endl;

    if (exp<1000) {
        cout <<"Ваш уровень: 1";
    } else if (exp>=1000 && exp<2500) {
        cout << "Ваш уровень: 2";
    } else if (exp>=2500 && exp<5000){
        cout << "Ваш уровень: 3";
    } else {
        cout << "Error";
    }
}
