#include <stdio.h>

int main(void)
{
    int i;
    int sku[] = { 2156, 4633, 3122, 5611 };
    double price[] = { 2.34, 7.89, 6.56, 9.32 };
    const int n = 4;

    printf("  SKU Price\n");
    for (i = 0; i < n; i++)
    {
        printf("%d $%.2lf\n", sku[i], price[i]);
    }

    return 0;
}