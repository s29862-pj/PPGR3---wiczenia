﻿#include <iostream>
using namespace std;

int n;


void printPascal(int n)
    {

    for (int line = 1; line <= n; line++)
    {
        int C = 1;
        for (int i = 1; i <= line; i++)
        {

           
            cout << C << " ";
            C = C * (line - i) / i;
        }
            cout << "\n";
        }
}


int main()
{
	cout << "Podaj liczbę rzędów: " << endl;
	cin >> n;
    printPascal(n);
    return 0;
}
