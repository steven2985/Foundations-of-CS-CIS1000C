/*
 
 Steven Fernandez

 triangle.cpp

 program that prompts the user for the base and height of a triangle, and calculates 
 and displays its area.

 Input: base & height of the triangle 

 Processing: Prompt user for base & height
					 Calculate area
						area = base * height / 2
					 Display area of triangle

 Output: Display the area of the triangle

*/

// Header files
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
	// Variables 
	double area;

	// Intro 
	cout << "\nGeometry Calculator ..." << endl;

	double base, height;

	cout << "\n\tEnter base & height of Traiangle: ";
	cin >> base >> height;

	if (base >= 0 && height >= 0)
	{
		area = base * height / 2;
		cout << "\tThe area of the Triangle is: " << area << endl << endl;
	}
	else
		cout << "\tError ... Invalid base/height. Try Again" << endl;

	system("pause");
	return 0;
}