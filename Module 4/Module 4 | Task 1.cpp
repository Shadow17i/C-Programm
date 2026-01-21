#include <iostream>

using namespace std;

int main() {
    int a;
    int b;
    
    cout << "Введите первое число ";
    cin >> a;

    cout << "Введите второе число ";
    cin >> a;

    cout << "----------Проверяем--------" << endl;

    if (a>b) {
        cout <<"Наименьшее число: "<< b;
    } else if (b>a){
        cout << "Наименьшее число: " << a;
    } else {
        cout << "Числа равны" ;
    }
}
