// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, t, ts = 0, a[2][1002] = { 0 }, i, j, k;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a[0][i];
		//	a[1][i] = n;
	}
	for (i = 0; i < n; i++) {
		cout << "i:" << i << " ";
		for (j = 0; j < n; j++) {
			cout << "j:" << j << " " << "a[1][" << j << "]:" << a[1][j] << endl << "    ";
			if (a[1][j] == 0) {
				t = j;
				for (k = 0; k < n; k++) {
					cout << "k:" << k << " " << "a[1][" << k << "]:" << a[1][k];
					if (a[1][k] == 0) {
						cout << " " << "a[0][" << t << "]:" << a[0][t] << endl << "    ";
						if (a[0][t] < a[0][k]) {
							t = k;
						}
					}					
				}
				cout << "t:" << t << " ";
				a[1][i] = t;
				cout << "REVa[1][" << i << "]:" << a[1][i] << " ";
				ts += a[0][t] * i + 1;
				cout << "ts:" << ts << endl;
				break;
			}
		}
	}

	cout << ts << endl;
	for (i = 0; i < n; i++) {
		cout << a[1][i] << " ";
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
