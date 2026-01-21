#include <iostream>

using namespace std;

int main() {
    int beginHeight=0;
    int dailyGrowth=50;
    int nightFade=20;
    int result;

    cout << "Введите начальный рост бамбука ";
    cin >> beginHeight;

    result = beginHeight + (dailyGrowth - nightFade) * 2 + dailyGrowth / 2;

    cout << "Итоговая длина бамбука к середине 3 дня составляет: " << result;
}
