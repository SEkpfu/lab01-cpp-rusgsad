#include <iostream>
#include <cmath>

#define _USE_MATH_DEFINES

using namespace std;

int main() {
    double r, h;
    cout << "Введите радиус и высоту цилиндра \n";
    cout << "R = ";
    cin >> r;
    cout << "h = ";
    cin >> h;

    double v = M_PI * pow (r, 2) * h;
    double s = 2 * M_PI * r * h + 2 * M_PI * pow (r, 2);

    cout << "Объём цилиндра: " << v << endl;
    cout << "Площадь поверхности цилиндра: " << s;

    return 0;
}