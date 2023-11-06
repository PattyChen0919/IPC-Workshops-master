/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main(void)
{
	int grade;
	printf("Enter a whole number grade:");
	scanf("%d", &grade);

	if (grade >= 0 && grade < 60)
	{
		if (grade % 10 == 0 || grade % 10 == 1 || grade % 10 == 2)
		{
			printf("F-");
		}
		else if (grade % 10 == 3 || grade % 10 == 4 || grade % 10 == 5 || grade % 10 == 6)
		{
			printf("F");
		}
		else if (grade % 10 == 7 || grade % 10 == 8 || grade % 10 == 9)
		{
			printf("F+");
		}
	}
	else if (grade >= 60 && grade < 70)
	{
		if (grade % 10 == 0 || grade % 10 == 1 || grade % 10 == 2)
		{
			printf("D-");
		}
		else if (grade % 10 == 3 || grade % 10 == 4 || grade % 10 == 5 || grade % 10 == 6)
		{
			printf("D");
		}
		else if (grade % 10 == 7 || grade % 10 == 8 || grade % 10 == 9)
		{
			printf("D+");
		}
	}
	else if (grade >= 70 && grade < 80)
	{
		if (grade % 10 == 0 || grade % 10 == 1 || grade % 10 == 2)
		{
			printf("C-");
		}
		else if (grade % 10 == 3 || grade % 10 == 4 || grade % 10 == 5 || grade % 10 == 6)
		{
			printf("C");
		}
		else if (grade % 10 == 7 || grade % 10 == 8 || grade % 10 == 9)
		{
			printf("C+");
		}
	}
	else if (grade >= 80 && grade < 90)
	{
		if (grade % 10 == 0 || grade % 10 == 1 || grade % 10 == 2)
		{
			printf("B-");
		}
		else if (grade % 10 == 3 || grade % 10 == 4 || grade % 10 == 5 || grade % 10 == 6)
		{
			printf("B");
		}
		else if (grade % 10 == 7 || grade % 10 == 8 || grade % 10 == 9)
		{
			printf("B+");
		}
	}
	else if (grade >= 90 && grade <= 1000)
	{
		if (grade % 10 == 0 || grade % 10 == 1 || grade % 10 == 2)
		{
			printf("A-");
		}
		else if (grade % 10 == 3 || grade % 10 == 4 || grade % 10 == 5 || grade % 10 == 6)
		{
			printf("A");
		}
		else if (grade % 10 == 7 || grade % 10 == 8 || grade % 10 == 9)
		{
			printf("A+");
		}
	}
	return 0;
}
*/


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int age;

	do {
		printf("Your age:");
		scanf("%d", &age);
	} while (age < 0 || age > 130);

	if (age < 18)
	{
		printf("Price : $5");
	}
	else if (age >= 18 && age < 50)
	{
		printf("Price : $10");
	}
	else
	{
		printf("Price : $7");
	}
	return 0;
}
