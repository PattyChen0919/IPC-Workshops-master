/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #2 (P1)
Full Name  :
Student ID#:
Email      :
Section    :

Authenticity Declaration:

I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    //const double TAX = 0.13;
    //const char patSize = 'S';
    double small, medium, large;

    printf("Enter the price for a SMALL shirt: $ ");
    scanf("%lf", &small);
    printf("Enter the price for a MEDIUM shirt: $ ");
    scanf("%lf", &medium);
    printf("Enter the price for a LARGE shirt: $ ");
    scanf("%lf", &large);

    printf("Size: %.2lf %.2lf %.2lf", small, medium, large);

    //printf("")

    return 0;
}