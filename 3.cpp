#include <iostream>
using namespace std;

int main () {
    double tC, tF, tK;
    cout << "t(C) = ";
    cin >> tC;

    tF = 9.0 / 5.0 * tC + 32;
    tK = tC + 273;

    cout << "t(F) = " << tF << "\n";
    cout << "t(K) = " << tK;

    return 0;
}