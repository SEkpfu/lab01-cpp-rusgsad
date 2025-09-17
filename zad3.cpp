#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    setlocale (0, "");
    double a,b,c;
    cin >> a >> b >> c ;
    (b+c>100) ? cout << "Наименьшее число: " << min(min(a, b), c) : cout << pow(a - 10, 2) << "\n" << pow(b - 10, 2)  << "\n" << pow(c - 10, 2);
    return 0;
}