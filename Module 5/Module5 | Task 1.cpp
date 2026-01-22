#include <iostream>

    using namespace std;

    int main() {
        int speed; // кол-во мужчин в городе
        int height; // кол-во нанятых барберов


        cout << "Введите скорость самолёта: ";
        cin >> speed;

        cout << "Введите высоту: ";
        cin >> height;
        
        cout << "-----------Анализируем ваши значения-----------"<< endl;

        if (speed<750) 
        {
            cout << "Нужно набрать скорость" << endl;
        } else if (speed>850) 
        {
            cout << "Нужно снизить скорость"<< endl;
        } else {
            cout << "Скорость нормальная"<< endl;
        }


        if (height<9000) 
        {
            cout << "Нужно набрать высоту";
        } else if (height>9500) 
        {
            cout << "Нужно снизить высоту";
        } else {
            cout << "Высота нормальная";
        }
    }
