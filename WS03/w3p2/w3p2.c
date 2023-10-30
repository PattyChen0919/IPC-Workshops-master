#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	const char coffeeStrength, coffeeStrengthlight = 'l' || 'L', coffeeStrengthmedium = 'm' || 'M', coffeeStrengthrich = 'r' || 'R';
	const char coffeeType1, coffeeType2, coffeeType3, coffeeTypelight = 'l' || 'L', coffeeTypemedium = 'm' || 'M', coffeeTyperich = 'r' || 'R';
	const int coffeeWeight, coffeeWeight1 = 250, coffeeWeight2 = 500, coffeeWeight3 = 1000;
	const char cream, Yes = 'y' || 'Y', No = 'n' || 'N';
	double lbs1, lbs2, lbs3;

	printf("Take a Break - Coffee Shop\n"
		"==========================\n\n");

	printf("Enter the coffee product information being sold today...\n\n");

	printf("COFFEE - 1...\n"
		"Type([L]ight, [M]edium, [R]ich) :"); 
	scanf("%c", &coffeeType1);
	printf("Bag weight(g) :");
	scanf("%d", &coffeeWeight);
	printf("Best served with cream([Y]es, [N]o) :");
	scanf(" %c", &cream);

	printf("\n\nCOFFEE - 2..."
		"Type([L]ight, [M]edium, [R]ich) :");
	scanf("  %c", &coffeeType2);
	printf("Bag weight(g) :");
	scanf("%d", &coffeeWeight);
	printf("Best served with cream([Y]es, [N]o) :");
	scanf("    %c", &cream);
	
	printf("\n\nCOFFEE - 3..."
		"Type([L]ight, [M]edium, [R]ich) :");
	scanf("     %c", &coffeeType3);
	printf("Bag weight(g) :");
	scanf("%d", &coffeeWeight);
	printf("Best served with cream([Y]es, [N]o) :");
	scanf("      %c", &cream);

	lbs1 = coffeeWeight1 * 0.002204;
	lbs2 = coffeeWeight2 * 0.002204;
	lbs3 = coffeeWeight3 * 0.002204;

	printf("\n---+------------------------+---------------+-------+\n"
		     "   | Coffee                 | Packaged      | Best  |\n"
		     "   | Type                   | Bag Weight    | Served|\n"
		     "   +------------------------+---------------+ With  |\n"
		     "ID | Light | Medium | Rich  |  (G)  | Lbs   | Cream |\n"
		     "---+------------------------+---------------+-------|\n");
	printf(" 1 |   %d  |   %d   |   %d  |  %4d |  %6.3lf|   %d  |\n",
		!(coffeeType1 == 'l' || coffeeType1 == 'L'), coffeeType1 == 'm' && coffeeType1 == 'M', coffeeType1 == 'r' && coffeeType1 == 'R',
		coffeeWeight1, lbs1, cream == 'y' || 'Y');
	printf(" 2 |   %d  |   %d   |   %d  |  %4d |  %6.3lf|   %d  |\n",
		coffeeType2 == 'l' && coffeeType2 == 'L', coffeeType2 == 'm' && coffeeType2 == 'M', !(coffeeType2 == 'r' || coffeeType2 == 'R'),
		coffeeWeight2, lbs2, cream == 'y' || 'Y');
	printf(" 3 |   %d  |   %d   |   %d  |  %4d |  %6.3lf|   %d  |\n\n",
		coffeeType3 == 'l' && coffeeType3 == 'L', !(coffeeType3 == 'm' || coffeeType3 == 'M'), coffeeType3 == 'r' && coffeeType3 == 'R',
		coffeeWeight3, lbs3 +0.001, cream == 'y' || 'Y');

	return 0;
}