/******************************************************************************
<assessment name example : Workshop - #2 (Part - 1)>
	Full Name :Pei-Ti, Chen
	Student ID# :133237222
	Email :pchen81@myseneca.ca
	Section :NAA

Authenticity Declaration :
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider.This submitted
piece of work is entirely of my own creation.
***************************************************************************** */

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main(void)

{
	//const double TAX = 0.13;
	// const char patSize = 'S';
	double small, medium, large;
	//int small = 17.96;
	//int medium = 26.96;
	//int large = 35.97;

	printf("Set Shirt Prices\n"
		"================\n");

	printf("Enter the price for a SMALL shirt :$");
	scanf("%lf", &small);

	printf("Enter the price for a MEDIUM shirt :$");
	scanf("%lf", &medium);

	printf("Enter the price for a LARGE shirt :$");
	scanf("%lf", &large);

	//printf("Shirt Store Price List\n");
	//printf("======================\n");
	//printf("SMALL : $%.2lf\n", small);
	//printf("MEDIUM : $%.2lf\n", medium);
	//printf("LARGE : $%.2lf\n", large);

	//price = TAX * 

		//printf("The size is : %lf", price);

	/*
	printf("Shirt Store Price List\n"
		"======================\n"
		"SMALL : $17.96\n"
		"MEDIUM : $26.96\n"
		"LARGE : $35.97\n\n");

	printf("Patty's shirt size is \'S\'\n"
		"Number of shirts Patty is buying : 8\n\n");

	printf("Patty's shopping cart...\n"
		   "Contains    : 8 shirts\n"
		   "Sub - total : $143.6800\n"
		   "Taxes       : $ 18.6800\n"
		   "Total       : $162.3600\n");
		   */
	return 0;
}