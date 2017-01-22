// Chapter6Exercise.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

/// Used to determine whether letter grade should
/// have a plus (+), minus (-), or nothing
/// Input expected to be between 0 and 10
char DetermineModifier(int lastDigit)
{
	char retVal = ' ';

	if (lastDigit > 0 && lastDigit <= 3)
	{
		retVal = '-';
	}
	else if (lastDigit >= 8)
	{
		retVal = '+';
	}

	return retVal;
}

int main()
{
	int grade;
	char letterGrade;
	char modifier;
	
	while (true)
	{
		// Reset
		letterGrade = ' ';
		modifier = ' ';

		// Get the grade
		cout << "Input a positive whole number numeric grade, -1 to exit: ";
		cin >> grade;

		// Some simple input validation
		if (grade == -1)
		{
			break;
		}

		if (grade < 0 || grade > 100)
		{
			cout << "\nNot a valid grade.";
			continue;
		}
		
		// Determine grade 
		if (grade >= 0 && grade <= 60)
		{
			// Failing grade, no modifier
			letterGrade = 'F';
		}
		else if (grade > 60 && grade <= 70)
		{
			letterGrade = 'D';
			modifier = DetermineModifier(grade - 60);
		}
		else if (grade > 70 && grade <= 80)
		{
			letterGrade = 'C';
			modifier = DetermineModifier(grade - 70);
		}
		else if (grade > 80 && grade <= 90)
		{
			letterGrade = 'B';
			modifier = DetermineModifier(grade - 80);
		}
		else if (grade > 90)
		{
			letterGrade = 'A';
			modifier = DetermineModifier(grade - 90);
		}

		cout << "Letter grade is: " << letterGrade << modifier << "\n\n";
	}

	return 0;
}

