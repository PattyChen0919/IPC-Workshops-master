/*/////////////////////////////////////////////////////////////////////////
						  Workshop - #6 (P1)
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
#define MAX_NUMBER_OF_ITEMS 10  // 用macro來定義，如果用const會改變數質
#define MIN_NUMBER_OF_ITEMS 1

int main(void)
{
	const double MIN_INCOME = 500.00;
	const double MAX_INCOME = 400000.00;

	const double MIN_COST = 100.00;
	const int MIN_PRIORITY = 1;
	const int MAX_PRIORITY = 3;

	double income;
	int numOfItems, i;
	double cost[MAX_NUMBER_OF_ITEMS] = { 0.0 };
	int priority[MAX_NUMBER_OF_ITEMS] = { 0 };
	char finance[MAX_NUMBER_OF_ITEMS] = { 0 };
	double totalCost = 0;
	int valid;  // is not nest, is sequence, so only need one valid 

	printf("+--------------------------+\n"
	       "+   Wish List Forecaster   |\n"
		   "+--------------------------+\n\n");
	do
	{
		valid = 1;
		printf("Enter your monthly NET income: $");
		scanf("%lf", &income);

		if (income < MIN_INCOME)
		{
			valid = 0;
			printf("ERROR: You must have a consistent monthly income of at least $%.2lf\n\n", MIN_INCOME);
		}

		if (income > MAX_INCOME)
		{
			valid = 0;
			printf("ERROR: Liar! I'll believe you if you enter a value no more than $%.2lf\n\n", MAX_INCOME);
		}
	} while (!valid);
	printf("\n");

	do
	{
		valid = 1;
		printf("How many wish list items do you want to forecast?: ");
		scanf("%d", &numOfItems);

		if (numOfItems < MIN_NUMBER_OF_ITEMS || numOfItems > MAX_NUMBER_OF_ITEMS)
		{
			valid = 0;
			printf("ERROR: List is restricted to between %d and %d items.\n\n", MIN_NUMBER_OF_ITEMS, MAX_NUMBER_OF_ITEMS);
		}
	} while (!valid);

	for (i = 0; i < numOfItems; i++)
	{
		printf("\n");
		printf("Item-%d Details:\n", i + 1);  //test 10 

		do
		{
			valid = 1;
			printf("   Item cost: $");
			scanf("%lf", &cost[i]);
			if (cost[i] < MIN_COST)
			{
				valid = 0;
				printf("      ERROR: Cost must be at least $%.2lf\n", MIN_COST);
			}
		} while (!valid);

		do
		{
			valid = 1;
			printf("   How important is it to you? [1=must have, 2=important, 3=want]: ");
			scanf("%d", &priority[i]);
			if (priority[i] < MIN_PRIORITY || priority[i] > MAX_PRIORITY)
			{
				valid = 0;
				printf("      ERROR: Value must be between %d and %d\n", MIN_PRIORITY, MAX_PRIORITY);
			}
		} while (!valid);

		do
		{
			valid = 1;
			printf("   Does this item have financing options? [y/n]: ");
			scanf(" %c", &finance[i]);
			if (finance[i] != 'y' && finance[i] != 'n')
			{
				valid = 0;
				printf("      ERROR: Must be a lowercase 'y' or 'n'\n");
			}
		} while (!valid);
	}

	printf("\n");
	printf("Item Priority Financed        Cost\n"
		   "---- -------- -------- -----------\n");

	for (i = 0; i < numOfItems; i++)
	{
		printf("%3d  %5d    %5c    %11.2lf\n", i + 1, priority[i], finance[i], cost[i]);
		totalCost += cost[i];
	}
	printf("---- -------- -------- -----------\n"
		   "                      $%11.2lf\n\n", totalCost);

	printf("Best of luck in all your future endeavours!\n");

	return 0;
}