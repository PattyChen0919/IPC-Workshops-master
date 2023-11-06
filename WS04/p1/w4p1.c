/*/////////////////////////////////////////////////////////////////////////
						  Workshop - #4 (P1)
Full Name  : Pei-Ti, Chen
Student ID#: 133237222
Email      : pchen81@myseneca.ca
Section    : NAA

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	char loopType;
	int iteration, number;

	printf("+----------------------+\n"
		   "Loop application STARTED\n"
		   "+----------------------+\n");
	printf("\n");
	                                      
	do
	{
		printf("D = do/while | W = while | F = for | Q = quit\n"
			   "Enter loop type and the number of times to iterate (Quit=Q0): ");
		scanf(" %c%d", &loopType, &iteration);
		switch (loopType)
		{
		case 'D':
			if (iteration >= 3 && iteration <= 20)
			{
				printf("DO-WHILE:");
				number = 0;
				do
				{
					printf("%c", loopType);
					number++;
				} while (number < iteration);
				printf("\n");
			}
			else
			{
				printf("ERROR: The number of iterations must be between 3-20 inclusive!\n\n");
			}
			printf("\n");
			break;

		case 'W':
			if (iteration >= 3 && iteration <= 20)
			{
				printf("WHILE   :");
				number = 0;
				while (number < iteration)
				{
					printf("%c", loopType);
					number++;
				}
				printf("\n");
			}
			else
			{
				printf("ERROR: The number of iterations must be between 3-20 inclusive!\n");
			}
			printf("\n");
			break;

		case 'F':
			if (iteration >= 3 && iteration <= 20)
			{
				printf("FOR     :");
				for (number = 0; number < iteration; number++)
				{
					printf("%c", loopType);
				}
				printf("\n");
			}
			else
			{
				printf("ERROR: The number of iterations must be between 3-20 inclusive!\n");
			}
			printf("\n");
			break;

		case 'Q':
			if (iteration != 0)
			{
				printf("ERROR: To quit, the number of iterations should be 0!\n");
			}
			printf("\n");
			break;

		default:
			printf("ERROR: Invalid entered value(s)!\n\n");
		}
	} while (!(loopType == 'Q' && iteration == 0));

	printf("+--------------------+\n"
		   "Loop application ENDED\n"
		   "+--------------------+\n");
	return 0;
}
