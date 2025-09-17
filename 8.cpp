#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Введите целое четырехзначное число";
    cin >> num;

    cout << "Первая цифра: " << num / 1000 << endl;
    cout << "Последняя цифра: " << num % 10;

    return 0;
}