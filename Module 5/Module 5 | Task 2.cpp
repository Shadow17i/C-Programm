#include <iostream>

    using namespace std;

    int main() {
        int day;


        cout << "Введите номер дня месяца: ";
        cin >> day;
        
        cout << "-----------Анализируем ваши данные-----------"<< endl;

        if ((day % 6 == 0 || day % 7 ==0) || (day >= 1 && day <=5) || (day >= 8 && day <=10)) 
        {
            cout << "Данный день считается выходным" << endl;
        } else {
            cout << "Данный день считается рабочим"
        } 
    }
