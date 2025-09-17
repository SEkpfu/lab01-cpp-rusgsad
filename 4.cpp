#include <iostream> 
using namespace std;

int main() {
    double v, r;
    const double PI = 3.14159;
    cout << "R = ";
    cin >> r;

    v = 4.0 / 3.0 * PI * r * r * r;

    cout << "V = " << v;

    return 0;
}