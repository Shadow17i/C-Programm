#include <iostream>

using namespace std;

int main() {
    int water;
    int milk;
    int welcome_drink;
    bool flag;

    int Americano=0;
    int Latte=0;


    cout << "Введите количество воды мл: ";
    cin >> water;

    cout << "Введите количество молока мл: ";
    cin >> milk;

    while (1) 
    {
        
        cout << "Выберите напиток (1 — американо, 2 — латте): ";
        cin >>  welcome_drink;
        
        if (welcome_drink!=1 || welcome_drink!=2) 
        {
            cout << "Error";
            break;
        }

        if (welcome_drink == 1) 
        {
            if (water>=300) 
            {
                Americano+=1;
                cout << "Ваш напиток готов"<<endl;
                water-=300;
            }
            else cout << "Не хватает воды"<<endl;
        }
        else
        {   
            if (water>=30 && milk>=270) 
            {
                Latte+=1;
                cout << "Ваш напиток готов"<<endl;
                water-=30;
                milk-=270;
            }
            else
            {
                if (water < 30) cout<<"Не хватает воды"<<endl;
                if (milk < 270) cout<<"Не хватает молока"<<endl;
            }
        }



        cout << "***Отчёт*** "<<endl;
        cout << "Ингридиентов осталось "<<endl;
        cout << "                      Вода: "<<water<<endl;
        cout << "                      Молоко: "<<milk<<endl;
        cout << "Кружек Американо приготовлено: "<< Americano<<endl;
        cout << "Кружек Латте приготовлено: "<< Latte<<endl;
    }
}
