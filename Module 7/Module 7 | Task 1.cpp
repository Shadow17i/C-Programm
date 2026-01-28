#include <iostream>

using namespace std;

int main() {
    int month;
    int buckwheat_weight=100;

    cout << "Всего гречки было на начало подсчёта:"<< endl;
    for (month = 1; month < buckwheat_weight/4; month ++) {
        cout << "После " << month << " месяца у вас в запасе останется " << buckwheat_weight-month*4<<endl;
    }
    cout << "После "<< month <<" месяца гречка закончится"<<endl;

}
