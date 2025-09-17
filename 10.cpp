#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Введите длины ребёр параллелепипеда: \n";
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;

    int v = a * b * c;
    int s = 2 * (a * b + b * c + a * c);

    cout << "V = " << v << endl;
    cout << "S = " << s << endl;

    return 0;
}