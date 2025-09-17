#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    
    cout << "Сумма последних цифр: " << a % 10 + b % 10;
    
    return 0;
}