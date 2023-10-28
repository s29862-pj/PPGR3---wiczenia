#include <iostream>
using namespace std;

float x;
float y;

int main()
{
    cout << "Podaj pierwszą liczbę x: " << endl;
    cin >> x;
    cout << "Podaj drugą liczbe y: " << endl;
    cin >> y;

    cout << x + y << endl;
    cout << x - y << endl;
    cout << x * y << endl;
    cout.precision(3);
    cout << x / y << endl;

 }


