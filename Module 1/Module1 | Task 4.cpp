#include <iostream>
using namespace std;

int main()
{
    int receipt_amount, entrance_count, apartments_per_entrance, Result;
    
    cout << "Приветствуем вас в калькуляторе квартплаты! ";  
    
    cout << "Введите сумму, указанную в квитанции: ";
    cin >> receipt_amount;
    
    cout << "Сколько подъездов в вашем доме? ";
    cin >> entrance_count;
    
    cout << "Сколько квартир в каждом подъезде? ";
    cin >> apartments_per_entrance;
    
    cout << "----Считаем----- ";
    
    Result = receipt_amount/entrance_count/apartments_per_entrance;
    cout << "Каждая квартира должна платить по " << Result;
}
