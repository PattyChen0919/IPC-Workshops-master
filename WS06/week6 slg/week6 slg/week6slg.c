#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*int main(void)
{
	int x = 0;
	int y;
	while (x < 10)
	{
		scanf("%d", &y);
		x += y;
	}
	return 0;
}
*/

/*int main(void)
{
	int i;
	while (i <= 0);
	{
		printf("number:");
		scanf("%d", &i);
	} 
	return 0;
}
*/


/*
int main(void)
{
	int i, fact, sum = 0;
	
	do {
		printf("enter number:");
		scanf("%d", &i);
	} while (i <= 0);
	for (fact = i; fact > 0; fact--);
	{
		printf("%d *");
		sum += fact;
		
	}
	printf("%d factorial is %d", i, sum);
		return 0;
}
*/


/*int main(void)
{

	int input, sum = 1;

	do
	{
		printf("enter input plz:");
		scanf("%d", &input);

	} while (input <= 0);

	for (; input > 1; input--)
	{
		printf("%d *", input);
		sum *= input;
	}

	printf("1 = %d\n", sum);
	return 0;
}

*/

#define PYRAMID_SIZE 10
int main(void)
{
	int i, j;
	for (i = 1; i <= PYRAMID_SIZE; i++)  //i = 0; i < PYRAMID_SIZE; i++
	{
		for (j = 0; j < i; j++)  //j = 0; j <= i; j++
		{
			printf("*");
			
		}
		printf("\n");
	}
	
	return 0;
}
