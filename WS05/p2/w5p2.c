/*/////////////////////////////////////////////////////////////////////////
						  Workshop - #5 (P2)
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
#define MIN_YEAR 2012
#define MAX_YEAR 2022
#define LOG_DAYS 3
#define	MIN_RATE 0.0
#define MAX_RATE 5.0

int main(void)
{
	const int JAN = 1;
	const int DEC = 12;
	int year, month, valid, i;
	double morningRate = 0, eveningRate = 0, sumMorning = 0, sumEvening = 0;


	printf("General Well-being Log\n"
		   "======================\n");

	do
	{
		valid = 1;
		printf("Set the year and month for the well-being log (YYYY MM): ");
		scanf("%d %d", &year, &month);
		if (year < MIN_YEAR || year > MAX_YEAR)
		{
			printf("   ERROR: The year must be between %d and %d inclusive\n", MIN_YEAR, MAX_YEAR);
			valid = 0;
		}

		if (month < JAN || month > DEC)
		{
			printf("   ERROR: Jan.(%d) - Dec.(%d)\n", JAN, DEC);
			valid = 0;
		}
	} while (!valid);

	printf("\n");
	printf("*** Log date set! ***\n\n");

	for (i = 1; i <= LOG_DAYS; i++)
	{
		printf("%d-", year);

		switch (month)
		{
		case 1:
			printf("JAN");
			break;
		case 2:
			printf("FEB");
			break;
		case 3:
			printf("MAR");
			break;
		case 4:
			printf("APR");
			break;
		case 5:
			printf("MAY");
			break;
		case 6:
			printf("JUN");
			break;
		case 7:
			printf("JUL");
			break;
		case 8:
			printf("AUG");
			break;
		case 9:
			printf("SEP");
			break;
		case 10:
			printf("OCT");
			break;
		case 11:
			printf("NOV");
			break;
		case 12:
			printf("DEC");
			break;
		}

		printf("-%02d\n", i);

		do
		{
			valid = 1;
			printf("   Morning rating (%.1f-%.1f): ", MIN_RATE, MAX_RATE);
			scanf("%lf", &morningRate);
			if (morningRate < MIN_RATE || morningRate > MAX_RATE)
			{
				printf("      ERROR: Rating must be between %.1f and %.1f inclusive!\n", MIN_RATE, MAX_RATE);
				valid = 0;
			}
		} while (!valid);

		do
		{
			valid = 1;
			printf("   Evening rating (%.1f-%.1f): ", MIN_RATE, MAX_RATE);
			scanf("%lf", &eveningRate);
			if (eveningRate < MIN_RATE || eveningRate > MAX_RATE)
			{
				printf("      ERROR: Rating must be between %.1f and %.1f inclusive!\n", MIN_RATE, MAX_RATE);
				valid = 0;
			}
		} while (!valid);

		printf("\n");
		sumMorning += morningRate;
		sumEvening += eveningRate;
	}

	printf("Summary\n"
	       "=======\n");
	printf("Morning total rating: %6.3lf\n", sumMorning);
	printf("Evening total rating: %6.3lf\n", sumEvening);
	printf("----------------------------\n"
	       "Overall total rating: %6.3lf\n", sumMorning + sumEvening);
	printf("\n");


	printf("Average morning rating: %4.1lf\n", sumMorning / LOG_DAYS);
	printf("Average evening rating: %4.1lf\n", sumEvening / LOG_DAYS);
	printf("----------------------------\n"
		   "Average overall rating: %4.1lf\n", (((sumMorning / LOG_DAYS) + (sumEvening / LOG_DAYS)) / 2)); 

	return 0;
}