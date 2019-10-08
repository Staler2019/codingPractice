// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>

using namespace std;

int GCD(int x, int y) {

	while (y != 0) {

		int r = x % y;
		x = y;
		y = r;
	}

	return x;
}

int LCM(int x, int y) {
	return x * y / GCD(x,y);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n, s, i, ans;
	int a[2][102];

	cin >> n >> s;

	for (i = 0; i < n; i++) {

		cin >> a[0][i];
		a[1][i] = 0;
	}

	for (i = 0; i < n ; i++){
		
	}

	cout << ans << "\n" << "\a" << "\a" << "\a";
	
	return 0;
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
