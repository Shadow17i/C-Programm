#include <iostream>

using namespace std;

int main() {
    int hour;
    int i=0;

    cout << "Введите, который час: ";
    cin >> hour;

    while (i!=hour) {
        cout << "Ку-ку!" << endl;
        i+=1;
    }
}
