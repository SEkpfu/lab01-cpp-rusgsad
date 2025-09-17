#include <iostream>
using namespace std;

int main() {
    double x;
    cout << "x = ";
    cin >> x;

    double x2 = x * x;
    double x3 = x * x2;
    double x5 = x2 * x3;
    double x9 = x * x5 * x3;
    
    double y = x9 - x5 + x3 - 2;
    cout << "y = " << y;
    return 0;
}