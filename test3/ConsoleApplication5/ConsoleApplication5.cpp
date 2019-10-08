// ConsoleApplication5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int num = 0, accountNum;
	float balance, charges, credits, creditLimit;

	while (1)
	{
		cout << "Enter account number (or -1 to quit):";
		cin >> accountNum;
		if (accountNum == -1)
			break;
		cout << "Enter beginning balance:";
		cin >> balance;
		cout << "Enter total charges:";
		cin >> charges;
		cout << "Enter total credits:";
		cin >> credits;
		cout << "Enter credit limit:";
		cin >> creditLimit;
		balance += charges - credits;
		cout << "New balance is " << fixed << setprecision(3) << balance << endl;
		if (balance > creditLimit)
		{
			cout << "Account:" << accountNum << endl;
			cout << "Credit limit:" << creditLimit << endl;
			cout << "Balance:" << balance << endl;
			cout << "Credit Limit Exceeded!!!!!" << endl;
		}
		cout << endl;
	}

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
