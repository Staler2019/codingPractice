#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, t, ts=0, a[2][1002] = { 0 }, i, j, k;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a[0][i];
	//	a[1][i] = n;
	}
	for(i = 0; i < n; i++) {
		for(j = 0; j < n; j++) {
			if(a[1][j] == n) {
				t = j;
				for(k = 0; k < n; k++) {
					if(a[0][j] < a[0][k]) {
						t = k;
					}
				}
				a[1][i] = t;
				ts += a[0][t] * i + 1;
			}
		}
	}
	
	cout << ts << endl;
	for (i = 0; i < n; i++) {
		cout << a[1][i] << " ";
	}
}