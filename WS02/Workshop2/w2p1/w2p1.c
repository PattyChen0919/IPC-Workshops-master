/*/////////////////////////////////////////////////////////////////////////
						  Workshop - #2 (P1)
Full Name  :Pei-Ti, Chen
Student ID#:133237222
Email      :pchen81@myseneca.ca
Section    :NAA

Authenticity Declaration:

I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	float smallPrice, mediumPrice, largePrice;
	const double tax = 0.13;
	const char patSize ='S';
	int number;
	int taxes, subTotal, total;

	printf("Set Shirt Prices\n"
		   "================\n"
		   "Enter the price for a SMALL shirt: $");
	scanf("%f", &smallPrice);
	printf("Enter the price for a MEDIUM shirt: $");
	scanf("%f", &mediumPrice);
	printf("Enter the price for a LARGE shirt: $"); 
	scanf("%f", &largePrice);

	printf("\nShirt Store Price List\n"
		   "======================\n");
    printf("SMALL  : $%.2f\n" 
		   "MEDIUM : $%.2f\n"
	       "LARGE  : $%.2f\n",smallPrice, mediumPrice, largePrice);

	printf("\nPatty's shirt size is '%c'\n"
		   "Number of shirts Patty is buying: ", patSize);
    scanf("%d", &number);

	subTotal = (int)(((number * smallPrice) + 0.005) * 100);
	taxes = (int)(((subTotal / 100.0 * tax) + 0.005) * 100);
	total = subTotal + taxes;
	
	printf("\nPatty's shopping cart...\n"
		   "Contains : %d shirts\n"
		   "Sub-total: $%.4lf\n"
		   "Taxes    : $ %.4lf\n"
		   "Total    : $%.4lf\n", number, subTotal / 100.0, taxes/100.0, total/100.0);

	return 0;
}
