#include <iostream>

using namespace std;

int main ()
{
    int abcde;
    cout << "Введите пятизначное число: \n";
    cin >> abcde;

    int a = (abcde / 10000);
    int b = (abcde / 1000) % 10;
    int c = (abcde / 100) % 10;
    int d = (abcde / 10) % 10;
    int e = abcde % 10; 

    int cbade = c * 10000 + b * 1000 + a * 100 + d * 10 + e;
    cout << cbade;
    return 0;
}