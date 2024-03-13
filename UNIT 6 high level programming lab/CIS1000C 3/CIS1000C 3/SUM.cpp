/*

  Steven Fernandez

  numbers.cpp

  Program that prompts the user for a number n and displays the values from 1 to n.

  Input: Number selected by the user 

  Processing: (i = 1; i <= n; i++)

  Output: Display values from 1 to n number

*/

// Header files
#include<iostream>
using namespace std;

int main()
{
	// Variables
	int n, i;

	// Intro
	cout << "\nSequence of Numbers ..." << endl;

		cout << "\nPlease Enter a value for n: ";
		cin >> n;

		for (i = 1; i <= n; i++) 
		{
			cout << i << endl;
		}

	system("pause");
	return 0;
}