/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int loopCount, userInput;
	printf("For Iteration\n"
		"=============\n");

	printf("Keep looping (positive #-YES | zero or negative #=NO):");
	scanf("%d", &userInput);

	loopCount = 1;
	for (loopCount = 0; loopCount < 5 && loopCount > 0; loopCount++)
	{
		if(userInput > 0)
		{
			if (userInput % 2 == 0)
			{
				printf("That number is EVEN!\n");
			}
			else
			{
				printf("That number is ODD!\n");
			}
		}
	}
		printf("You looped %d times!", loopCount);
	return 0;
}
*/



/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int studentID;
	int birthYear;
	int birthMonth;
	float gradePercent;

	const int maxGrades = 3;
	float gradeInput;
	int studentCount = 0, moreStudents, gradeCount;
	int i;  // Note: 'i' is typically used in iterating (for loop counter)
	int validGrade;// control variable for grade input validation routine

	printf("Student Information System\n"
		"--------------------------\n\n");
	do
	{
	printf("Enter student-%d's information...\n", studentCount+1);

	printf("Student ID                    :");
	scanf("%d", &studentID);

	printf("Birth Year                    :");
	scanf("%d", &birthYear);

	printf("Birth Month (1-12)            :");
	scanf("%d", &birthMonth);
	do
	{
		printf("Birth Month (1-12)            :");
		scanf("%d", &birthMonth);
	} while (birthMonth < 0 || birthMonth > 12); // (!(birthMonth > 0 && birthMonth < 13))

	printf("--------------------------------------\n"
		"Enter grade(s) 0.0 to 100.0,\n"
		"Minimum of 1 to a maximum of 3 grades,\n"
		"Enter a negative # to stop!\n"
		"--------------------------------------\n");
	gradePercent = gradeInput = gradeCount = 0;

	for (i = 0; i < maxGrades && gradeInput >= 0.0f; i++)
	{
		do
		{ 
		validGrade = 1; //true assume vaild grade will be entered 
		printf("Enter grade-%d                 :", gradeCount + 1);
		scanf("%f", &gradeInput);
		
		if (gradeInput > 100.0f || (gradeInput < 0.0f && !gradeCount))
		{
			validGrade = 0; //false 
		}
		} while (!validGrade);
		if (gradeInput >= 0.0f)
		{
			gradePercent += gradeInput;
			gradeCount++;
		}
	}

	gradePercent /= gradeCount; //average 
	printf("The average grade is          :%.1f\n", gradePercent);
	printf("The equivalent grade letter is:");
	if (gradePercent < 50.0f)
	{
		printf("F);
	}
	else if (gradePercent < 55.0f)
	{
		printf("D");
	}
	else if (gradePercent < 55.0f)
	{
		printf("D+");
	}
	else if (gradePercent < 60.0f)
	{
		printf("C");
	}
	else if (gradePercent < 65.0f)
	{
		printf("C+");
	}
	else if (gradePercent < 70.0f)
	{
		printf("B");
	}
	else if (gradePercent < 75.0f)
	{
		printf("B+");
	}
	else if (gradePercent < 80.0f)
	{
		printf("A");
	}
	else if (gradePercent < 85.0f)
	{
		printf("A+");
	}



		do
		{
			printf("Enter data for another student (1=YES, 0=NO):");
			scanf("%d", &moreStudents);
		} while (moreStudents > 1 || moreStudents < 0);
	} while (moreStudents);


	return 0;
}

*/

#include<stdio.h>

int main(void)
{
	int i, j;
	for (i = 0; i < 3, i++) // #of pizza to eat
	{
		
		for(j = 0; j < 5; j++) //#of bites per pizza
	}
	return 0;
}