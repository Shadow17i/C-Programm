    #include <iostream>

    using namespace std;

    int main() {
        int count_man;
        int count_barber;
        int need_barber;


        cout << "Введите кол-во мужчин в городе: ";
        cin >> count_man;

        cout << "Введите кол-во нанятых барберов: ";
        cin >> count_barber;
        


        if (count_barber>count_man){ //проверка входных данных
            cout << "Error";
            return 0;
        }
        


        if (count_barber!=0) // проверка если исходное кол-во барберов 0, т.к. делить на 0 нельзя
        {


            if (count_man%(count_barber*8)==0) 
            {
                cout <<"Нужно нанять ещё " <<count_man/(count_barber*8)-count_barber; //если кол-во барберов совпадает вровент с кол-вом людей
            } 
            
            else //если не совпадает
            {  
                cout <<"Нужно нанять ещё " <<count_man/(count_barber*8)+1-count_barber;
            }
        } 
        else 
        {
            if (count_man%8==0) //если кол-во барберов совпадает вровент с кол-вом людей
            {  
                cout <<"Нужно нанять ещё " <<count_man/8;
            } 
            else //если не совпадает
            { 
                cout <<"Нужно нанять ещё " <<count_man/8+1;
            }
        }
    }
