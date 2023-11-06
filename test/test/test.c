/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int percent;
	printf("Enter a whole number percent:");
	scanf("%d", &percent);

	if (percent >= 80)
	{
		printf("Good job!");
	}
	return 0;
}
*/


/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int hours = 14, mins = 15;
	char amPm = hours < 12 ? 'A' : 'P';

	//("Enter the time");
	printf("%d:%d %cm", hours < 12 ? hours : hours -12, mins, amPm);
	return 0;
}
*/







/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	const int count = 5;
	int i, valid;
	double grade, totalGrades = 0.0, average;
	char gradeLetter;

	for (i = 0; i < count; i++)
	{
		do {
			printf("Enter a grade for student-%d:", i + 1);
			scanf("%lf", &grade);
			if (grade >= 0.0 && grade <= 100.0)
			{
				valid = 1;
				totalGrades += grade;
			}
			else
			{
				valid = 0;
				printf("Error\n");
			}
		} while (!valid);
	}

	printf("Total : %.4lf\n", totalGrades);
	average = totalGrades / count;
	printf("Average : %.4lf\n", totalGrades / count);

	if (average <= 100.0 && average >= 80.0)
	{
		printf("A\n");
	}
	else if (average < 80.0 && average >= 70.0)
	{
		printf("B\n");
	}
	else if (average < 70.0 && average >= 60.0)
	{
		printf("C\n");
	}
	else if (average < 60.0 && average >= 50.0)
	{
		printf("D\n");
	}
	else
	{
		printf("F\n");
	}

	printf("Enter grade letter:");
	scanf(" %c", &gradeLetter);


	switch (gradeLetter)
	{
	case'A':
	case'a':
		printf("80.0-100.0\n");
		break;
	case'B':
	case'b':
		printf("70.0-79.9\n");
		break;
	case'C':
	case'c':
		printf("60.0-69.9\n");
		break;
	case'D':
	case'd':
		printf("50.0-59.9\n");
		break;
	case'F':
	case'f':
		printf("<50.0\n");
		break;
	default:
		printf("Error\n");
	}

	return 0;
}
*/

/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int flag = 1;
		while (flag)
		{
			printf("Jey");
			flag = 0;
		}
	return 0;
}
*/

/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int income;
	char taxCat;
	int flag;


	do
	{
		printf("Income / Tax Category Lookup Table\n");
		printf("==================================\n");
		printf("Cat   Min       Max     Tax Rate\n");
		printf("---   ------    ------  ----------\n");
		printf("A          0     24999   1 percent\n");
		printf("B      25000     74999  80 percent\n");
		printf("C      75000    149999  60 percent\n");
		printf("D     150000    200000   0 percent\n\n");

		printf("income:");
		scanf("%d", &income);
		printf("processing...\n");

		if (income < 25000)
		{
			taxCat = 'A';
		}
		else if (income < 75000)
		{
			taxCat = 'B';
		}
		else if (income < 150000)
		{
			taxCat = 'C';
		}
		else if (income <= 200000)
		{
			taxCat = 'D';
		}
		else
		{
			taxCat = '-';
		}

		printf("printfIncome    Tax Cat.Tax Rate\n");
		printf("--------- --------  --------------------------------\n");
		printf("%-9d %-9c ", income, taxCat);


		switch (taxCat)
		{
		case'a':
		case'A':
			printf("1 percent\n");
			break;
		case'b':
		case'B':
			printf("80 percent\n");
			break;
		case'c':
		case'C':
			printf("6 percent\n");
			break;

		case'd':
		case'D':
			printf("0 percent\n");
			break;
		default:
			printf("Error\n");
			break;
		}

		printf("\nEnter another itea(1=yes|0=no)?:");
		scanf("%d", &flag);

	} while (flag > 0);
		return 0;
}
*/

/*#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main(void)
{

	int i,j;            // iterators
	int maxNums = 10;   // number of loops to do
   int total = 0;      // total variable
	int val;            // input variable
   int done = 0;       // flag for conditional loop exit
	char c = 'A';

	printf("For loop %d times:\n", maxNums);
	for (i = 0; i < maxNums; i++)
	{
		printf("[%d]%c ", i, c + i);
	}
	printf("\n\n");
	printf("For loop stepping every other increment ( i+=2 )\n");
	for (i = 0; i < maxNums; i += 2)
	{
		printf("[%d]%c ", i, c + i);
	}
	printf("\n\n");


	printf("For loop stop's when:\n");
	printf("- %d Maximum inputs has been reached  OR \n", maxNums);
	printf("- Total accumulator >=50\n");

	done = 0;
	for (i = 0; i < maxNums && !done; i++)
	{
		// Prompt for and store input
		printf("Enter integer value: ");
		scanf("%d", &val);

		total += val;       // accumulate total

		// Show values
		printf("[%d] Total:%d\n", i, total);
		if (total >= 50)
		{
			done = 1;
		}
	}
	printf("\n\n");
	for (i = 0, j = maxNums - 1; i < maxNums && j >= 0; i++, j--)
	{
		printf("i=%d j=%d\n", i, j);
	}
	i = 0;
	for (; i < maxNums;)
	{
		printf("[%d]  ", i);
		i++;
	}
	printf("\n\n");
	return 0;

}
*/

/*#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	double grade1, grade2;
	char letter1, letter2;

	//----------------------------------
	// Relational expressions
	//----------------------------------

	// Get grades from user...
	printf("Enter grade1: ");
	scanf("%lf", &grade1);

	printf("Enter grade2: ");
	scanf("%lf", &grade2);

	// Analyze the grades...
	printf("Is grade1 greater than grade2? :%d\n",
		grade1 > grade2);
	printf("Is grade1 less than grade2? :%d\n",
		grade1 < grade2);
	printf("Is grade1 equal to grade2? :%d\n",
		grade1 == grade2);
	printf("Enter two letters: ");
	scanf(" %c %c", &letter1, &letter2);

	// Analyze the grades...
	printf("Is letter1 AFTER letter2 in the alphabet? :%d\n",
		letter1 > letter2);
	printf("Is letter1 BEFORE letter2 in the alphabet? :%d\n",
		letter1 < letter2);
	printf("Is letter1 the same as letter2? :%d\n",
		letter1 == letter2);

	printf("Is grade1 AND grade2? :%d\n",
		grade1 && grade2);
	printf("Is grade1 OR grade2? :%d\n",
		grade1 || grade2);

	printf("Is grade1 less than 30 AND "
		"letter1 larger than c? : %d\n",
		grade1 < 30 && letter1 > 'c');
	// Vowel:aeiou
	printf("Is letter1 a vowel (case sensitive)? :%d\n",
		letter1 == 'a' || letter1 == 'e' || letter1 == 'i' ||
		letter1 == 'o' || letter1 == 'u');

	printf("Is letter1 a vowel (case insensitive)? :%d\n",
		letter1 == 'a' || letter1 == 'e' || letter1 == 'i' ||
		letter1 == 'o' || letter1 == 'u' ||
		letter1 == 'A' || letter1 == 'E' || letter1 == 'I' ||
		letter1 == 'O' || letter1 == 'U');

	// 80.0 or more is an 'A' grade letter..
	printf("Is grade1 a grade letter 'A' AND "
		"is letter1 an A "
		"OR is grade2 a grade letter 'F' AND "
		"is letter2 an F? :%d\n",
		(grade1 >= 80.0 && letter1 == 'A') ||
		(grade2 < 50.0 && letter2 == 'F'));
	return 0;
}

*/

/*/#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int fruit, apples, pears;

	// Scenario 1
	fruit = 0;
	apples = 5;
	pears = 10;
	printf("BEFORE: fruit:%d apples:%d pears:%d\n",
		fruit, apples, pears);
	fruit = (apples++);
	//fruit = (++apples);
	printf("AFTER: fruit:%d apples:%d pears:%d\n",
		fruit, apples, pears);

	// Scenario 2
	fruit = 0;
	apples = 5;
	pears = 10;
	printf("BEFORE: fruit:%d apples:%d pears:%d\n",
		fruit, apples, pears);
	fruit = (++apples);
	printf("AFTER: fruit:%d apples:%d pears:%d\n",
		fruit, apples, pears);

	// Scenario 3
	fruit = 0;
	apples = 5;
	pears = 10;
	printf("BEFORE: fruit:%d apples:%d pears:%d\n",
		fruit, apples, pears);
	fruit = (++apples) + (pears--);
	printf("AFTER: fruit:%d apples:%d pears:%d\n",
		fruit, apples, pears);

	// Scenario 4
	fruit = 0;
	apples = 5;
	pears = 10;
	printf("BEFORE: fruit:%d apples:%d pears:%d\n",
		fruit, apples, pears);
	fruit = (--apples) + (++pears);
	printf("AFTER: fruit:%d apples:%d pears:%d\n",
		fruit, apples, pears);


	return 0;
}

*/

/*#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	// MAPPING Day of Week
	// =====================
	// 1	Monday
	// 2	Tuesday
	// 3	Wednesday
	// 4	Thursday
	// 5	Friday

	int dayOfWeek, birthYear, age;
	const int CURRENT_YEAR = 2023;

	printf("Enter a day of the work week (1=Mon..5=Fri): ");
	scanf("%d", &dayOfWeek);

	printf("Is weekday a Monday?    -> %d\n", dayOfWeek == 1);
	printf("Is weekday a Tuesday?   -> %d\n", dayOfWeek == 2);
	printf("Is weekday a Wednesday? -> %d\n", dayOfWeek == 3);
	printf("Is weekday a Thursday?  -> %d\n", dayOfWeek == 4);
	printf("Is weekday a Friday?    -> %d\n", dayOfWeek == 5);
	printf("Is weekday a weekend?   -> %d\n",
		dayOfWeek < 1 || dayOfWeek > 5);

	// DeMorgan's Law example 1 (same as weekend statement above):
	printf("Is weekday a weekend?   -> %d\n",
		!(dayOfWeek > 0 && dayOfWeek < 6));


	// MAPPING by Age Range
	// =====================
	// Young	1-17
	// Adult	18-64
	// Senior	65+
	printf("Enter a birth year: ");
	scanf("%d", &birthYear);
	age = CURRENT_YEAR - birthYear;

	// in-line arithmetic expressions
	printf("Calculated age is (%d - %d): %d\n", CURRENT_YEAR, birthYear, age);
	printf("Are you a YOUNG person?  -> %d\n", age > 0 && age < 18);
	printf("Are you an ADULT?        -> %d\n", age > 17 && age < 65);
	printf("Are you a SENIOR?        -> %d\n", age > 64);

	printf("Is your birth year an EXCEPTION?\n"
		"  (age is < 1 or > 110)  -> %d\n", age < 1 || age > 110);

	// DeMorgan's Law example 2 (same thing as above statement):
	printf("Is your birth year an EXCEPTION?\n"
		"  (age is < 1 or > 110)  -> %d\n", !(age > 0 && age < 111));

	return 0;
}

*/

/*#include <stdio.h>

int main(void)
{
	int age = 19;

	printf("Prefix:  %d\n", ++age);
	printf("         %d\n", age);
	printf("Postfix: %d\n", age++);
	printf("         %d\n", ++age);

	return 0;
}

*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int minutes;
	float hours;

	printf("Minutes ? ");
	scanf("%d", &minutes);
	hours = (float)minutes / 60;
	printf("= %.2lf hours\n", hours);

	return 0;
}

*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int loonies;
	double cash;

	printf("Loonies ? ");
	scanf("%d", &loonies);
	cash = loonies; // promotion
	printf("Cash is $%.2lf\n", cash);

	return 0;
}

*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double cash;
	int loonies;

	printf("Cash ? ");
	scanf("%lf", &cash);
	loonies = cash; // truncation
	printf("%d loonies.\n", loonies);

	return 0;
}

*/
/*
#include <stdio.h>

int main(void) {
	int a, b, c,even;
	double d;
	a = 1;
	b = 2;
	d = (5 + a) / (double)b;


	printf("d=%lf\n", d);


	printf("the remainder on dividing 10 by 3 is : %d\n", 10 % 3);

	a = 38;
	even = (a % 2) == 0;
	printf("%d is even = %d\n", a, even);
	return 0;
}


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, c;
	double d;

	d = 47.2;
	printf("d=%.0lf\n", d);

	c = d + 0.5; // rounds up if value in d is greater or equal 0.5
	printf("My round of d=%d\n", c);

	d = 2 / 3.;
	printf("d=%.2lf\n", d);

	b = 5;
	b = b * 2;  // long way
	b *= 2;		// shortcut
	printf("b = %d\n", b);

	b += 1;
	printf("b = %d\n", b);
	b++;
	printf("b = %d\n", b);
	c = 5;
	a = b++ + c; // postincrement, b is incremented after use
	printf("a = %d, b = %d\n", a, b);

	b = 20;
	a = ++b + c; // preincrement, b is incremented before use
	printf("a = %d, b = %d\n", a, b);

	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*************************************************************************************
* In-Class Exercise
* This is an exercise to illustrate the basic data types in C.
**************************************************************************************/
/*
int main(void)
{
	int n;
	double d;
	char char1;
*/
/*********************************************************************************/
/* ints are one of the most basic types in C and can store a whole number without*/
/* a fraction. The following stores 42 into the variable n.                      */
/*********************************************************************************/

//n = 42;
//printf("n=%d\n", n);

/*********************************************************************************/
/* Doubles are an example of a floating point value, which can contain a fraction*/
/*********************************************************************************/
//d = 3.141592653589793;
//printf("d=%.4lf\n", d);

/*********************************************************************************/
/* As you can see, a double can retain many digits after the decimal. When it    */
/* was printed, we asked for just 4 places past the decimal and the printf       */
/* rounded the value to the requested number of decimal digits                   */
/*                                                                               */
/* The next question is what happens if we assign a double to an int. Let's try  */
/* it and see.                                                                   */
/*********************************************************************************/

//n = d;
//printf("n=%d\n", n);

/*********************************************************************************/
/* As you can see, the fraction disappeared, It is not rounded but is simply     */
/* discarded.                                                                    */
/*                                                                               */
/* We can use this, along with a clever technique to round a floating point      */
/* number to the nearest int.                                                    */
/*                                                                               */
/* If you add 0.5 to a fraction and the fraction is less than 1.2 then the whole */
/* number is unchanged. For example, 3.2 + 0.5 = 3, so there is no change to the */
/* whole number. On the other hand, as soon as the fraction hits 1/2 or larger   */
/* and we add 0.5, it changes the whole number. Eg. 3.6 + 0.5 = 4.1. We can use  */
/* this to round to the nearest whole number by adding 0.5 and chopping the      */
/* fraction.                                                                     */
/*********************************************************************************/

//n = 3.2 + 0.5;
//printf("n is rounded down to %d\n", n);

//n = 3.6 + 0.5;
//printf("n is rounded up  to %d\n", n);

/*********************************************************************************/
/* If we want to round to one place after the decimal, (3.27->3.3) it is         */
/* more complicated and we can use the following algorithm:                      */
/* 1. add 0.05 to the number                                                     */
/* 2. multiply by 10 to shift the decimal point                                  */
/* 3. assign to an int to chop the fraction                                      */
/* 4. Divide by 10 to get the original number back                               */
/* Write the code to round the value of d to one place past the decimal.         */
/*********************************************************************************/

//d = 45.36;
// TODO: Place code to round this to 45.4 below this line


//printf("d rounded to 1 place after the decimal is %.2lf\n", d);

/*********************************************************************************/
/* Characters can be used to hold numbers from -128 to 127. If we exceed this we */
/* get strange results. This is because we tried to store a number larger than it*/
/* could hold.                                                                   */
/*********************************************************************************/

//char1 = 512;
//printf("char1=%d\n", char1);

/*********************************************************************************/
/* TODO: change the number assigned to char1 to 51 in the code above. Observe how*/
/* it now prints the correct value because the value assigned is within the range*/
/* a char can represent.                                                         */
/*********************************************************************************/

/*********************************************************************************/
/*Chars are usually used to hold characters by assigning a letter in single      */
/* quotation marks, as shown below.                                              */
/*********************************************************************************/

//char1 = 'X';
//printf("char1=%c\n", char1);

/*********************************************************************************/
/* The code above works as expected and prints a character X. Now, let's look at */
/* what happens when we print the same variable as an int.                       */
/*********************************************************************************/

//printf("char1=%d\n", char1);

/*********************************************************************************/
/* This prints 88. To see why go to https://www.asciitable.com and look up the   */
/* value of an upper case X. Under the decimal column you will see 88. Characters*/
/* in C are really represented as integers and just looked up in an ascii table  */
/* to find the associated character.                                             */
/*********************************************************************************/

//return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>

/*************************************************************************************
* In-Class Exercise
* This is an exercise to illustrate the order of execution of basic operators.
**************************************************************************************/
/*
int main(void)
{
	double fahrenheit = 68, celsius = 0;

	// TODO: The formula below tries to convert a temperature in fahrenheit to celsius using
	// the formula c = 5/9 * f - 32 and should produce the answer 20. Fix the formula so that
	// it produces the correct value.

	celsius = (5.0 / 9.0) * (fahrenheit - 32.0);

	printf("celsius=%.2lf\n", celsius);

	return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
*/
/*********************************************************************************
In-Class Exercise
This is an exercise to show how to work with mixed types in arithmetic expressions.
**********************************************************************************/
/*
int main(void)
{
	int n = 3, p = 7;
	double d;

	// TODO: insert a line of code below to set d to be p / n and retain the fraction


	printf("d=%.2lf\n", d);

	return 0;
}
*/

//#define _CRT_SECURE_NO_WARNINGS
//include <stdio.h>

/*************************************************************************************
* In-Class Exercise
* This is an exercise to demonstrate how to use modulus.
**************************************************************************************/
/**
int main(void)
{
	int n, i;
	double d;
	char char1;
/
	/*********************************************************************************/
	/* The modulus operator returns the remainder after division. For example 8 % 3  */
	/* is 2 because 3 goes into 8 twice with 2 left over. It is the left over it     */
	/* returns.                                                                      */
	/*********************************************************************************/

	//n = 8 % 3;
	//printf("n=%d\n", n);

	/*********************************************************************************/
	/* While this might seem useless, it is used for many things. First, it can be   */
	/* used to generate a repeating series of numbers. If we do any number modulus n */
	/* the result will be a series of numbers from 0 to n-1 which repeat. Look at the*/
	/* output from the code below.                                                   */
	/*********************************************************************************/
/*
printf("0 %% 3 = %d\n", 0 % 3);
	printf("1 %% 3 = %d\n", 1 % 3);
	printf("2 %% 3 = %d\n", 2 % 3);
	printf("3 %% 3 = %d\n", 3 % 3);
	printf("4 %% 3 = %d\n", 4 % 3);
	printf("5 %% 3 = %d\n", 5 % 3);
	printf("6 %% 3 = %d\n", 6 % 3);
	*/
	/*********************************************************************************/
	/* As you can see, the remainer repeats in a cyclical fashion. This can be used  */
	/* to                                                                            */
	/*     - determine if a number if evenly divisible by another when remainer is 0 */
	/*     - turn any number into a number from 0 to n-1, when calculated modulus n  */
	/*********************************************************************************/

	//i = 6;
	//n = 7;

	/*********************************************************************************/
	/* TODO: Complete the print statements below to print 0 if a number is even and 1*/
	/* if the number is odd. Add the expression to the printf to do the right        */
	/* calculation to print a 0 or 1.                                                */
	/*********************************************************************************/
	//printf("%d is %d\n", i, 0);
	//printf("%d is %d\n", n, 1);

	/*********************************************************************************/
	/* A less obvious use is to help with conversions. We know that a circle is 360  */
	/* degrees. To convert 832 degrees to the number of times you turn around we     */
	/* would divide by 360. Every time we turn a complete circle, we are back where  */
	/* we started. We can avoid a whole lot of spinning by subtracting out the number*/
	/* of full circles and just turning the number of degrees that remain.           */
	/*********************************************************************************/

	//n = 832;
	//printf("%d degrees represents %d full circles\n", n, n / 360);

	/*********************************************************************************/
	/* TODO: In the print statement below, use modulus to calculate how many degrees */
	/* to turn without having to spin the total number of circles.                   */
	/*********************************************************************************/
	//printf("but to get to %d degrees you only need to turn %d degrees\n", n, n / 360);

	/*return 0;
}


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
*/
/*************************************************************************************
* In-Class Exercise
* This is an exercise to demonstrate how to use relational operators.
**************************************************************************************/
/*
int main(void)
{
	int n, i;
	double d;
	char char1;
	*/
	/*********************************************************************************/
	/* The relational operators compare two values to determine if they are          */
	/*     ==  equal                                                                 */
	/*     !=  not equal                                                             */
	/*     <  less than                                                              */
	/*     <=  less than or equal                                                    */
	/*     >  greater than                                                           */
	/*     >=  greater than or equal                                                 */
	/* They return 1 if true and 0 if false.                                         */
	/*********************************************************************************/

	//printf("%d equals %d is %d\n", 4, 4, 4 == 4);

	/*********************************************************************************/
	/* TODO: using the printf above as a template, complete the printf below to      */
	/* print 1 if n is less than 10.                                                 */
	/*********************************************************************************/
	//n = 5;
	//printf("%d is less than %d is %d\n", n, 10, n < 10);

	/*********************************************************************************/
	/* The NOT operator (!) makes true false and false true. Remember that 0 is false*/
	/* and any other value is true.                                                  */
	/* TODO: Use the NOT operator in the expression below to print 1 if n is not     */
	/* less than 10.                                                                 */
	/*********************************************************************************/
	//printf("%d is NOT less than %d is %d\n", n, 10, !(n < 10));

	/*********************************************************************************/
	/* TODO: Finally, calculate NOT n below and explain the result.                  */
	/*********************************************************************************/
	//printf("NOT %d is %d\n", n, );

	//return 0;
//}
/*
int main(void)
{
	int i, j;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d,%d  ", i, j);
		}

		printf("\n");
	}

	return 0;
}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a = 10, option = 0, c = 10;
*/
////////////////////////////////////////////////////////////
// simple if based on one condition
////////////////////////////////////////////////////////////
/*if (a > 5)
{
	printf("a(%d) is greater than 5\n", a);
}*/

////////////////////////////////////////////////////////////
// if-then-else example
////////////////////////////////////////////////////////////
/*if (a > 10)
{
	printf("a(%d) is greater than 10\n", a);
}
else
{
	printf("a(%d) is less than or equal to 10\n", a);
}*/

////////////////////////////////////////////////////////////
// nested if example
////////////////////////////////////////////////////////////
/*if (a >= 10)
{
	printf("a(%d) is greater than 10 and ", a);
	if ((a % 2) == 0) printf("is even\n");
	else printf("is odd\n");
}*/

////////////////////////////////////////////////////////////
// equivalent if as a logical expression
////////////////////////////////////////////////////////////
//if (a >= 10 && (a % 2) == 0) printf("a(%d) is greater than 10 and is even\n", a);
//else printf("a(%d) is greater than 10 and is odd\n", a);

////////////////////////////////////////////////////////////
// short circuit evaluation
// if the first part is false, the second part is not evaluated
////////////////////////////////////////////////////////////
/*if (a < 0 && (c = 2) > 0)
{
	printf("The condition is false, so this will never print\n");
}
//printf("after short circuit evaluation, c=%d\n", c);

////////////////////////////////////////////////////////////
// multi-way decision
////////////////////////////////////////////////////////////
/*printf("Select one of the following options:\n");
printf("1 - to say hello\n");
printf("2 - to say goodbye\n");
printf("3 - for coffee\n");
scanf("%d", &option);
if (option == 1)
{
	printf("Hello there\n");
}
else if (option == 2)
{
	printf("bye bye\n");
}
else if (option == 3)
{
	printf("can I have a coffee please?\n");
}
else
{
	printf("That is not a valid option\n");
}

return 0;
}*/

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>

/*************************************************************************************
* In-Class Exercise
* This is an exercise to demonstrate how to use conditional execution.
**************************************************************************************/

//int main(void)
//{
	/*********************************************************************************/
	/* Up to this point, statements have been executed one after another. This is    */
	/* called the flow of control. We will not introduce the if statement which lets */
	/* us change the flow of control. With an if we can execute a group of statements*/
	/* or not. If we do not execute the statements, it skips to the end of the if.   */
	/* Ifs are usually controlled by the results of Boolean expressions and the body */
	/* of the if is executed if the result of the expression is true.                */
	/* For example:                                                                  */
	/* int n = 10;                                                                   */
	/* if( n > 0)                                                                    */
	/* {                                                                             */
	/*      printf("%d is positive\n", n);                                           */
	/* }                                                                             */
	/*                                                                               */
	/* TODO: Complete the if below to print that n is even if the value of n really  */
	/* is an even number.                                                            */
	/*********************************************************************************/
	/*int n = 6;
	if (n%2==0)
	{
		printf("%d is even\n", n);
	}*/

	/*********************************************************************************/
	/* Sometimes, we want to execute one block of statements but, if the condition is*/
	/* false, we want to execute another block of statements. This can be dome with  */
	/* the if-then-else statement.                                                   */
	/* TODO: complete the if below to print out whether we have any child labourers  */
	/* or not. HINT: You will need to use a logical expression for the if.           */
	/*********************************************************************************/
	/*int child = 0;
	int adult = 1;
	int senior = 0;
	int employed = 1;

	if (child == 1)
	{
		printf("We have child labourers\n");
	}
	else
	{
		printf("We do not have child labourers\n");
	}

	return 0;
}*/

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>

	/*************************************************************************************
	* In-Class Exercise
	* This is an exercise to demonstrate how to use nested ifs.
	**************************************************************************************/

	//int main(void)
	//{
		/*********************************************************************************/
		/* One way to make complex logic is to nest one if inside another. This can be   */
		/* used to avoid overly complex logical expressions. In the example below, we    */
		/* need to calculate the admission price for a movie where:                      */
		/* child: <= 12 : half price                                                     */
		/* adult: 13-59 : full-price                                                     */
		/* Senior: 60-64 : 10% discount                                                  */
		/* Retired: 65+ : 20% discount                                                   */
		/*                                                                               */
		/* TODO: Complete the if below to calculate the ticket price for the given age.  */
		/*********************************************************************************/
		/*int age = 62;
		const int childMax = 12;
		const int adultMax = 59;
		const int seniorMax = 64;
		double fullTicketPrice = 14.95;
		double finalTicketPrice = 0;

		if (age <= childMax)
		{
			finalTicketPrice = fullTicketPrice / 2.0;
		}
		else
		{
			if (age > childMax && age <= adultMax)
			{
				finalTicketPrice = fullTicketPrice;
			}
			else
			{
				if (age > adultMax && age < seniorMax)
				{
					finalTicketPrice = fullTicketPrice * 0.9;
				}
				else
				{
					finalTicketPrice = fullTicketPrice * 0.8;
				}
			}
		}
		printf("The ticket price for a patron of age %d is %.2lf\n", age, finalTicketPrice);*/

		/*********************************************************************************/
		/* Sometimes, we need to make a decision based on the value of a variable. One   */
		/* way to do this is with a series of nested ifs in a special format. This takes */
		/* advantage of the fact that is an if is followed by a single statement or a    */
		/* block of statements inside {}.                                                */
		/* TODO: complete the if below to print out a response to the menu selection.    */
		/*********************************************************************************/

		/*int selection = 0;
		printf("Would you like:\n");
		printf("1 - chicken\n");
		printf("2 - fish\n");
		printf("3 - beef\n");
		scanf("%d", &selection);

		if (selection == 1)
		{
			printf("The chicken just ran away, this will take a couple of minutes...\n");
		}
		else if (selection == 2)
		{
			printf("The fish is very fresh.\n");
		}
		else if (selection == 3)
		{
			printf("Our beef is the tenderist.\n");
		}
		else
		{
			printf("I'm sorry we do not have that on the menu.\n");
		}

		return 0;
	}*/
	//#define _CRT_SECURE_NO_WARNINGS
	//#include <stdio.h>

	/*************************************************************************************
	* In-Class Exercise
	* This is an exercise to demonstrate how to use the switch statement.
	**************************************************************************************/

	//int main(void)
	//{
		/*********************************************************************************/
		/* The switch statement can be used to take an action based on the value of an   */
		/* integral value. An integral value is one which has distinct values: like an   */
		/* int or char. Note how we can use a ternary to split ages into ranges and use  */
		/* a switch to do something different for each age range.                        */
		/*********************************************************************************/
		/*int age = 62;
		const int childMax = 12;
		const int adultMax = 59;
		const int seniorMax = 64;
		double fullTicketPrice = 14.95;
		double finalTicketPrice = 0;

		int ageRange = (age <= 12) ? 0 : (age <= 59) ? 1 : (age <= 64) ? 2 : 3;

		switch (ageRange)
		{
		case 0:
			finalTicketPrice = fullTicketPrice / 2.0;
			break;
		case 1:
			finalTicketPrice = fullTicketPrice;
			break;
		case 2:
			finalTicketPrice = fullTicketPrice * 0.9;
			break;
		case 3:
			finalTicketPrice = fullTicketPrice * 0.8;
			break;
		}

		printf("The ticket price for a patron of age %d is %.2lf\n", age, finalTicketPrice);*/

		/*********************************************************************************/
		/* Another way to implement a menu is to use a switch. This one uses single      */
		/* letter options rather than numberic ones.                                     */
		/* TODO: complete the switch below to print a message for the food ordered.      */
		/*********************************************************************************/

	//	char selection = 0;
	//	printf("Would you like:\n");
	//	printf("A - chicken\n");
	//	printf("B - fish\n");
	//	printf("C - beef\n");
	//	scanf("%c", &selection);
	//
	//	switch (selection)
	//	{
	//	case 'a':
	//	case 'A':
	//		printf("The chicken just ran away, this will take a couple of minutes...\n");
	//		break;
	//	case 'b':
	//	case 'B':
	//		printf("The fish is very fresh.\n");
	//		break;
	//	case 'c':
	//	case 'C':
	//		printf("Our beef is the tenderist.\n");
	//		break;
	//		/* something needs to be here */
	//		printf("I'm sorry we do not have that on the menu.\n");
	//	}
	//
	//	return 0;
	//}

	//#define _CRT_SECURE_NO_WARNINGS
	//#include <stdio.h>

	//int main(void)
	//{
	//	int num, total, price = 3000;
	//	printf("enter number of ppl:");
	//	scanf("%d", &num);
	//	total = num * 300;
	//
	//	if (total >= price)
	//	{
	//		total = total * 0.8;
	//		//printf("total = %d", total);
	//	}
	//	else
	//	{
	//		total = total;
	//		
	//	}
	//	printf("total = %d", total);
	//	return 0;
	//}


	//#define _CRT_SECURE_NO_WARNINGS
	//#include <stdio.h>
	//
	//int main(void)
	//{
	//	int i, j ,k;
	//	printf("Enter lengths: ");
	//	scanf("%d %d %d", &i, &j, &k);
	//
	//	if (i == k)
	//	{
	//		printf("Regular triangle\n");
	//	}
	//	if(i == j || j ==k)
	//	{
	//		printf("isosceles triangle\n");
	//	}
	//	if (i * i + j * j == k * k );
	//	{
	//		printf("rectangular");
	//	}
	//	return 0;
	//}

	//#define _CRT_SECURE_NO_WARNINGS
	//#include <stdio.h>
	//
	//int main(void)
	//{
	//	int num1, num2, num3, num4;
	//	printf("enter first int:");
	//	scanf("%d", &num1);
	//	printf("enter second int:");
	//	scanf("%d", &num2);
	//	printf("enter third int:");
	//	scanf("%d", &num3);
	//	printf("enter fourth int:");
	//	scanf("%d", &num4);
	//
	//	if (num1 > num2 && num1 > num3 && num1 > num4)
	//	{
	//		printf("max :%d", num1);
	//	}
	//	else if (num2 > num1 && num2 > num3 && num2 > num4)
	//	{
	//		printf("max : %d", num2);
	//	}
	//	else if (num3 > num1 && num3 > num2 && num3 > num4)
	//	{
	//		printf("max : %d", num3);
	//	}
	//	else if (num4 > num1 && num4 > num2 && num4 > num3)
	//	{
	//		printf("max : %d", num4);
	//	}
	//	return 0;
	//}


	//#define _CRT_SECURE_NO_WARNINGS
	//#include <stdio.h>
	//
	//int main(void)
	//{
	//	int i, j, k;
	//	printf("enter number:");
	//	scanf("%d %d %d", &i, &j, &k);
	//	if (i < j && i > k)
	//	{
	//		printf("median is : %d", i);
	//	}
	//	if (j < i && j > k)
	//	{
	//		printf("median is : %d", j);
	//	}
	//	if (k < j && k > i)
	//	{
	//		printf("median is : %d", k);
	//	}
	//	return 0;
	//}


	//#define _CRT_SECURE_NO_WARNINGS
	//#include <stdio.h>
	//
	//int main(void)
	//{
	//	int a, b,c, temp;
	//	scanf("%d %d %d", &a, &b, &c);
	//	printf("before:%d %d %d\n", a, b,c);
	//
	//	if (a > b && a > c)
	//	{
	//		temp = a;
	//		a = c;
	//		c = b;
	//		b = temp;
	//	}
		/*if (b > c && b > a)
		{
			temp = b;
			b = c;
			c = a;
			a = temp;
		}
		if (c > a && c > b)
		{
			temp = c;
			c = a;
			a = b;
			b = temp;
		}*/
		//	printf("after:%d %d %d\n", a, b, c);
		//	return 0;
		//}


		//#define _CRT_SECURE_NO_WARNINGS
		//#include <stdio.h>
		//
		//int main(void)
		//{
		//	int grade;
		//	printf("enter grade");
		//	scanf("%d", &grade);
		//	if (grade < 60 && grade >= 0)
		//	{
		//		printf("fail");
		//	}
		//	else if (grade >= 60 && grade <= 100)
		//	{
		//		printf("pass");
		//	}
		//	else
		//	{
		//		printf("enter again");
		//	}
		//	return 0;
		//}


		//#define _CRT_SECURE_NO_WARNINGS
		//#include <stdio.h>
		//
		//int main(void)
		//{
		//	int a, b;
		//	printf("enter a and b:");
		//	scanf("%d %d", &a, &b);
		//	if (a < b)
		//	{
		//		printf("a < b\n");
		//	}
		//	else if (a > b)
		//	{
		//		printf("a > b\n");
		//	}
		//	else if (a == b)
		//	{
		//		printf("a = b\n");
		//	}
		//	return 0;
		//}

		//#define _CRT_SECURE_NO_WARNINGS
		//#include <stdio.h>
		//
		//int main(void)
		//{
		//	int guess = 4, i;
		//	printf("enter guess");
		//	scanf("%d", &i);
		//	if (guess == i)
		//	{
		//		printf("correct\n");
		//	}
		//	else if (guess < i)
		//	{
		//		printf("to large\n");
		//	}
		//	else if (guess > i)
		//	{
		//		printf("too small\n");
		//	}
		//	return 0;
		//}

		//#define _CRT_SECURE_NO_WARNINGS
		//#include <stdio.h>
		//
		//int main(void)
		//{
		//	int i, j;
		//	char op;
		//	float answer;
		//	scanf("%d%c%d", &i, &op, &j);
		//	if (op == '+')
		//	{
		//		answer = i + j;
		//	}
		//	else if (op == '-')
		//	{
		//		answer = i - j;
		//	}
		//	else if (op == '*')
		//	{
		//		answer = i * j;
		//	}
		//	else if (op == '/')
		//	{
		//		answer = (float)i / j;
		//	}
		//	printf("ans : %f\n", answer);
		//	return 0;
		//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	int i, j;
//	char op;
//	float answer;
//	scanf("%d%c%d", &i, &op, &j);
//
//	switch (op)
//	{
//	case '+':
//		answer = i + j;
//		break;
//	case '-':
//		answer = i - j;
//		break;
//	case '*':
//		answer = i * j;
//		break;
//	case '/':
//		answer = (float)i / j;
//		break;
//    }
//	printf("ans : %f\n", answer);
//return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	int id;
//	printf("enter id:");
//	scanf("%d", &id);
//	switch (id)
//	{
//	case 2:
//		printf("Johb\n");
//		break;
//	case 13:
//		printf("mar\n");
//		break;
//	
//	case 16:
//		printf("amy\n");
//		break;
//	default:
//		printf("enter again\n");
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	int guess = 4, i;
//	printf("enter guess");
//	scanf("%d", &i);
//	if (guess == i)
//	{
//		printf("correct\n");
//	}
//	else if (guess < i)
//	{
//		printf("to large\n");
//	}
//	else if (guess > i)
//	{
//		printf("too small\n");
//	}
//	while(i != guess)
//	{ 
//	printf("enter guess");
//	scanf("%d", &i);
//	if (guess == i)
//	{
//		printf("correct\n");
//	}
//	else if (guess < i)
//	{
//		printf("to large\n");
//	}
//	else if (guess > i)
//	{
//		printf("too small\n");
//	}
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	int guess = 4, i, count = 0;
//	printf("enter guess");
//	scanf("%d", &i);
//	count += 1;
//	while (i != guess)
//	{
//		if (i > guess)
//		{
//			printf("to large\n");
//		}
//		else if (i < guess)
//		{
//			printf("too small\n");
//		}
//		printf("enter guess");
//		scanf("%d", &i);
//		count += 1;
//	}
//	
//		printf("correct!(%d)\n", count);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	int i, sum = 0,count = 0;
//	printf("entern number(quit: 0)");
//	scanf("%d", &i);
//	while(i != 0)
//	{
//		sum += i;
//		count += 1;
//		printf("entern number(quit: 0)");
//		scanf("%d", &i);
//		
//	}
//	printf("ave: %d", sum/count);
//
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	int count = 1, i;
//	printf("number:");
//	scanf("%d", &i);
//	while(count <= i)
//	{
//		printf("%d", count);
//		count += 1;
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	int i, j;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = i; j > 0; j--)
//		{
//			printf("nested: i=%d, j=%d\n", i, j);
//		}
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	int num, sum = 0;
//	
//	do
//	{
//		scanf("%d", &num);
//		switch (num)
//		{
//		case 1:
//			num = 90;
//			break;
//		case 2:
//			num = 75;
//			break;
//		case 3:
//			num = 83;
//			break;
//		case 4:
//			num = 89;
//			break;
//		case 5:
//			num = 71;
//			break;
//		}
//		sum += num;
//	} while (num != 0);
//
//	printf("total : %d", sum);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	int i;
//	for(i = 1; i <=10; i++)
//		if (i % 2 == 0 && i % 3 != 0)
//		{
//			printf("%d", i);
//		}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	int i, sum = 0, n;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum += i;
//	}
//	printf("sum =%d", sum);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	int i, j, n;
//	printf("n = ");
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	printf("\n");
//	for (i = 0; i < n; i++)
//	{
//		for(j = 0; j <= i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	printf("\n");
//
//	for (i = n; i > 0; i--)
//	{
//		for (j = i; j > 0; j--)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	printf("\n");
//
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j )
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	printf("\n");
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>

//int main(void)
//{
//	int max, num, ans =0;
//	printf("max = ");
//	scanf("%d", &max);
//	for (num = max; num >= 1 && ans ==0; num--)
//	{
//		if (num % 3 == 2 && num % 5 == 3 && num % 7 == 2)
//		{
//			ans = num;
//		}
//		if(ans != 0)
//		{ 
//		printf("%d", ans);
//		}
//	}
//	
//	return 0;
//}

//int main(void)
//{
//	int n, i;
//	printf("N = ");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		if (n % i == 0)
//		{
//			printf("%d", i);
//		}
//	}
//	printf("\n");
//	return 0;
//}
//
//start 10.2




//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>

//void str_print(char str[])
//{
//	//int i;
//	//for (i = 0; str[i]!= '\0'; i++)
//	//{
//	//	printf("%c", str[i]);
//	//}
//	printf("%s", str);
//	printf("\n");
//}
//
//int main()
//{
//	char str[] = "Hello";
//	str_print(str);
//	return 0;
//}
// 

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int str_len(char str[])
//{
//	int i = 0;
//	while (str[i] != '\0')
//	{
//		i++;
//	}
//	return i;
//}
//
//int main(void)
//{
//	char str[] = "Hello World";
//	printf("%zu\n", sizeof(str));
//	printf("%d\n", str_len(str));
//	return 0;
//}

//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void str_read(char[]);
//
//int main()
//{
//	char str[15];
//	str_read(str);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int num;
//	while (scanf("%d", &num) != 1)
//	{
//		printf("Error\n");
//	}
//	printf("%d\n", num);
//	return 0;
// 

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void addone(int *a)
//{
//	*a = *a + 1;
//}
//
//int main(void)
//{
//	int a = 3;
//	addone(&a);
//	printf("%d", a);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void swap(int *, int *);
//
//int main(void)
//{
//	int a = 3, b = 5;
//	swap(&a, &b);
//	
//	printf("%d %d", a, b);
//	return 0;
//	
//}
//
//void swap(int *a, int *b)
//{
//	int t = *a;
//	*a = *b;
//	*b = t;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void swap(int* , int* );
//void sort(int* , int* );
//
//int main(void)
//{
//	int a = 5, b = 3;
//	sort(&a, &b);
//	printf("%d %d", a, b);
//	return 0; 
//}
//
//
//void sort(int *a, int *b)
//{
//	if (*a > *b)
//	{
//		swap(a, b);
//	}
//}
//
//void swap(int *a, int *b)
//{
//	int t = *a;
//	*a = *b;
//	*b = t;
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	int v[5] = { 1,2,3,4,5 };
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d\n", v[i]);
//	}
//}

//#include <stdio.h>
////#include "product.h"
//
//struct Product {
//	int sku;
//	double price;
//};
//
//
//int main(void)
//{
//	int i;
//	struct Product product[] = { {2156, 2.34}, {4633, 7.89},
//								 {3122, 6.56}, {5611, 9.32} };
//	const int n = 4;
//
//	printf("  SKU Price\n");
//	for (i = 0; i < n; i++)
//	{
//		printf("%5d $%.2lf\n", product[i].sku, product[i].price);
//	}
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
///*********************************************************************************
//In-Class Exercise
//This is an exercise to show how to work with structures.
//**********************************************************************************/
//#define NAME_MAX 30
//
///*********************************************************************************/
///* Like arrays, structs gather several variables under one variable. The         */
///* difference is that, with an array, all values are of the same type while with */
///* a struct the values can be of different types. Structs are normally declared  */
///* before all the functions so that they are visible to all functions in the     */
///* program.                                                                      */
///*********************************************************************************/
//struct Person
//{
//	char name[NAME_MAX + 1];
//	int age;
//};
//
//struct Employee
//{
//	double salary;
//	struct Person personalInfo;
//};
//
//int main(void)
//{
//	struct Person fred = { "Fred Flintstone", 41 };
//
//	/*********************************************************************************/
//	/* TODO: Complete the following declaration for Barney Rubble who is 40 years old*/
//	/* and earns $47,000 per year                                                    */
//	/*********************************************************************************/
//	struct Employee barney = { 47000, { "Barney Rubble", 40 } };
//
//	/*********************************************************************************/
//	/* TODO: Use the dot notation to complete the printf below to print the data from*/
//	/* the variable fred.                                                            */
//	/*********************************************************************************/
//
//	printf("%s is %d years old\n", fred.name, fred.age);
//
//	/*********************************************************************************/
//	/* TODO: Use the dot notation to complete the printf below to print the data from*/
//	/* the variable barney.                                                          */
//	/*********************************************************************************/
//
//	printf("%s is %d years old and earns %.2lf per year\n", barney.personalInfo.name, barney.personalInfo.age, barney.salary);
//
//	return 0;
//}
//

//
//#include <stdio.h>
//
//void add(int *n)
//{
//	*n = *n + 1;
//}
//
//int main(void)
//{
//	int a = 3;
//	add(&a);
//	printf("%d", a);
//	return 0;
//}

//#include <stdio.h>
//void sort(int *, int *);
//void swap(int *, int *);
//
//void sort(int *a, int *b)
//{
//	if (*a > *b)
//	{
//		swap(a, b);
//	}
//}
//
//void swap(int *a, int *b)
//{
//	int t = *a;
//	*a = *b;
//	*b = t;
//}
//
//
//int main(void)
//{
//	int a = 5, b = 3;
//	sort(&a, &b);
//
//	printf("a = %d\n", a);
//	printf("b = %d\n", b);
//	return 0;
//}
//
//
//
//#include <stdio.h>
//
//int main(void)
//{
//	int i;
//	int sku[] = { 2156, 4633, 3122, 5611 };
//	double price[] = { 2.34, 7.89, 6.56, 9.32 };
//	//const int n = 4;
//
//	printf("  SKU Price\n");
//	for (i = 0; i < 4; i++)
//	{
//		printf("%5d %.2lf\n", sku[i], price[i]);
//	}
//	return 0;
//}


//#include <stdio.h>
//
//#define NAME_SIZE 30
//
//
//void print(char name[])
//{
//	int i;
//	for (i = 0; name[i] != '\0'; i++)
//	{
//		printf("%c", name[i]);
//	}
//}
//
//int main(void)
//{
//	int i;
//	const char name[NAME_SIZE + 1] = "My name is Arnold";
//	print(name);
//	
//
//	//printf("%s", name);
//	return 0;
//}


//#include <stdio.h>
//
//#define NAME_SIZE 30
//
//int main(void)
//{
//	int i, j, k, n =10;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			for (k = 0; k < n; k++)
//			{
//				int ijk = i * j * k;
//				if (ijk != 0)
//				{
//					printf(" %4d", ijk);
//				}
//				else
//				{
//					printf("    ");
//				}
//			}
//			printf("\n");
//		}
//		printf("\n");
//	}
//	printf("That's all folks!!!\n");
//	return 0;
//}

//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//
//int main(void)
//{
//	int i;
//	double cost;
//	do {
//		printf("Guess i : ");
//		scanf("%d", &i);
//		if (i == 7)
//		{
//			cost = 1.75;
//			printf("Congrats!\n");
//		}
//		else
//		{
//			cost = 2.75;
//			printf("Good luck next time!\n");
//		}
//	} while (i != 7);
//	return 0;
//}


//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>

//#define PI 3.14159
//
//int main(void)
//{
//	const double PI = 3.14159;
//
//	double radius, area;
//
//	printf("Enter radius : ");
//	scanf("%lf", &radius);
//
//	area = PI * radius * radius;
//	printf("The area of your circle is : %lf\n", area);
//
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	int total, value, count;
//
//	// Start Node 1 ---
//	total = 0;
//	count = 0;
//	// End   Node 1 ---
//
//	do {
//		// Start Node 2 ---
//		scanf("%d", &value);
//		// End   Node 2 ---
//
//		if (value < 0)
//		{
//			// Start Node 3 ---
//			total -= value;
//			count++;
//			// End   Node 3 ---
//		}
//		else if (value > 0)
//		{
//			// Start Node 4 ---
//			total += value;
//			count++;
//			// End   Node 4 ---
//		}
//
//		// Start Node 5 ---
//	} while (value != 0);
//	// End   Node 5 ---
//
//	if (count > 0)
//	{
//		// Start Node 6 ---
//		printf("The average value is %.2lf\n",
//			(double)total / count);
//		// End   Node 6 ---
//	}
//
//	// Start Node 7 ---
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#define ADULT_FARE 3.25
//
//int main(void)
//{
//	int riders;
//	double total;
//
//	printf("Number of riders : ");
//	scanf("%d", &riders);
//
//	total = riders * ADULT_FARE;
//	printf("Total fare is %.2lf\n\n", total);
//
//	printf("riders' address %x\n", &riders);
//	printf("total's address %x\n", &total);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int a;
//	double b, c;
//
//	a = 7;
//	b = 0.9;
//
//	while (a < 10 && b < 5.0)
//	{
//		if (a < 10)
//		{
//			a = a + 1;
//			b = b * 2;
//			c = a - b; // careful: mixed types
//		}
//		else
//		{
//			a = a - 4;
//			b = b + 1.8;
//		}
//
//		c = a - b;
//		printf("%.2lf-%d-%.2lf\n", c, a, b);
//	}
//	return 0;
//}


//#include <stdio.h>
//
//int main(void)
//{
//	char a[50] = { '\0', "Hello my name is patty"};
//	int i;
//
//	a[0] = '\0';
//	for (i = 0; i < 50; i++)
//	{
//		printf("%c", a[i]);
//		if (i < 49)
//		{
//			printf(",");
//		}
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	int ar1[5];
//	int ar2[] = { 4, 2 };
//	int ar3[3] = { 0 };
//
//	ar1[0] = 1;
//	ar1[1] = 6;
//	printf("ar1[0]=%d, ar1[1]=%d\n", ar1[0], ar1[4]);
//
//	printf("ar2[0]=%d, ar2[1]=%d\n", ar2[0], ar2[1]);
//
//	printf("ar3[0]=%d, ar3[1]=%d, ar3[2]=%d\n", ar3[0], ar3[1], ar3[2]);
//
//	return 0;
//}

//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//#define MAX_NUMS 100
////////////////////////////////////////////////////////////////////////////
//// Read floating point temperatures until -99 is entered. Calculate
//// the average of the temperatures and print out all of the temperatures 
//// that are less than the average.
////////////////////////////////////////////////////////////////////////
//int main(void)
//{
//	double temps[MAX_NUMS];
//	double sum = 0, avg, num;
//	int i, nTemps = 0, keepGoing = 1;
//
//	do
//	{
//		printf("enter tem (-99 to quit): ");
//		scanf("%lf", &num);
//		if (num != -99.0)
//		{
//			sum += num;
//			temps[nTemps++] = num;
//		}
//		else
//		{
//			keepGoing = 0;
//		}
//
//	} while (keepGoing);
//
//
//	avg = sum / nTemps;
//	printf("avg = %lf", avg);
//	for (i = 0; i < nTemps; i++)
//	{
//		if (temps[i] < avg)
//		{
//			printf("%lf us below avg", temps[i]);
//		}
//	
//	}
//
//	
//	return 0;
//}

//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#define NUM_PRODUCT 5
//
//int main(void)
//{
//	int sku[NUM_PRODUCT] = { 285, 496, 371, 485, 142 };
//	double price[NUM_PRODUCT] = { 1,98, 4.27, 7.99, 2.24, 4.48 };
//
//	int id, i, keepgoing = 1;
//	double total = 0;
//
//	do
//	{
//		printf("enter product ( 0 to stop)");
//		scanf("%d", &id);
//		if (id != 0)
//		{
//			total += 
//		}
//	} while (keepgoing);
//
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	char abc[10] = "abcdefghik";
//	//abc[5] = 0;
//	printf("%s\n", abc);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//#define MAX_PAY_RATES 10
//
///*************************************************************************************
//* In-Class Exercise
//* This is an exercise to demonstrate how to declare arrays.
//**************************************************************************************/
//
//int main(void)
//{
//	/*********************************************************************************/
//	/* Arrays allow multiple variables to be combined under a single name. The       */
//	/* advantage of this is that a numeric subscript in square brackets is used to   */
//	/* indicate which of the multiple values to access.                              */
//	/*********************************************************************************/
//	int ar1[10];	// declare an array with space for 10 integers
//
//	ar1[0] = 8;		// set the first member to be 8
//	ar1[1] = 12;	// set the second member to be 12
//	printf("The second member is %d\n", ar1[1]);	// print out the second member = 12
//
//	/**********************************************************************************/
//	/* Values is an array that have not been initialized have unknown values from     */
//	/* whatever was left stored in that memory location. Normally, we initialize an   */
//	/* array with known values as shown below.                                        */
//	/**********************************************************************************/
//
//	double payRate[MAX_PAY_RATES] = { 14.75, 22.00, 18.00, 21.50 };
//
//	/**********************************************************************************/
//	/* This declares an array of size MAX_PAY_RATES, which is defined as 10. Using a  */
//	/* constant makes it easy to change later if we need to. The values in {} are the */
//	/* values we are initializing it to. We provide only 4 values out of the 10 it can*/
//	/* hold and the remaining values are set to zero. Since we are not using all of   */
//	/* the array, we need to keep a separate variable saying how many values are being*/
//	/* used, as shown next.                                                           */
//	/**********************************************************************************/
//
//	int numPayRates = 4;
//
//	/**********************************************************************************/
//	/* The beauty of the array is that we can now use a for loop to print out the     */
//	/* values in the array.                                                           */
//	/**********************************************************************************/
//
//	int i;
//	for (i = 0; i < numPayRates; i++)
//	{
//		printf("rate[%d] = %.2lf\n", i, payRate[i]);
//	}
//
//	/**********************************************************************************/
//	/* TODO: Complete the following code to find and print the highest pay rate and   */
//	/* its position in the payRate array.                                             */
//	/**********************************************************************************/
//	int highestPosition = -1;
//	double highestRate = -1.0;
//	for (i = 0; i < MAX_PAY_RATES; ++i)
//	{
//		if (payRate[i] > highestRate/* this array member is higher than the highest so far*/)
//		{
//			highestRate = payRate[i];/* remember this as the new high rate and store its position */
//			highestPosition = i;
//		}
//	}
//
//	printf("The highest pay rate is %.2lf in position %d\n", highestRate, highestPosition);
//
//	return 0;
//}
//

//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//#define MAX_PAY_RATES 10
//
///*************************************************************************************
//* In-Class Exercise
//* This is an exercise to demonstrate how to use arrays with loops.
//**************************************************************************************/
//
//int main(void)
//{
//	/*********************************************************************************/
//	/* One of the big problems with arrays is that they are not always full. Creating*/
//	/* an egg carton that can hold 12 eggs does not mean that it always holds 12     */
//	/* eggs. We face two problems: the array must be big enough to hold the data but */
//	/* we might not have enough data to fill the array. To handle this, we need to   */
//	/* count the actual number of values in the array and remember that it might well*/
//	/* be different from the capacity of the array.                                  */
//	/*                                                                               */
//	/* TODO: Complete the following to read in a series of pay rates and count the   */
//	/* number read. Finally, calculate the average of the values entered.            */
//	/*********************************************************************************/
//	int numPayRates = 0;
//	double payRates[MAX_PAY_RATES] = { 0 };
//	double sum = 0.0, average = 0.0;
//	int notNegative = 0;
//	do
//	{
//		notNegative = 0;
//		printf("Enter a pay rate (negative to stop): ");
//		scanf("%lf", &payRates[numPayRates]);
//		if (payRates[numPayRates] >= 0/* the value entered is greater or equal zero*/)
//		{
//			sum = sum + payRates[numPayRates];
//			numPayRates ++;
//			notNegative = 1;
//			/* add value onto sum and
//			increment the number of values read and
//			mark this as a not negative value */
//
//		}
//	} while (notNegative/* value entered was not negative */);
//
//	average = sum / numPayRates /* expression to calculate average pay rate */;
//	printf("The average pay rate is %.2lf\n", average);
//
//	/*********************************************************************************/
//	/* One of the most common reasons to use an array is because we need to remember */
//	/* the values for later processing. One reason for this is if we want to print   */
//	/* the pay rates that are less than the average. This requires that we process   */
//	/* the values once to find the average and then process them again to find those */
//	/* less than the average.                                                        */
//	/*                                                                               */
//	/* TODO: Complete the following loop that will visit every member of the payRates*/
//	/* array and print out those which are less than the average pay rate.           */
//	/*********************************************************************************/
//
//	int i = 0;
//	printf("The pay rates below the average are:\n");
//
//	for (i = 0; i < numPayRates ; i++ )	// loop over all pay rates
//	{
//		if (payRates[i] < average /* pay rate is less than the average */)
//		{
//			printf("%.2lf\n", payRates[i]);
//		}
//	}
//
//	return 0;
//}
//

// Structure Example
// structure.c
//
//#include <stdio.h>
//#include "product.h"
//
//int main(void)
//{
//	int i;
//	struct Product product[] = { {2156, 2.34}, {4633, 7.89},
//								 {3122, 6.56}, {5611, 9.32} };
//	const int n = 4;
//
//	printf("  SKU Price\n");
//	for (i = 0; i < n; i++)
//	{
//		printf("%5d $%.2lf\n", product[i].sku, product[i].price);
//	}
//
//	return 0;
//}
//
//#include <stdio.h>
//
//struct Date
//{
//	int year, month, day;
//};
//
//struct student
//{
//	int id;
//	struct Date date;
//};
//
//int main(void)
//{
//	struct student Stu1 = { 111, {1992, 9, 19} };
//	struct student Stu2 = { 222, {2000, 10, 31} };
//
//	printf("%d, %d/%d/%d\n", Stu1.id, Stu1.date.year, Stu1.date.month, Stu1.date.day);
//	printf("%d, %d/%d/%d\n", Stu2.id, Stu2.date.year, Stu2.date.month, Stu2.date.day);
//	return 0;
//}


//
//#include <stdio.h>
//
//struct Student
//{
//	int id;
//	double grade;
//};
//struct MultiStudent
//{
//	int id;
//	int numGrade;
//	double grade[10];
//};
//
//int main(void)
//{
//	struct Student stu1[] = 
//	{
//		{123, 77.10},{456, 82.40},{789,65.70}
//	};
//	struct MultiStudent multi[] =
//	{ 
//		{222, 3, {44.80, 63.40, 77.10}} ,
//		{333, 2, {87.40, 81.50}} ,
//		{444, 2, {74.30, 71.20}}
//	};
//
//	int i;
//	for (i = 0; i < 3; i++)
//
//	{
//		printf("id = %d, grades = %.2lf\n", stu1[i].id, stu1[i].grade);
//
//	}
//	int j;
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("id = %d,grades = ", multi[i].id);
//		for (j = 0; j < multi[i].numGrade; j++)
//		{
//			printf(" %.2lf", multi[i].grade[j]);
//			
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
///*********************************************************************************
//In-Class Exercise
//This is an exercise to show how to work with structures.
//**********************************************************************************/
//#define NAME_MAX 30
//
///*********************************************************************************/
///* Like arrays, structs gather several variables under one variable. The         */
///* difference is that, with an array, all values are of the same type while with */
///* a struct the values can be of different types. Structs are normally declared  */
///* before all the functions so that they are visible to all functions in the     */
///* program.                                                                      */
///*********************************************************************************/
//struct Person
//{
//	char name[NAME_MAX + 1];
//	int age;
//};
//
//struct Employee
//{
//	double salary;
//	struct Person personalInfo;
//};
//
//int main(void)
//{
//	struct Person fred = { "Fred Flintstone", 41 };
//
//	/*********************************************************************************/
//	/* TODO: Complete the following declaration for Barney Rubble who is 40 years old*/
//	/* and earns $47,000 per year                                                    */
//	/*********************************************************************************/
//	struct Employee barney = { 47000 ,"Barney Rubble", 40/* initialization data */};
//
//	/*********************************************************************************/
//	/* TODO: Use the dot notation to complete the printf below to print the data from*/
//	/* the variable fred.                                                            */
//	/*********************************************************************************/
//
//	printf("%s is %d years old\n", fred.name/* name */, fred.age/* age */);
//
//	/*********************************************************************************/
//	/* TODO: Use the dot notation to complete the printf below to print the data from*/
//	/* the variable barney.                                                          */
//	/*********************************************************************************/
//
//	printf("%s is %d years old and earns %.2lf per year\n", barney.personalInfo.name/* name */, barney.personalInfo.age/* age */, barney.salary/* salary */);
//
//	return 0;
//}
//

//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//#define MAX_PRODUCTS 10
//
///*************************************************************************************
//* In-Class Exercise
//* This is an exercise to demonstrate how to use structs to replace parallel arrays.
//**************************************************************************************/
//
///*************************************************************************************/
///* A struct can be used to respresent the same information as parallel arrays. The   */
///* struct contains the same information as 1 column from the parallel arrays. We can */
///* the make an array of these structs so that it contains the same information as the*/
///* parallel arrays.                                                                  */
///*************************************************************************************/
//struct ProductInfo
//{
//	int productID;
//	double price;
//};
//
//int main(void)
//{
//	/*********************************************************************************/
//	/* Parallel arrays line up information that is related in the same position in   */
//	/* two or more arrays. The following arrays contain product identifiers and      */
//	/* corresponding prices.                                                         */
//	/*********************************************************************************/
//
//	int		prductID[MAX_PRODUCTS] = { 97,		89,		48,		24 };
//	double	productPrice[MAX_PRODUCTS] = { 2.98,	7.45,	6.50,	7.99 };
//	int numProducts = 4;
//
//	/*********************************************************************************/
//	/* TODO: Complete the code below to initialize the array of structs with the     */
//	/* same data that is stored in the parallel arrays above.                        */
//	/*********************************************************************************/
//
//	struct ProductInfo info[MAX_PRODUCTS] = { {97, 2.98}, {89, 7.45}, {48, 6.50}, {24, 7.99}/* initial values copied from parallel arrays */ };
//	int i = 0, posn = -1, id = 0;
//
//	/*********************************************************************************/
//	/* TODO: Complete the code below to find the price of the product requested.     */
//	/*********************************************************************************/
//	printf("Enter the product to find: ");
//	scanf("%d", &id);
//	for (i = 0; i < numProducts; i++)
//	{
//		if (info[i].productID == id /* expression to match the id we are looking for */)
//		{
//			posn = i;
//		}
//	}
//	if (posn != -1/* posn is valid to have found the id */)
//	{
//		printf("The price of %d is %.2lf\n", id/* id */, info[posn].price/* price*/);
//	}
//	else
//	{
//		printf("%d was not found\n", id);
//	}
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//#define STRING_MAX 40
//#define MAX_AUTHORS 20
//#define MAX_BOOKS 20
//
//struct Author
//{
//	char firstName[STRING_MAX + 1];
//	char lastName[STRING_MAX + 1];
//};
//
//struct Book
//{
//	char title[STRING_MAX + 1];
//	int authorIndex;
//};
//
//int main(void)
//{
//	struct Author authors[MAX_AUTHORS] =
//	{
//		{{"Charlotte"}, {"Bronte"}},
//		{{"George"}, {"Orwell"}},
//		{{"Jane"}, {"Austen"}},
//		{{"J.R.R."}, {"Tolkien"}}
//	};
//
//	struct Book books[MAX_BOOKS] =
//	{
//		{{"Jane Eyre"}, 0},
//		{{"1984"}, 1},
//		{{"Pride and Prejudice"}, 2},
//		{{"The Hobbit or there and back again"}, 3},
//		{{"The Lord of the Rings"}, 3},
//		{{"Animal Farm"}, 1},
//	};
//
//	int numAuthors = 4, numBooks = 6, action = 0, numRead = 0, badAction = 0;
//
//	// The following is a list of variables you might want to use to fill in the missing code
//	int i = 0, j = 0, k = 0;	// loop iterators
//	int posn = -1, authPosn = -1, titlePosn = -1, found1 = 0, found2 = 0; // for searching
//	char auth[STRING_MAX + 1] = { 0 };	// temporary for author name
//	char authFirst[STRING_MAX + 1] = { 0 };	// temporary for author first name
//	char authLast[STRING_MAX + 1] = { 0 };	// temporary for author last name
//	char title[STRING_MAX + 1] = { 0 };	// temporary for title
//
//	printf("*** Personal Library Manager ***\n");
//
//	do
//	{
//		do
//		{
//			printf("Select an action to perform\n");
//			printf("1 - show all books and their authors\n");
//			printf("2 - show all books by a single author\n");
//			printf("3 - show all authors and the books they have written\n");
//			printf("4 - add a new book\n");
//			printf("4 - remove a book\n");
//			printf("0 - exit\n");
//
//			numRead = scanf("%d%*c", &action);
//			badAction = numRead != 1 || action < 0 || action > 3;
//			if (badAction)
//			{
//				printf("Enter a number from 0 - 3\n");
//			}
//
//		} while (badAction);
//
//		switch (action)
//		{
//		case 0:
//			printf("Exit\n");
//			/* exit the program */
//			break;
//		case 1:	// show all books and their authors
//			for (i = 0; i < numAuthors; i++)
//			{
//				printf("")
//			}
//			break;
//		case 2:	// show all books by a single author
//			break;
//		case 3:	// show all authors and the books they have written
//			break;
//		case 4:	// add a new book
//			break;
//		case 5:	// remove a book
//			break;
//		default:
//			break;
//		}
//
//	} while (action != 0);
//	return 0;
//}
//
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#define MAX_PATH_LEN 70
//#define MIN_PATH_LEN 10
//#define MAX_LIVES 10
//#define MIN_LIVES 1
//#define MULTIPLE 5
//#define NON '.'
//#define BOMBS '!'
//#define TREASURE '$'
//#define BOTH '&'
//#define  MIN_MOVE 1
//
//
//
//struct PlayerInfo
//{
//	int numOfLives;
//	char symbol;
//	int numTreasure;
//	int position[MAX_PATH_LEN];
//	//int type;
//};
//
//struct GameInfo
//{
//	int maxMove;
//	int pathLen;
//	int bomb[MAX_PATH_LEN];
//	int treasure[MAX_PATH_LEN];
//};
//
//
//int main(void)
//{
//	struct PlayerInfo player;
//	struct GameInfo game;
//	int flag = 1, i, j;
//	int treasureCount = 0;
//	int move;
//
//	printf("================================\n"
//		"Treasure Hunt!\n"
//		"================================\n\n");
//
//	printf("PLAYER Configuration\n"
//		"--------------------\n"
//		"Enter a single character to represent the player: ");
//	scanf("%c", &player.symbol);
//
//
//	do
//	{
//		printf("Set the number of lives:");
//		scanf("%d", &player.numOfLives);
//		if (player.numOfLives < 1 || player.numOfLives > 10)
//		{
//			printf("Must be between 1 and 10!\n");
//			flag = 0;
//		}
//		else
//		{
//
//			flag = 1;
//		}
//	} while (!flag);
//	printf("Player configuration set-up is complete\n\n");
//
//	printf("GAME Configuration\n"
//		"------------------\n");
//
//	do
//	{
//		printf("Set the path length(a multiple of 5 between 10 - 70) :");
//		scanf("%d", &game.pathLen);
//		if (game.pathLen < 10 || game.pathLen > 70 || game.pathLen % 5 != 0)
//		{
//			printf("Must be a multiple of 5 and between 10-70!!!\n");
//			flag = 0;
//		}
//		else
//		{
//			flag = 1;
//		}
//	} while (!flag);
//
//	do
//	{
//		printf("Set the limit for number of moves allowed:");
//		scanf("%d", &game.maxMove);
//		if (game.maxMove < 3 || game.maxMove > 26)
//		{
//			printf("Value must be between 3 and 26\n");
//			flag = 0;
//		}
//		else
//		{
//			flag = 1;
//		}
//	} while (!flag);
//
//
//
//
//	printf("BOMB Placement\n"
//		"--------------\n"
//		"Enter the bomb positions in sets of 5 where a value\n"
//		"of 1 = BOMB, and 0 = NO BOMB.Space - delimit your input.\n"
//		"(Example: 1 0 0 1 1) NOTE: there are 35 to set!\n");
//	for (i = 0; i < game.pathLen; i += 5)
//	{
//		printf("   Positions [%2d-%2d]: ", i + 1, i + 5);
//		int j;
//		for (j = i; j < i + 5; j++)
//		{
//			scanf("%d", &game.bomb[j]);
//		}
//	}
//	printf("BOMB placement set\n");
//
//
//
//	printf("TREASURE Placement\n"
//		"------------------\n"
//		"Enter the treasure placements in sets of 5 where a value\n"
//		"of 1 = TREASURE, and 0 = NO TREASURE.Space - delimit your input.\n"
//		"(Example: 1 0 0 1 1) NOTE: there are 35 to set!\n");
//
//	for (i = 0; i < game.pathLen; i += 5)
//	{
//		printf("Positions [ %2d- %2d]:", i + 1, i + 5);
//		int j;
//		for (j = i; j < i + 5; j++)
//		{
//			scanf("%d", &game.treasure[j]);
//		}
//	}
//	printf("TREASURE placement set\n\n");
//
//	printf("GAME configuration set-up is complete...\n\n"
//		"------------------------------------\n"
//		"TREASURE HUNT Configuration Settings\n"
//		"------------------------------------\n");
//	printf("Player:\n");
//	printf("Symbol:%c\n", player.symbol);
//
//	printf("Lives:%d\n", player.numOfLives);
//	printf("Treasure : [ready for gameplay]\n");
//	printf("History  : [ready for gameplay]\n");
//
//	printf("Game:\n");
//	printf("Path Length: %d\n", game.pathLen);
//	printf("Bombs:");
//	for (i = 0; i < game.pathLen; i++)
//	{
//		printf("%d", game.bomb[i]);
//	}
//
//	printf("\nTreasure :");
//
//	for (i = 0; i < game.pathLen; i++)
//	{
//		printf("%d", game.treasure[i]);
//	}
//
//
//	printf("\n====================================\n"
//		"~ Get ready to play TREASURE HUNT!~\n"
//		"====================================\n");
//
//	printf("--------------------\n");
//	for (i = 0; i < game.pathLen; i++)
//	{
//		if (!((i + 1) % 10)) // not equal to 1~9, need to be 10,20,30
//		{
//			printf("%d", (i + 1) / 10);
//		}
//		else
//		{
//			printf("|");
//		}
//
//	}
//	printf("\n");
//	for (i = 0; i < game.pathLen; i++)
//	{
//		if ((i + 1) % 10)
//		{
//			printf("%d", (i + 1) % 10);
//		}
//		else
//		{
//			printf("0");
//		}
//	}
//
//	printf("\n");
//
//	printf("+---------------------------------------------------+\n"
//		"Lives: %d | Treasures : %d | Moves Remaining : %d\n"
//		"+---------------------------------------------------+\n",
//		player.numOfLives, treasureCount, game.maxMove);
//	do
//	{
//		flag = 1;
//		printf("Next Move [1-20]:");
//		scanf("%d", &move);
//		if (move <= MIN_MOVE || move >= game.pathLen)
//		{
//			flag = 0;
//			printf("Out of Range!!!\n");
//			
//		}
//		else
//		{
//			flag = 1;
//		}
//	} while (!flag);
//
//
//
//
//
//
//
//	return 0;
//
//}
//



// final
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <ctype.h> //check upper care, digit ....
//
//#define SIZE 6
//
//
//struct Data
//{
//	int memberInt;
//	int memberArray[SIZE];
//	char memberChar;
//
//};
//
//
//
//
//void printArray(const int array[], int size);
//void evenarr(const int array[], int size, int *evenCount);
//void printStructData(const struct Data *input);
//void stringUpper(char input[]);
//
//
//void main(void)
//{
//
//	int arr[SIZE] = { 2,2,2,4,6,12 };
//
//	int count = -1; // dont give 0 cuz will think 0 is a value
//	printArray(arr, SIZE);
//	evenarr(arr, SIZE, &count);
//	printf("\nthere are %d even value in the array\n", count); //&count pass the address of int
//
//
//	struct Data info = { 3,{1,2,3}, 'a'};
//	printStructData(&info);
//
//	char cString[SIZE + 1] = "Hello"; //cstring need one more extra space , string is an arry of character
//	printf("%s", cString);
//	stringUpper(cString); //modify the data to upeercase 
//	printf("%s", cString);
//	
//
//
//
//	return;
//}
//
//
//void stringUpper(char input[])
//{
//	int i;
//	for (i = 0; i < strlen(input); i++) //strlen to know the lengh of size
//	{
//		input[i] = toupper(input[i]); //to let input become upper store in input
//	
//	}
//	return;
//}
//
//
//
//
//
//void printArray(const int array[], int size) // always put cinst in front of array
//{
//	int i;
//	for (i = 0; i < size; i++)
//	{
//		printf("[%d] = %d ", i, array[i]);
//
//	}
//	return;
//}
//
//
////int evenarr(const int array[], int size)
////{
////	int count = 0; // local variable, only work in this function
////	for (int i = 0; i < size; i++)
////	{
////		//check if value an index is even
////		if (!(array[i] % 2)) // need to specify wich i , array[i] % 2 == 0
////		{
////			count++;
////		}
////	}
////	return count;
////}
//
//
//void evenarr(const int array[], int size, int *evenCount)
//{
//	*evenCount = 0; // low coupling , set the data not the address 
//	for (int i = 0; i < size; i++)
//	{
//		//check if value an index is even
//		if (!(array[i] % 2)) // need to specify wich i , array[i] % 2 == 0
//		{
//			*evenCount++;
//		}
//	}
//	return; 
//}
//
//void printStructData(struct Data *input)
//{
//	printf("print data member: memberInt = %d, \nmembrtArray = ", input->memberInt); // input->memberInt == (*input).memberInt
//	printArray((*input).memberArray, SIZE);
//	printf(", memberChar = %c", (*input).memberChar);
//
//
//}
//
//void file(struct Data input, char filename[])
//{
//	FILE* fp = NULL;
//	fp = fopen(filename, "r");
//	if (fp != NULL)
//	{
//		fprintf(fp, "abc");
//		fclose(fp);
//	}
//	else
//	{
//		printf("error\n");
//	}
//	return;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int getNonNegInt(void)
//{
//	int value;
//
//	do {
//		printf(" Non-negative : ");
//		scanf("%d", &value);
//		if (value < 0)
//			printf(" * Negative! *\n");
//	} while (value <= 0);
//
//	return value;
//}
//int power(int base, int exp)
//{
//	int i, result;
//
//	result = 1;
//	for (i = 0; i < exp; i++)
//		result = result * base;
//
//	return result;
//}
//
//int main(void)
//{
//	int base, exp, answer;
//
//	printf("Enter base : ");
//	scanf("%d", &base);
//	printf("Enter exponent : ");
//	scanf("%d", &exp);
//	exp = getNonNegInt();
//	answer = power(base, exp);
//
//	printf("%d^%d = %d\n", base, exp, answer);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void printChar(char ch, int num)
//{
//	int i;
//	for (i = 0; i < num; i++)
//	{
//		printf("%c", ch);
//	}
//	printf("\n");
//}
//
//
//int power(int n, int pow)
//{
//	int i, result = 1;
//	for (i = 0; i < pow; i++)
//	{
//		result *= n;
//	}
//	return result;
//}
//
//int main(void)
//{
//	int i;
//	printChar('-', 40);
//	printf("%4s%6s\n", "N", "2**N");
//	for (i = 0; i < 11; i++)
//	{
//		printf("%4d%6d\n", i, power(2, i));
//	}
//	printChar('*', 40);
//	return 0;
//}
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//
//int f(int);
//
//
//int main(void)
//{
//	printf("%d", f(4));
//	return 0;
//}
//
//int f(int x)
//{
//	
//	x = x + 3;
//	return x;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
////double div2(int x);
//
//int main(void)
//{
//	int N;
//	scanf("%d", &N);
//	printf("%.2f\n", sqrt(N));
//	return 0;
//}
//
//double div2(int x)
//{
//	x = x / 2;
//	return x;
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int com(int a, int b);
//int max(int a, int b, int c);
//
//int main(void)
//{
//	int a, b, c, max;
//	printf("enter first int: ");
//	scanf("%d", &a);
//	printf("enter sec int: ");
//	scanf("%d", &b);
//	printf("enter third int: ");
//	scanf("%d", &c);
//	com(a, b, c);
//
//	printf("biggest is %d", max(a, b, c));
//	return 0;
//
//}
//
//int com(int a, int b)
//{
//	int max;
//	if (a >= b)
//	{
//		max = a;
//	}
//	else
//	{
//		max = b;
//	}
//
//	return max;
//}
//
//int max(int a, int b, int c)
//{
//	return com(com(a, b), c);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void star(int i);
//void triagel(int N);
//
//int main(void)
//{
//	int N;
//	printf("N = ");
//	scanf("%d", &N);
//	triagel(N);
//	return 0;
//}
//
//void star(int i)
//{
//	int j;
//	for (j = 0; j <= i; j++)
//	{
//		printf("*");
//	}
//}
//
//void triagel(int N)
//{
//	int i;
//	for (i = 0; i < N; i++)
//	{
//		star(i);
//		printf("\n");
//	}
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void count(int i);
//
//int main(void)
//{
//	int i;
//	count(1);
//	
//	return 0;
//}
//
//
//void count(int i)
//{
//
//	if(i <= 3)
//	{
//		count(i +1);
//		printf("%d\n", i);
//		
//	}
//}
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int sum(int num);
//
//int main(void)
//{
//	int i, N;
//	printf("N = ");
//	scanf("%d", &N);
//	printf("%d", sum(N));
//	return 0;
//}
//
////int sum(int N)
////{
////	int i, sum = 0;
////	for (i = 0; i < N; i++)
////	{
////		sum = sum + i + 1;
////	}
////	return sum;
////}
//
//int sum(int num)
//{
//	if (num == 1)
//	{
//		return 1;
//	}
//	return sum(num - 1) + num;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int S(int num);
//int main(void)
//{
//	int N;
//	printf("N = ");
//	scanf("%d", &N);
//	printf("%d", S(N));
//	return 0;
//}
//
//int S(int num)
//{
//	if (num <= 2)
//	{
//		return num;
//	}
//	return S(num - 1) + S(num - 2);
//}

//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	int x;
//	printf("Enter x :");
//	scanf("%d", &x);
//	printf("Value: %d\n", x);
//	printf("Address :%x\n", &x);
//	return 0;
//}


//
//#include <stdio.h>
//
//int main() {
//	int num = 42;
//	int* ptr = &num;  // 定义指针ptr，并将其指向变量num的内存地址
//
//	printf("Value of num: %d\n", num);
//	printf("Address of num: %p\n", &num);
//	printf("Value of ptr: %p\n", ptr);  // ptr存储了变量num的地址
//	printf("Value at ptr: %d\n", *ptr);  // 使用指针解引用来获取num的值
//
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int num = 42;
//	int* ptr = &num;
//
//	printf("Value at ptr: %d\n", *ptr);  // 解引用指针，获取num的值
//
//	*ptr = 99;  // 修改通过指针访问的值
//	printf("Modified value of num: %d\n", num);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	char letter = 'A';
//	char* ptr = &letter;
//
//	printf("Character at ptr: %c\n", *ptr);  // 解引用指针，获取字符的值
//
//	*ptr = 'B';  // 通过指针修改字符的值
//	printf("Modified character: %c\n", letter);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int arr[5] = { 10, 20, 30, 40, 50 };
//	int* ptr = arr;  // 数组名本身就是指向数组首元素的指针
//
//	printf("First element: %d\n", *ptr);  // 解引用指针，获取数组第一个元素的值
//
//	*(ptr + 2) = 99;  // 通过指针修改数组的值
//	printf("Modified third element: %d\n", arr[2]);
//
//	return 0;
//}
//
//

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int swap(int *a, int *b);
//
//int main(void)
//{
//	int a;
//	int b;
//	printf("a = ");
//	scanf("%d", &a);
//	printf("b = ");
//	scanf("%d", &b);
//	swap(&a, &b);
//
//	printf("After swap: a = %d, b =%d\n", a, b);
//	return 0;
//
//}
//
//
//int swap(int *a, int *b)
//{
//
//
//	int t = *a;
//	*a = *b;
//	*b = t;
//	
//}
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//// day_to_dm return day and month of given day in year
//// assumes not leap year
////
//void day_to_dm(int day, int d, int m)
//{
//	if (day < 32)
//	{
//		m = 1;
//		d = day;
//	}
//	else if (day < 60)
//	{
//		m = 2;
//		d = day - 31;
//	}
//	else if (day < 91)
//	{
//		m = 3;
//		d = day - 59;
//	}
//	else if (day < 121)
//	{
//		m = 4;
//		d = day - 90;
//	}
//	else if (day < 152)
//	{
//		m = 5;
//		d = day - 120;
//	}
//	else if (day < 182)
//	{
//		m = 6;
//		d = day - 151;
//	}
//	else if (day < 223)
//	{
//		m = 7;
//		d = day - 181;
//	}
//	else if (day < 254)
//	{
//		m = 8;
//		d = day - 222;
//	}
//	else if (day < 284)
//	{
//		m = 9;
//		d = day - 253;
//	}
//	else if (day < 305)
//	{
//		m = 10;
//		d = day - 283;
//	}
//	else if (day < 335)
//	{
//		m = 11;
//		d = day - 304;
//	}
//	else if (day < 366)
//	{
//		m = 12;
//		d = day - 334;
//	}
//}
//
//int main(void)
//{
//	int day, d, m;
//
//	printf("Day of Year : ");
//	scanf("%d", &day);
//
//	day_to_dm(day, d, &m);
//
//	printf("Day/Month is %d/%d\n", d, m);
//
//	return 0;
//}
//
//#include <stdio.h>
//
//int main() {
//	int num = 42;
//	int* ptr = &num;  // ptr指向变量num
//
//	printf("Value of num: %d\n", num);
//	printf("Value at ptr: %d\n", *ptr);  // 使用解引用运算符获取ptr所指向的值
//
//	*ptr = 99;  // 使用解引用运算符修改ptr所指向的值
//	printf("Modified value of num: %d\n", num);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//#define MAX_PRODUCTS 10
//
///*************************************************************************************
//* In-Class Exercise
//* This is an exercise to demonstrate how to create functions.
//**************************************************************************************/
//
///*************************************************************************************/
///* A function contains code which can be called multiple times. Each time it is      */
///* called, we can change the parameters passed to it to get it to do different       */
///* calculations.                                                                     */
///*************************************************************************************/
//
//int stringLength(const char str[])
//{
//	int result = 0;
//	for (result = 0; str[result] != '\0'; result++);
//	return result;
//}
//
///*************************************************************************************/
///*The following function is void, because it does not compute a value to return but  */
///* has a side-effect where it prints the string s centered in the indicated fill     */
///* character. For example, if you called centerText("Dog", 10, '*') it should print  */
///* ***Dog****                                                                        */
///* TODO: Complete the code below to use the stringLength function to calculate the   */
///* required spacing for the text and print it out.                                   */
///*************************************************************************************/
//void centerText(const char s[], int desiredWidth, char fillChar)
//{
//	int i = 0, stringWidth = 0, fillWidth = 0;
//
//	stringWidth = stringLength(s) /* calculate length of s */;
//	fillWidth = (desiredWidth - stringWidth) / 2/* calculate width of fill string on each end */;
//
//	for (i = 0; fillWidth/* How far */; i++)
//	{
//		printf("%c", fillChar);
//	}
//	printf("%s", s);
//	for (i = 0; i < fillWidth/* when do I stop */; i++)
//	{
//		printf("%c", fillChar);
//	}
//	/* we do not print a newline here because the caller might not want one */
//}
//
//int main(void)
//{
//	char filler = '-';
//	char str[] = "Tiger";
//
//	/*********************************************************************************/
//	/* TODO: Call the function to print str in field 10 chars wide filled with dashes*/
//	/*********************************************************************************/
//
//	centerText(str, 10, filler/* arguments go here */);
//	printf("\n");
//
//	/*********************************************************************************/
//	/* TODO: Call the function again to print "1,000,000" in field 20 chars wide     */
//	/* filled with dollar signs.                                                     */
//	/*********************************************************************************/
//	centerText("1,000,000", 20, '$');
//	return 0;
//}
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	int n = 42;
//	/******************************************************************************/
//	/* This creates a pointer to the variable n. Note that & generates the address*/
//	/* at which a variable is located in memory.                                  */
//	/******************************************************************************/
//	int* ptrToN = &n;
//
//	/******************************************************************************/
//	/* TODO: Complete the printf below to print out the value of n but use ptrToN */
//	/* to access the value of n.                                                  */
//	/******************************************************************************/
//	printf("n=%d\n", *ptrToN/* expression to access n via pointer */);
//
//	/******************************************************************************/
//	/* TODO: Create an expression that will increment the value of n by 1 without */
//	/* using the variable n in the expression. Just use ptrToN.                   */
//	/******************************************************************************/
//	/* expression to increment n without using n in the expression */
//	(*ptrToN)++;
//	printf("After increment, n=%d\n", n);
//
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//#define MAX_PAYS 5
//
///**********************************************************************************/
///* This shows how to pass parameters by reference.                                */
///**********************************************************************************/
//
///**
//* This function computes the average and largest value in an array.
//* The largest value is returned by the function and the average is returned via a parameter.
//* @param ar - array of values to work with
//* @param size - the number of values in the array
//* @param avg - set to the average of the array
//*
//* @returns the largest value in the array
//*/
//double maxAndAverage(const double ar[], const int size, double* avg)
//{
//	double sum = 0.0, largest = -999999.9;
//	int i = 0;
//
//	/******************************************************************************/
//	/* TODO: Replace the comments in this function with the actual code to do the */
//	/* required calculations.                                                     */
//	/******************************************************************************/
//	for (i = 0; i < size; i++)
//	{
//		sum += ar[i];
//		if (ar[i] > largest/* this array value is greater than the largest seen so far */)
//		{
//			largest = ar[i];/* remember this to be the new largest value */
//		}
//	}
//	*avg = sum / size;/* set the avg parameter to be the average of the array values */
//	return largest;
//}
//
//int main(void)
//{
//	double payRates[MAX_PAYS] = { 15.50, 14.50, 17.00, 15.25 };
//	double average = 0.0, maxValue = 0.0;
//	int numPayRates = 4;
//
//	/*******************************************************************************/
//	/* TODO: Fill in the missing parameters for the function call below.           */
//	/*******************************************************************************/
//	maxValue = maxAndAverage(payRates/* array */, numPayRates/* #values in array */, &average/* variable for avg */);
//
//	printf("The average pay is %.2lf and the highest pay is %.2lf\n", average, maxValue);
//
//	return 0;
//}


//#include <stdio.h>
//
//void addOne(int* incoming)
//
//{
//	*incoming += 1;
//	return;
//}
//
//int main(void)
//
//{
//	int arg1 = 4;
//	addOne(&arg1);
//	printf("The value stored in arg1 is %d\n", arg1);
//	return 0;
//}


//#include <stdio.h>
//int addone(int* num);
//
//int main(void)
//{
//	int a = 3;
//	addone(&a);
//	printf("%d", a);
//	return 0;
//}
//
//int addone(int* num)
//{
//	*num = *num + 1;
//}

//#include <stdio.h>
//void swap(int* a, int* b);
//int main(void)
//{
//	int a = 3, b = 5;
//	printf("a= %d\n", a);
//	printf("b= %d\n", b);
//
//	swap(&a, &b);
//	
//
//	printf("a= %d\n", a);
//	printf("b= %d\n", b);
//
//	return 0;
//}
//
//void swap(int *a, int *b)
//{
//	int t = *a;
//	*a = *b;
//	*b = t;
//
//}


//#include <stdio.h>
//void swap(int *a, int* b);
//void sort(int* a, int* b);
//
//int main(void)
//{
//	int a = 5, b = 3;
//	sort(&a, &b);
//	printf("a= %d\n", a);
//	printf("b= %d\n", b);
//
//	return 0;
//}
//
//
//void swap(int* a, int* b)
//{
//	int t = *a;
//	*a = *b;
//	*b = t;
//}
//
//void sort(int *a, int *b)
//{
//	if (*a > *b)
//	{
//		swap(&*a, &*b);
//	}
//
//}

//#include <stdio.h>
//
//int main(void)
//{
//	int v[5] = { 1,2,3,4,5 };
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d\n", v[i]);
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int power(int base, int exp);
//
//int main(void)
//{
//	int base, exp, ans;
//
//	printf("Enter base : ");
//	scanf("%d", &base);
//	printf("Enter exponent : ");
//	scanf("%d", &exp);
//	ans = power(base, exp);
//
//	printf("%d^%d = %d\n", base, exp, ans);
//
//	return 0;
//}
//
//int power(int base, int exp)
//{
//	int i, result = 1;
//	for (i = 0; i < exp; i++)
//	{
//		result = result * base;
//	}
//	return result;
//}



//#include <stdio.h>
//
//#include <stdio.h>
//
//struct Student
//{
//	int no;
//	int no_grades_filled;
//	float grade[4];
//};
//
//void set(struct Student *st);
//void display(const struct Student *st);
//
//int main(void)
//{
//	struct Student harry = { 975, 2, {50.0f, 50.0f} };
//
//	set(&harry);
//	display(&harry);
//}
//
//void set(struct Student *st)
//{
//	struct Student harry = { 306, 2, {78.9, 91.6} };
//
//	*st = harry;
//}
//
//void display(const struct Student *st)
//{
//	int i;
//	printf("Grades for %d\n", st->no);
//
//	for (i = 0; i < st->no_grades_filled; i++)
//	{
//		printf("%.1f\n", st->grade[i]);
//	}
//}
//#include <stdio.h>
//
//struct A
//{
//	int x;
//	double r;
//};
//
//void foo(struct A* c);
//struct A goo(struct A d);
//
//int main(void)
//{
//	struct A a = { 4, 6.67 }, b;
//
//	foo(&a);
//
//	printf("00%d.%.3lf.111\n", a.x, a.r);
//
//	b = goo(a);
//
//	printf("00%d.%.3lf.112\n", a.x, a.r);
//	printf("%d.%.3lf.113\n", b.x, b.r);
//}
//
//void foo(struct A* c)
//{
//	int i;
//
//	i = c->x;
//	c->x = c->r;
//	c->r = c->x % i + 202.134;
//}
//
//struct A goo(struct A d)
//{
//	struct A e;
//
//	d.x = d.r - 62;
//	e = d;
//	return e;
//}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX_NAME 30
#define MAX_GRADES 15

/**********************************************************************************/
/* This shows how to pass structs to a function.                                  */
/**********************************************************************************/

struct Student
{
	char name[MAX_NAME + 1];
	double grades[MAX_GRADES];
	int numGrades;
};

/**
* Queries the user to fill the information in a Student struct.
* @param stu - the Student struct into which to store the information from the user
* @returns void
*/
void getStudentInformation(struct Student* stu)
{
	double grade = 0.0;
	/*********************************************************************************/
	/* TODO: Fill in the missing parts of the code below.                            */
	/*********************************************************************************/

	printf("Enter the student's name: ");
	scanf("%[^\n]", stu->name/* code to access name in the struct */);
	printf("Enter the student's grades separated by spaces (negative to stop): ");
	stu->numGrades = 0;
	scanf("%lf", &grade);
	while (grade >= 0.0)
	{
		stu->grades[stu->numGrades]/* code to access the correct members of the grade array */ = grade;
		stu->numGrades++;/* code to increment the count of grades in the array */
		scanf("%lf", &grade);
	}
}

/**
* Print the information on a single student.
* @param stu - the student information to print
* @returns void
*/
void printStudent(const struct Student* stu)
{
	int i = 0;

	printf("%s: ", stu->name/* code to access the student name */);
	for (i = 0; i < stu->numGrades/* code to access the number of grades in the array*/; i++)
	{
		printf("%.2lf%s", stu->grades[i]/* expression to access the ith grade */,
			(stu->numGrades/* expression to return the number of grades */ == (i + 1) ? "\n" : ", "));
	}
}

int main(void)
{
	struct Student student1 = { {0}, {0}, 0 };

	getStudentInformation(&student1);
	printStudent(&student1);
	printf("\n");

	return 0;
}
