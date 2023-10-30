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
	const char pattySize = 'S';
	const char tommySize = 'L';
	const char sallySize = 'M';

	int pattyNumber, tommyNumber, sallyNumber, totalNumber;
	int taxes1, taxes2, taxes3;
	int subTotal1, subTotal2, subTotal3;
	int total1, total2, total3;
	int finalTaxes, finalSubTotal, finalTotal;
	int remain1, remain2, remain3, remain4, remain5, remain6;
	int tooniesExcludTax, looniesExcludTax, quarersExcludTax, dimesExcludTax, nickelsExcludTax, penniesExcludTax;
	int tooniesIncludTax, looniesIncludTax, quarersIncludTax, dimesIncludTax, nickelsIncludTax, penniesIncludTax;
	
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
		   "LARGE  : $%.2f\n", smallPrice, mediumPrice, largePrice);

	printf("\nPatty's shirt size is '%c'\n"
		   "Number of shirts Patty is buying: ", pattySize);
	scanf("%d", &pattyNumber);

	printf("\nTommy's shirt size is '%c'\n"
		   "Number of shirts Tommy is buying: ", tommySize);
	scanf("%d", &tommyNumber);

	printf("\nSally's shirt size is '%c'\n"
		   "Number of shirts Sally is buying: ", sallySize);
	scanf("%d", &sallyNumber);

	subTotal1 = (int)(((pattyNumber * smallPrice) + 0.005) * 100);
	taxes1 = (int)(((subTotal1 / 100.0 * tax) + 0.005) * 100);
	total1 = subTotal1 + taxes1;

	printf("\nCustomer Size Price Qty Sub-Total       Tax     Total\n"
		   "-------- ---- ----- --- --------- --------- ---------\n");
	printf("Patty    %c    %.2f   %d  %3.4lf   %2.4lf  %3.4lf\n", 
		pattySize, smallPrice, pattyNumber, subTotal1/100.0, taxes1 / 100.0, total1 / 100.0);

	subTotal2 = (int)(((sallyNumber * mediumPrice) + 0.005) * 100);
	taxes2 = (int)(((subTotal2 / 100.0 * tax) + 0.005) * 100);
	total2 = subTotal2 + taxes2;
	printf("Sally    %c    %.2f   %d  %3.4lf   %2.4lf  %3.4lf\n",
		sallySize, mediumPrice, sallyNumber, subTotal2 / 100.0, taxes2 / 100.0, total2 / 100.0);

	subTotal3 = (int)(((tommyNumber * largePrice) + 0.005) * 100);
	taxes3 = (int)(((subTotal3 / 100.0 * tax) + 0.005) * 100);
	total3 = subTotal3 + taxes3;

	printf("Tommy    %c    %.2f   %d  %3.4lf   %2.4lf  %3.4lf\n",
		tommySize, largePrice, tommyNumber, subTotal3 / 100.0, taxes3 / 100.0, total3 / 100.0);
	
	finalSubTotal = subTotal1 + subTotal2 + subTotal3;
	finalTaxes = taxes1 + taxes2 + taxes3;
	finalTotal = total1 + total2 + total3;

	printf("-------- ---- ----- --- --------- --------- ---------\n"
		   "                         %3.4lf   %2.4lf  %3.4lf\n", finalSubTotal / 100.0, finalTaxes / 100.0, finalTotal / 100.0);
	
	printf("\nDaily retail sales represented by coins\n"
		   "=======================================\n");

	tooniesExcludTax = finalSubTotal / 200;
	remain1 = finalSubTotal % 200;

	looniesExcludTax = remain1 / 100;
	remain2 = remain1 % 100;

	quarersExcludTax = remain2 /25;
	remain3 = remain2 % 25;

	dimesExcludTax = remain3 / 10;
	remain4 = remain3 % 10;

	nickelsExcludTax = remain4 / 5;
	remain5 = remain4 % 5;

	penniesExcludTax = remain5 / 1;
	remain6 = remain5 % 1;

	printf("\nSales EXCLUDING tax\n"
		   "Coin     Qty   Balance\n"
		   "-------- --- ---------\n");
	printf("%22.4lf\n", finalSubTotal/100.0);
	printf("Toonies  %3d %9.4lf\n", tooniesExcludTax, remain1 / 100.0);
	printf("Loonies  %3d %9.4lf\n", looniesExcludTax, remain2 / 100.0);
	printf("Quarters %3d %9.4lf\n", quarersExcludTax, remain3 / 100.0);
	printf("Dimes    %3d %9.4lf\n", dimesExcludTax, remain4 / 100.0);
	printf("Nickels  %3d %9.4lf\n", nickelsExcludTax, remain5 / 100.0);
	printf("Pennies  %3d %9.4lf\n", penniesExcludTax, remain6 / 100.0);
	
	totalNumber = pattyNumber + tommyNumber + sallyNumber;

	printf("\nAverage cost/shirt: $%.4lf\n\n", (((double)finalSubTotal / (double)totalNumber)+0.005)/100.0);

	tooniesIncludTax = finalTotal / 200;
	remain1 = finalTotal % 200;

	looniesIncludTax = remain1 / 100;
	remain2 = remain1 % 100;

	quarersIncludTax = remain2 / 25;
	remain3 = remain2 % 25;

	dimesIncludTax = remain3 / 10;
	remain4 = remain3 % 10;

	nickelsIncludTax = remain4 / 5;
	remain5 = remain4 % 5;

	penniesIncludTax = remain5 / 1;
	remain6 = remain5 % 1;

	printf("Sales INCLUDING tax\n"
		   "Coin     Qty   Balance\n"
		   "-------- --- ---------\n");
	printf("%22.4lf\n", finalTotal / 100.0);
	printf("Toonies  %3d %9.4lf\n", tooniesIncludTax, remain1 / 100.0);
	printf("Loonies  %3d %9.4lf\n", looniesIncludTax, remain2 / 100.0);
	printf("Quarters %3d %9.4lf\n", quarersIncludTax, remain3 / 100.0);
	printf("Dimes    %3d %9.4lf\n", dimesIncludTax, remain4 / 100.0);
	printf("Nickels  %3d %9.4lf\n", nickelsIncludTax, remain5 / 100.0);
	printf("Pennies  %3d %9.4lf\n", penniesIncludTax, remain6 / 100.0);
	
	printf("\nAverage cost/shirt: $%.4lf\n\n", (((double)finalTotal / (double)totalNumber) + 0.005) / 100.0);
	
	return 0;
}
