#include <iostream>
using namespace std;

int A;
int B;
int C;
double delta;
double l1;
double l2;

int main()
{
	cout << "Ax2 + Bx +C = 0" << endl;
	cout << "Wprowadź liczbę A: ";
	cin >> A;
	cout << "Wprowadź liczbę B: ";
	cin >> B;
	cout << "Wprowadź liczbę C: ";
	cin >> C;

	delta = B * B - (4 * A * C);
	if (delta < 0) {
		cout << "Równanie nie ma rozwiązania.";
		return 0;
	}
	if (delta == 0) {
		cout << "Równanie nie ma jednego rozwiązania";
		l1 = -B / (2 * A);
		cout << l1;
		return 0;
	}
}


