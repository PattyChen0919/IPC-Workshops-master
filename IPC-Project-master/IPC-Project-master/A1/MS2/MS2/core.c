/*/////////////////////////////////////////////////////////////////////////
                        Assignment 1 - Milestone 2
Full Name  : PEI-TI, CHEN
Student ID#: 133237222
Email      : pchen81@myseneca.ca
Section    : NAA

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/



//
// Copy your work done from Milestone #1 (core.c) into this file
// - Organize your functions in the same order as they are listed in the core.h file
// - Also copy the commented "sections" to help with finding functions quickly!
//

#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
#include "core.h"

// As demonstrated in the course notes: 
// https://intro2c.sdds.ca/D-Modularity/input-functions#clearing-the-buffer
// Clear the standard input buffer
void clearInputBuffer(void) //will clear all the info in buffer, and let me use scanf to enter the info i want, in case if the user input somwthing i dont want, to clear  after it 
{
	// Discard all remaining char's from the standard input buffer:
	while (getchar() != '\n') // when havent meet a new line
	{
		; // do nothing!
	}
}

// Wait for user to input the "enter" key to continue
void suspend(void)
{
	printf("<ENTER> to continue...");
	clearInputBuffer();
	putchar('\n');
}

int inputInt(void)
{
	char newLine = 'x';
	int value;
	while (newLine != '\n')
	{
		scanf("%d%c", &value, &newLine);
		if (newLine != '\n')
		{
			clearInputBuffer();
			printf("Error! Input a whole number: ");
		}
	}
	return value;
}


int inputIntPositive(void)
{
	int value;
	do {
		value = inputInt();
		if (value <= 0)
		{
			printf("ERROR! Value must be > 0: ");
		}
	} while (value <= 0);
	return value;
}


int inputIntRange(int lowerBound, int upperBound) {
	int value;
	do {
		value = inputInt();
		if (value < lowerBound || value > upperBound)
		{
			printf("ERROR! Value must be between %d and %d inclusive: ", lowerBound, upperBound);
		}
	} while (value < lowerBound || value > upperBound);
	return value;
}


char inputCharOption(const char* validChars)
{
	char charValue;
	int i;
	int match = 0;

	do {
		scanf(" %c", &charValue);
		for (i = 0; validChars[i] != '\0'; i++)
		{
			if (charValue == validChars[i])
			{
				match = 1;
			}
		}

		if (match == 0)
		{
			printf("ERROR: Character must be one of [%s]: ", validChars);
		}

	} while (!match);
	return charValue;
}


void inputCString(char* Chars, int min, int max)
{
	char maxChar[50];
	int charCount = 0;
	int i;
	int match = 0;

	// user input for string
	// get number of characters in string
	do
	{
		int valid = 1;
		charCount = 0;  //charCount = '\0'
		scanf(" %[^\n]", maxChar); // keep run when [^\n] is true // same uli
		for (i = 0; i < 50 && valid == 1; i++) {

			if (maxChar[i] != '\0')
			{
				charCount++;
			}
			else if (maxChar[i] == '\0') {
				valid=0; // exit the for loop
			}
		}
		// compare minNum, maxNum, with number of char

		if (min == max && charCount != min) // 要先把min and max設成同一個數字 然後在把輸入的數字不等於其中一個
		{
			printf("ERROR: String length must be exactly %d chars: ", max);
		}
		else if (charCount > max)
		{
			printf("ERROR: String length must be no more than %d chars: ", max);
		}
		else if (charCount < min || charCount > max)
		{
			printf("ERROR: String length must be between %d and %d chars: ", min, max);
		}
		else
		{
			match = 1;
		}

		// output a statement
		// maybe we have to loop this
	} while (!match);
	
	strcpy(Chars, maxChar);


	//for (i = 0; i < 50; i++) {
	//	if (maxChar[i] != '\0') {
	//		Chars[i] = maxChar[i];
	//	}
	//	else if (maxChar[i] == '\0') {
	//		i = 50;
	//	}
	//}
	//clearInputBuffer();
	//suspend();
}


void displayFormattedPhone(const char* phone)
{
	int i;
	int valid = 1;
	int charCount = 0;

	for (i = 0; i < 50; i++) {

		if (phone == NULL) {
			valid = 0;
			i = 50;
		}
		else if (!(phone[i] >= 48 && phone[i] <= 57) && phone[i] != '\0') {
			valid = 0;
			i = 50;
		}
		else if (phone[i] == '\0') {
			i = 50;
		}
		charCount++;
	}

	if (charCount != 10 + 1 || !valid)
	{
		printf("(___)___-____");
	}
	else if (valid) {
		for (i = 0; i < MAX_PHONE_LEN; i++)
		{
			if (i == 0)
			{
				printf("(");
			}
			else if (i == 3)
			{
				printf(")");
			}
			else if (i == 6)
			{
				printf("-");
			}
			printf("%c", phone[i]);
		}
	}
}