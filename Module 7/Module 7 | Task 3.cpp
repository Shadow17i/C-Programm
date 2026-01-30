#include <iostream>

using namespace std;

int main() {
    string command;
    int x=7;
    int y=10;
    int a=15;
    int b=20;


    while (1) {
        
        cout << "[Программа]: Марсоход находится на позиции "<< x << ", "<< y<<" введите команду: " << endl;
        cout <<"[Оператор]: ";
        cin >> command;

        if (command =="A" && x>1)
        {
            x-=1;
        }
        else if (command =="W" && y<19)
        {
            y+=1;
        }
        else if (command =="S" && y>1)
        {
            y-=1;
        }
        else if (command =="D" && x<14)
        {
            x+=1;
        }

    }
}
