#include <iostream> 

using namespace std;

int main() { 
    int price_product;
    int price_delivery;
    int discount;
    int result;

    cout << "Введите стоимость товара ";
    cin >> price_product;

    cout << "Введите стоимость доставки ";
    cin >> price_delivery;

    cout << "Введите скидку ";
    cin >> discount;

    result = price_product + price_delivery - discount;
    cout << "Итоговая стоимость составляет " <<result;
}
