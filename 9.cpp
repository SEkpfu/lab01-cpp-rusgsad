#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "N секунд = ";
    cin >> n;

    int hours = n / 3600;
    int minutes = n / 60;
    int rem_minutes = n % 60;

    cout << "Количество полных часов: " << hours << endl;
    cout << "Количество полных минут: " << minutes << endl;
    cout << "Остаток минут: " << rem_minutes;

    return 0;
}