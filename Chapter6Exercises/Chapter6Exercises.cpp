// Chapter6Exercise.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int grade;
	char letterGrade = ' ';
	char modifier = ' ';

	cout << "Input a positive whole number numeric grade: ";
	cin >> grade;

	if (grade < 0 || grade > 100)
	{
		cout << "\nNot a valid grade.";
	}

	
	if (grade >= 0 && grade <= 60)
	{
		// Failing grade, no modifier
		letterGrade = 'F';
	}
	else if (grade > 60 && grade <= 70)
	{
		letterGrade = 'D';
	}
	else if (grade > 70 && grade <= 80)
	{
		letterGrade = 'C';
	}
	else if (grade > 80 && grade <= 90)
	{
		letterGrade = 'B';
	}
	else if (grade > 90)
	{
		letterGrade = 'A';
	}
	
	cout << "Letter grade is: " << letterGrade;

	return 0;
}

