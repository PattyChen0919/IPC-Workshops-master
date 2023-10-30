/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #3 (P2)
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
	// You will need this when converting from grams to pounds (lbs)
	const double GRAMS_IN_LBS = 453.5924;
	char coffeeType1, coffeeType2, coffeeType3;
	int coffeeWeight1, coffeeWeight2, coffeeWeight3;
	char cream1, cream2, cream3;
	char coffeeStrength, creamGuest;

	int dailyServings;

	printf("Take a Break - Coffee Shop\n"
			"==========================\n\n");

	printf("Enter the coffee product information being sold today...\n\n");

	printf("COFFEE-1...\n"
		   "Type ([L]ight,[M]edium,[R]ich): ");
	scanf("%c", &coffeeType1);
	printf("Bag weight (g): ");
	scanf("%d", &coffeeWeight1);
	printf("Best served with cream ([Y]es,[N]o): ");
	scanf(" %c", &cream1);

	printf("\nCOFFEE-2...\n"
		   "Type ([L]ight,[M]edium,[R]ich): ");
	scanf("  %c", &coffeeType2);
	printf("Bag weight (g): ");
	scanf("%d", &coffeeWeight2);
	printf("Best served with cream ([Y]es,[N]o): ");
	scanf("    %c", &cream2);

	printf("\nCOFFEE-3...\n"
		   "Type ([L]ight,[M]edium,[R]ich): ");
	scanf("     %c", &coffeeType3);
	printf("Bag weight (g): ");
	scanf("%d", &coffeeWeight3);
	printf("Best served with cream ([Y]es,[N]o): ");
	scanf("      %c", &cream3);

	printf("\n"
		   "---+------------------------+---------------+-------+\n"
		   "   |    Coffee              |   Packaged    | Best  |\n"
		   "   |     Type               |  Bag Weight   | Served|\n"
		   "   +------------------------+---------------+ With  |\n"
		   "ID | Light | Medium | Rich  |  (G) | Lbs    | Cream |\n"
		   "---+------------------------+---------------+-------|\n");
	printf(" 1 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n",
			coffeeType1 == 'l' || coffeeType1 == 'L', coffeeType1 == 'm' || coffeeType1 == 'M', coffeeType1 == 'r' || coffeeType1 == 'R',
			coffeeWeight1, coffeeWeight1 / GRAMS_IN_LBS, cream1 == 'y' || cream1 == 'Y');
	printf(" 2 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n",
			coffeeType2 == 'l' || coffeeType2 == 'L', coffeeType2 == 'm' && coffeeType2 == 'M', coffeeType2 == 'r' || coffeeType2 == 'R',
			coffeeWeight2, coffeeWeight2 / GRAMS_IN_LBS, cream2 == 'y' || cream2 == 'Y');
	printf(" 3 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n\n",
			coffeeType3 == 'l' || coffeeType3 == 'L', coffeeType3 == 'm' || coffeeType3 == 'M', coffeeType3 == 'r' || coffeeType3 == 'R',
			coffeeWeight3, coffeeWeight3 / GRAMS_IN_LBS, cream3 == 'y' || cream3 == 'Y');

	printf("Enter how you like your coffee...\n\n");

	printf("Coffee strength ([L]ight, [M]edium, [R]ich): ");
	scanf("       %c", &coffeeStrength);
	printf("Do you like your coffee with cream ([Y]es,[N]o): ");
	scanf("        %c", &creamGuest);
	printf("Typical number of daily servings: ");
	scanf("         %d", &dailyServings);

	printf("\nThe below table shows how your preferences align to the available products:\n\n");

	printf("--------------------+-------------+-------+\n"
		   "  |     Coffee      |  Packaged   | With  |\n"
		   "ID|      Type       | Bag Weight  | Cream |\n"
		   "--+-----------------+-------------+-------+\n");
	printf(" 1|       %d         |      %d      |   %d   |\n", 
		  ((coffeeStrength == 'l' || coffeeStrength == 'L') && (coffeeType1 == 'l' || coffeeType1 == 'L')) ||
		  ((coffeeStrength == 'm' || coffeeStrength == 'M') && (coffeeType1 == 'm' || coffeeType1 == 'M')) ||
		  ((coffeeStrength == 'r' || coffeeStrength == 'R') && (coffeeType1 == 'r' || coffeeType1 == 'R')),
		  ((dailyServings >= 1 && dailyServings <= 4) && (coffeeWeight1 == 250)) ||
		  ((dailyServings >= 5 && dailyServings <= 9) && (coffeeWeight1 == 500)) ||
		  ((dailyServings >= 10) && (coffeeWeight1 == 1000)),
		  (creamGuest == 'y' || creamGuest == 'Y') && (cream1 == 'y' || cream1 == 'Y'));
	printf(" 2|       %d         |      %d      |   %d   |\n", 
		  ((coffeeStrength == 'l' || coffeeStrength == 'L') && (coffeeType2 == 'l' || coffeeType2 == 'L')) ||
		  ((coffeeStrength == 'm' || coffeeStrength == 'M') && (coffeeType2 == 'm' || coffeeType2 == 'M')) ||
		  ((coffeeStrength == 'r' || coffeeStrength == 'R') && (coffeeType2 == 'r' || coffeeType2 == 'R')),
		  ((dailyServings >= 1 && dailyServings <= 4) && (coffeeWeight2 == 250)) ||
		  ((dailyServings >= 5 && dailyServings <= 9) && (coffeeWeight2 == 500)) ||
		  ((dailyServings >= 10) && (coffeeWeight2 == 1000)),
		  (creamGuest == 'y' || creamGuest == 'Y') && (cream2 == 'y' || cream2 == 'Y'));
	printf(" 3|       %d         |      %d      |   %d   |\n\n", 
		  ((coffeeStrength == 'l' || coffeeStrength == 'L') && (coffeeType3 == 'l' || coffeeType3 == 'L')) ||
		  ((coffeeStrength == 'm' || coffeeStrength == 'M') && (coffeeType3 == 'm' || coffeeType3 == 'M')) ||
		  ((coffeeStrength == 'r' || coffeeStrength == 'R') && (coffeeType3 == 'r' || coffeeType3 == 'R')),
		  ((dailyServings >= 1 && dailyServings <= 4) && (coffeeWeight3 == 250)) ||
		  ((dailyServings >= 5 && dailyServings <= 9) && (coffeeWeight3 == 500)) ||
		  ((dailyServings >= 10) && (coffeeWeight3 == 1000)),
		  (creamGuest == 'y' || creamGuest == 'Y') && (cream3 == 'y' || cream3 == 'Y'));

	printf("Enter how you like your coffee...\n\n");

	printf("Coffee strength ([L]ight, [M]edium, [R]ich): ");
	scanf("       %c", &coffeeStrength);
	printf("Do you like your coffee with cream ([Y]es,[N]o): ");
	scanf("        %c", &creamGuest);
	printf("Typical number of daily servings: ");
	scanf("         %d", &dailyServings);

	printf("\nThe below table shows how your preferences align to the available products:\n\n");

	printf("--------------------+-------------+-------+\n"
		"  |     Coffee      |  Packaged   | With  |\n"
		"ID|      Type       | Bag Weight  | Cream |\n"
		"--+-----------------+-------------+-------+\n");
	printf(" 1|       %d         |      %d      |   %d   |\n",
		  ((coffeeStrength == 'l' || coffeeStrength == 'L') && (coffeeType1 == 'l' || coffeeType1 == 'L')) ||
		  ((coffeeStrength == 'm' || coffeeStrength == 'M') && (coffeeType1 == 'm' || coffeeType1 == 'M')) ||
		  ((coffeeStrength == 'r' || coffeeStrength == 'R') && (coffeeType1 == 'r' || coffeeType1 == 'R')),
		  ((dailyServings >= 1 && dailyServings <= 4) && (coffeeWeight1 == 250)) ||
		  ((dailyServings >= 5 && dailyServings <= 9) && (coffeeWeight1 == 500)) ||
		  ((dailyServings >= 10) && (coffeeWeight1 == 1000)),
		  (creamGuest == 'y' || creamGuest == 'Y') == (cream1 == 'y' || cream1 == 'Y'));
	printf(" 2|       %d         |      %d      |   %d   |\n",
		  ((coffeeStrength == 'l' || coffeeStrength == 'L') && (coffeeType2 == 'l' || coffeeType2 == 'L')) ||
		  ((coffeeStrength == 'm' || coffeeStrength == 'M') && (coffeeType2 == 'm' || coffeeType2 == 'M')) ||
		  ((coffeeStrength == 'r' || coffeeStrength == 'R') && (coffeeType2 == 'r' || coffeeType2 == 'R')),
		  ((dailyServings >= 1 && dailyServings <= 4) && (coffeeWeight2 == 250)) ||
		  ((dailyServings >= 5 && dailyServings <= 9) && (coffeeWeight2 == 500)) ||
		  ((dailyServings >= 10) && (coffeeWeight2 == 1000)),
		  (creamGuest == 'y' || creamGuest == 'Y') == (cream2 == 'y' || cream2 == 'Y'));
	printf(" 3|       %d         |      %d      |   %d   |\n\n",
		  ((coffeeStrength == 'l' || coffeeStrength == 'L') && (coffeeType3 == 'l' || coffeeType3 == 'L')) ||
		  ((coffeeStrength == 'm' || coffeeStrength == 'M') && (coffeeType3 == 'm' || coffeeType3 == 'M')) ||
		  ((coffeeStrength == 'r' || coffeeStrength == 'R') && (coffeeType3 == 'r' || coffeeType3 == 'R')),
		  ((dailyServings >= 1 && dailyServings <= 4) && (coffeeWeight3 == 250)) ||
		  ((dailyServings >= 5 && dailyServings <= 9) && (coffeeWeight3 == 500)) ||
		  ((dailyServings >= 10) && (coffeeWeight3 == 1000)),
		  (creamGuest == 'y' || creamGuest == 'Y') == (cream3 == 'y' || cream3 == 'Y'));
	
	printf("Hope you found a product that suits your likes!\n");
	
	return 0;
}
 

/*

Provided formatting parts for printf statements:

As described in step-7
======================
printf(" 1 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n",

As described in step-10
=======================
printf(" 1|       %d         |      %d      |   %d   |\n",

*/