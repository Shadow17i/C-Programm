#include <iostream>

using namespace std;

int main() {
    int Duty; // долг 
    int pay; // выплата
    int check=0; // счёт

    cout << "Введите размер долга ";
    cin >> Duty;

    while (check < Duty) {
        
        cout << "Введите выплату ";
        cin >> pay;
        
        check+=pay;
        if (check > Duty){
            break;
        }

        cout << "Осталось выплатить "<< Duty-check << endl;
    }
    
    cout << "Поздравляю, вы выплатили долг" << endl;

    if (check > Duty) {
        cout << "На балансе осталось " << check-Duty;
    }
}
