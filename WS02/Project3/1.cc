#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    // Declare variables:
    const int QUARTER = 25, NICKEL = 5;
    double unitPrice;
    int qty, totCents, coins;

    // prompt the user for input:
    printf("Enter unit price: $");
    scanf("%lf", &unitPrice);
    printf("How many do you want?:");
    scanf("%d", &qty);

    // calculate total...
    // 1. multiply qty by unit price
    // 2. change to cents (* 100)
    // 3. apply cast to int (truncation) of double to int type
    totCents = (int)(((unitPrice * qty) + 0.005) * 100);

    printf("Unit Price : $%.4lf\n", unitPrice);
    printf("Quantity   : %d\n", qty);
    printf("Total Cents: %d\n", totCents);
    printf("Total Cents: $%.4lf\n", totCents / 100.0);

    /*  Coin     $val    Cents
        -------  ------- -------
        Toonie : $2.00   200
        Loonie : $1.00   100
        Quarter: $0.25    25
        Dime   : $0.10    10
        Nickel : $0.05     5
        Cent   : $0.01     1     */

        // number of quarters...
    coins = totCents / QUARTER;

    // The long way... and not the best way... :(
    //totCents = totCents - (coins * QUARTER);

    // :) the BEST way... use Modulus operator!!!
    // Returns the REMAINDER of the expression!!!
    totCents = totCents % QUARTER;
    printf("# of Quarters: %d (remainder:$%.2lf)\n",
        coins, totCents / 100.0);

    coins = totCents / NICKEL;    // # of coins
    //totCents = totCents % NICKEL; // remainder
    totCents %= NICKEL; // remainder
    printf("# of Nickels: %d (remainder:$%.2lf)\n",
        coins, totCents / 100.0);

    return 0;
}