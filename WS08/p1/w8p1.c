/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #8 (P1)
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


// System Libraries

#include <stdio.h>

// User Libraries

#include "w8p1.h"

// 1. Get user input of int type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)

int getIntPositive(int* num)
{
	int value;

	do
	{
		scanf("%d", &value);
		if (value <= 0)
		{
			printf("ERROR: Enter a positive value: ");
		}
	} while (value <= 0);

	if (num != NULL)
		*num = value;

	return value;
}
// 2. Get user input of double type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)

double getDoublePositive(double* num)
{
	double value;
	do
	{
		scanf("%lf", &value);
		if (value <= 0.0)
		{
			printf("ERROR: Enter a positive value: ");
		}
	} while (value <= 0.0);

	if (num != NULL)
	{
		*num = value;
	}
	return value;
}

// 3. Opening Message (include the number of products that need entering)

void openingMessage(const int numProduct)
{
	printf("Cat Food Cost Analysis\n"
		   "======================\n\n");
	printf("Enter the details for %d dry food bags of product data for analysis.\n", MAX_NUM_PRODUCT);
	printf("NOTE: A 'serving' is %dg\n", NUM_GRAMS);

	return;
}
// 4. Get user input for the details of cat food product

struct CatFoodInfo getCatFoodInfo(const int sequenceNumProduct)
{
	struct CatFoodInfo food = { 0 };

	printf("\nCat Food Product #%d\n", sequenceNumProduct);
	printf("--------------------\n");

	printf("SKU           : ");
	food.sku = getIntPositive(NULL);	//getIntPositive(&food.sku);

	printf("PRICE         : $");
	food.price = getDoublePositive(NULL);

	printf("WEIGHT (LBS)  : ");
	getDoublePositive(&food.weight);

	printf("CALORIES/SERV.: ");
	food.calories = getIntPositive(NULL);

	return food;
}

// 5. Display the formatted table header
void displayCatFoodHeader(void)
{
	printf("\nSKU         $Price    Bag-lbs Cal/Serv\n");
	printf("------- ---------- ---------- --------\n");
}

// 6. Display a formatted record of cat food data

void displayCatFoodData(const int sku, const double* price, const double* weight, const int calories)
{
	printf("%07d %10.2lf %10.1lf %8d\n", sku, *price, *weight, calories);
}

// 7. Logic entry point

void start()
{
	struct CatFoodInfo catFood[MAX_NUM_PRODUCT] = { {0} };

	openingMessage(MAX_NUM_PRODUCT);

	int i;
	for (i = 0; i < MAX_NUM_PRODUCT; i++)
	{
		catFood[i] = getCatFoodInfo(i + 1);
	}
	displayCatFoodHeader();

	for (i = 0; i < MAX_NUM_PRODUCT; i++)
	{
		displayCatFoodData(catFood[i].sku, &catFood[i].price, &catFood[i].weight, catFood[i].calories);
	}
}