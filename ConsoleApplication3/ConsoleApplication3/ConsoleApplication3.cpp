// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

struct bb {
	int sum, num;
}a[1024];

bool s(bb a, bb b) {
	return a.sum > b.sum;
}

int main()
{
	int n, ans = 0,i=1;

	cin >> n;
	while (i <= n) {
		cin >> a[i].sum;
		a[i].num = i;
		i++;
	}
	sort(a + 1, a + 1 + n, s);
	for (int i = 1, j = 0; i <= n; i++) {
		ans += j * a[i].sum + 1;
		j++;
	}
	cout << ans << endl;
	for (int i = 1; i < +n; i++)
		cout << a[i].num << " ";

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
