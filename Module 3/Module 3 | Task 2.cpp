#include <iostream>
using namespace std;

int main() {
  int a = 42;
  int b = 153;
  int c = 0;
  
  cout << "a: " << a << "\n"; /* На экран будет выведено 42 */
  cout << "b: " << b << "\n"; /* На экран будет выведено 153 */
  
  a=c;
  a=b;
  b=c;
  
  cout << "Меняем значения" << endl; 
  
  cout << "a: " << a << "\n"; /* На экран будет выведено 153 */
  cout << "b: " << b << "\n"; /* На экран будет выведено 42 */
}
