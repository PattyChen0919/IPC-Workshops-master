/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #8 (P2)
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

// User-Defined Libraries
#include "w8p2.h"

// ----------------------------------------------------------------------------
// PART-1

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
	printf("SKU         $Price    Bag-lbs Cal/Serv\n"
	       "------- ---------- ---------- --------\n");
}

// 6. Display a formatted record of cat food data
void displayCatFoodData(const int sku, const double* price, const double* weight, const int calories)
{
	printf("%07d %10.2lf %10.1lf %8d\n", sku, *price, *weight, calories);
}

// ----------------------------------------------------------------------------
// PART-2

// 8. convert lbs: kg (divide by 2.20462)
double convertLbsKg(const double* lbs, double* kg)
{
	double badKg = *lbs / CONVERSION_KG;
	
    if (kg != NULL) 
	{
		*kg = badKg;
    }
    return badKg;
}

// 9. convert lbs: g (call convertKG, then * 1000)
int convertLbsG(const double* lbs, int* g)
{
	int badg = (*lbs / CONVERSION_KG) * 1000;

	if (g != NULL) 
	{
		*g = badg;
	}
	return badg;
}

// 10. convert lbs: kg and g
void convertLbs(const double* lbs, double* kg, int* g)
{
	convertLbsKg(lbs, kg);
	convertLbsG(lbs, g);
}

// 11. calculate: servings based on gPerServ
double calculateServings(const int sizeGrams, const int gramsProduct, double* numOfServings)
{
	double serve = (double)(gramsProduct) / sizeGrams;
	if (numOfServings != NULL) 
	{
		*numOfServings = serve;
	}
	return *numOfServings;
}

// 12. calculate: cost per serving // price/serving
double calculateCostPerServing(const double productPrice, const double* totalNumSer, double* costPerSer)
{
	double calSer = productPrice / *totalNumSer;
	if (costPerSer != NULL) 
	{
		*costPerSer = calSer;
	}
	return *costPerSer;
}


// 13. calculate: cost per calorie // 1.52/325
double calculateCostPerCal(const double productPrice, const double* totalNumCal, double* costPerCal)
{
	double costCal = productPrice / *totalNumCal;
	if (costPerCal != NULL) 
	{
		*costPerCal = costCal;
	}
	return *costPerCal;
}

// 14. Derive a reporting detail record based on the cat food product data
struct ReportData calculateReportData(const struct CatFoodInfo productData)
{
	struct ReportData report;
	double totalPerCal;
	report.sku = productData.sku; //return by argument, back to pointer    //producatData.sku = report.sku(NULL) = return by value
	report.productPrice = productData.price;
	report.CaloriesServing = productData.calories; 
	report.lbs = productData.weight;
	convertLbs(&report.lbs, &report.kg, &report.gram); 
	calculateServings(NUM_GRAMS, report.gram, &report.totalSer);  //report.totalSer = calculateServings(NUM_GRAMS, report.gram, NULL);
	
	calculateCostPerServing(report.productPrice, &report.totalSer, &report.servingCost);
	totalPerCal = report.totalSer * report.CaloriesServing;
	calculateCostPerCal(report.productPrice, &totalPerCal, &report.caloriesCost);
	return report;
}

// 15. Display the formatted table header for the analysis results
void displayReportHeader(void)
{
	printf("Analysis Report (Note: Serving = %dg)\n", NUM_GRAMS);
	printf("---------------\n"
	       "SKU         $Price    Bag-lbs     Bag-kg     Bag-g Cal/Serv Servings  $/Serv   $/Cal\n"
	       "------- ---------- ---------- ---------- --------- -------- -------- ------- -------\n");
}

// 16. Display the formatted data row in the analysis table
void displayReportData(const struct ReportData report, const int cheapest) 
{
	printf("%07d %10.2lf %10.1lf %10.4lf %9d %8d %8.1lf %7.2lf %7.5lf",
		report.sku, report.productPrice, report.lbs, report.kg, report.gram, 
		report.CaloriesServing, report.totalSer, report.servingCost, report.caloriesCost);

	if (cheapest == report.sku) 
	{
		printf(" ***");
	}
	printf("\n");
}

// 17. Display the findings (cheapest)
void displayFinalAnalysis(const struct CatFoodInfo catFood)
{

	printf("\nFinal Analysis\n"
		   "--------------\n"
		   "Based on the comparison data, the PURRR-fect economical option is:\n"
		   "SKU:%07d Price: $%.2lf\n\n", catFood.sku, catFood.price);
	printf("Happy shopping!\n\n");
}
// ----------------------------------------------------------------------------

// 7. Logic entry point
void start()
{
	int i;
	struct CatFoodInfo catFood[MAX_NUM_PRODUCT] = { {0} };
	struct ReportData reportData[MAX_NUM_PRODUCT] = { {0} };

	openingMessage(MAX_NUM_PRODUCT);

	for (i = 0; i < MAX_NUM_PRODUCT; i++)
	{
		catFood[i] = getCatFoodInfo(i + 1);
	}
	printf("\n");

	displayCatFoodHeader();

	for (i = 0; i < MAX_NUM_PRODUCT; i++)
	{
		displayCatFoodData(catFood[i].sku, &catFood[i].price, &catFood[i].weight, catFood[i].calories);
	}

	for (i = 0; i < MAX_NUM_PRODUCT; i++)
	{
		reportData[i] = calculateReportData(catFood[i]);
	}
	printf("\n");

	displayReportHeader();
	int cheapest_index = -1;
	float cheapest_sku = 0;

	for (i = 0; i < MAX_NUM_PRODUCT; i++) 
	{
		if (cheapest_index == -1 || reportData[i].caloriesCost < reportData[i - 1].caloriesCost) 
		{
			cheapest_sku = reportData[i].sku;
			cheapest_index = i;
		}
	}

	for (i = 0; i < MAX_NUM_PRODUCT; i++)
	{
		displayReportData(reportData[i], cheapest_sku);
	}

	displayFinalAnalysis(catFood[cheapest_index]);
}
