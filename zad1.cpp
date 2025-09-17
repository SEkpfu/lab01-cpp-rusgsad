#include <iostream>
using namespace std;

int main ()
{
    setlocale (0, "");
    int x1,x2,y1,y2;
    cout << "Введите координаты одной вершины (x1, y1): \n";
    cin >> x1 >> y1;
    cout << "Введите координаты противоположной вершины (x2, y2): \n";
    cin >> x2 >> y2;

    int a=x2-x1;
    int b=y2-y1;
    int p=2*(a+b);
    int s=a*b;
    
    cout << "P = " << p << "\n";
    cout << "S = " << s;
    return 0;
}