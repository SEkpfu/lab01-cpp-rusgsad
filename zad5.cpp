#include <iostream>
#include <cmath>
#include <iomanip> // заголовочный файл для управления форматированием ввода-вывода
using namespace std;

int main() {
    double x, y;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;

    // выражение первое
    double f1 = pow (1 + 1 / (x * x), x) - 12 * x * x * y;
    cout << "f1 = " << setprecision(5) << f1 << "\n";

    // выражение второе
    double f2 = pow (cos (x), 4) + pow (sin (y), 2) + 1.0/4.0 * pow (sin (2 * x), 2) - 1;  
    cout << "f2 = " << scientific << f2;

    return 0;
}