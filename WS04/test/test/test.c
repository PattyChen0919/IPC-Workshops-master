//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>

//int main(void)
//{
//    const int count = 5;
//    int i;
//    double grade, totalGrades = 0.0;
//    // Scenario 1
//    for (i = 0; i < count; i++)
//    {
//        printf("Enter a grade for student-%d:",
//            i + 1);
//        scanf("%lf", &grade);
//        totalGrades += grade;
//    }
//
//    printf("The toal of all grades is: %.4lf\n",
//        totalGrades);
//
//	return 0;
//}

//int main(void)
//{
//	int n = 5;
//	int i = 0;
//
//	for (i = 0; i < n; i++)
//	{
//		printf("H");
//	}
//
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//
//int main(void)
//{
//	char loopType;
//	int number, i;
//
//	printf("+----------------------+\n"
//		"Loop application STARTED\n"
//		"+----------------------+\n");
//	putchar('\n');
//	//printf("A");
//	do
//	{
//		printf("\n");
//		printf("D = do/while | W = while | F = for | Q = quit\n"
//			"Enter loop type and the number of times to iterate(Quit = Q0) :");
//		scanf(" %c%d", &loopType, &number);
//		switch (loopType)
//		{
//		case 'D':
//			if (number >= 3 && number <= 20)
//			{
//				printf("DO-WHILE:");
//				i = 0;
//				do
//				{
//					printf("%c", loopType);
//					i++;
//				} while (i < number);
//			}
//			else
//			{
//				printf("ERROR: The number of iterations must be between 3-20 inclusive!\n");
//			}
//			printf("\n");
//			break;
//
//		case 'W':
//			if (number >= 3 && number <= 20)
//			{
//				printf("WHILE   :");
//				i = 0;
//				while (i < number)
//				{
//					printf("%c", loopType);
//					i++;
//				}
//			}
//			else
//			{
//				printf("ERROR: The number of iterations must be between 3-20 inclusive!\n");
//			}
//			printf("\n");
//			break;
//
//		case 'F':
//			if (number >= 3 && number <= 20)
//			{
//				printf("FOR     :");
//				for (i = 0; i < number; i++)
//				{
//					printf("%c", loopType);
//				}
//			}
//			else
//			{
//				printf("ERROR: The number of iterations must be between 3-20 inclusive!\n");
//			}
//			printf("\n");
//			break;
//
//		case 'Q':
//			if (number != 0)
//			{
//				printf("ERROR: To quit, the number of iterations should be 0!\n");
//			}
//			printf("\n");
//			break;
//
//		default: 
//			printf("ERROR: Invalid entered value(s)!\n");
//		}
//	} while (!(loopType == 'Q' && number == 0));
//
//	printf("+--------------------+\n"
//		"Loop application ENDED\n"
//		"+--------------------+\n");
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	char loopType;
	int number, i;


	printf("+----------------------+\n"
		"Loop application STARTED\n"
		"+----------------------+\n\n");



	do
	{
		printf("D = do/while | W = while | F = for | Q = quit\n"
			"Enter loop type and the number of times to iterate(Quit = Q0) :");
		scanf(" %c%d", &loopType, &number);

		if (loopType != 'D' && loopType != 'W' && loopType != 'F' && loopType != 'Q')
		{
			printf("ERROR : Invalid entered value(s)!\n");
			printf("\n");
		}

		else if ((loopType == 'D' || loopType == 'W' || loopType == 'F') && (number < 3 || number > 20))
		{
			printf("ERROR: The number of iterations must be between 3-20 inclusive!\n");
			printf("\n");
		}

		else if (loopType == 'Q' && number != 0)
		{
			printf("ERROR: To quit, the number of iterations should be 0!\n");
			printf("\n");
		}

		else if (loopType == 'D' && (number >= 3 && number <= 20))
		{
			printf("DO-WHILE:");
			do
			{
				printf("%c", loopType);
				number--;
			} while (number > 0);
			printf("\n\n");
		}

		else if (loopType == 'W' && (number >= 3 && number <= 20))
		{
			printf("WHILE:");
			while (number > 0)
			{
				printf("%c", loopType);
				number--;
			}
			printf("\n\n");
		}

		else if (loopType == 'F' && (number >= 3 && number <= 20))
		{
			printf("FOR:");
			for (i = 0; i < number; i++)
				printf("%c", loopType);
			printf("\n\n");
		}
	} while (!(loopType == 'Q' && number == 0));

	printf("+--------------------+\n"
		"Loop application ENDED\n"
		"+--------------------+");

	return 0;
}