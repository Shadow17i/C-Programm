#include <iostream> 

using namespace std;

int main() { 
    int work_shift;
    int makes_an_order;
    int collects_the_order;
    int result;

    cout << "Введите длительность смены в минутах: ";
    cin >> work_shift;

    cout << "Сколько минут клиент делает заказ? ";
    cin >> makes_an_order;

    cout << "Сколько минут кассир собирает заказ? ";
    cin >> collects_the_order;

    cout << "-------------Считаем--------------------\n";

    result = work_shift / (makes_an_order + collects_the_order);
    cout << "За смену длиной " << work_shift << " минут кассир успеет обслужить "<< result << " клиентов";
}
