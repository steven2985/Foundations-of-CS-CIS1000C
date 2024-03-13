/*
 
 Steven Fernandez

 gradeBook.cpp

 prompts user for the following student’s grades in a course – from 0 to 100

 Input: Student's grades

 Processing: Add all the grades and divide by 4 to obtain final grade and judgement

 Output: Judgement 

*/

// Header files
#include<iostream>
using namespace std;

int main()
{
	// Variables 
	int assignmentsGrade, projectGrade, midtermScore, finalExam, finalGrade;

	// Intro
	cout << "\nGradebook Calculator ..." << endl;

	// Grades
	cout << "\nPlease enter Assignments grade (0-100): ";
	cin >> assignmentsGrade;
	cout << "\nPlease enter Project grade (0-100): ";
	cin >> projectGrade;
	cout << "\nPlease enter Midterm grade (0-100): ";
	cin >> midtermScore;
	cout << "\nPlease enter Final Exam grade (0-100): ";
	cin >> finalExam;
	cout << endl;

	// Calculate final grade
	finalGrade = (assignmentsGrade + projectGrade + midtermScore + finalExam) / 4;

	// Display report
	if (finalGrade >= 60)
		cout << "\tCongratulations you have passed the class" << endl << endl;

	if (finalGrade < 60)
		cout << "\tSorry you have failed the class" << endl << endl;

	system("pause");
	return 0;
}