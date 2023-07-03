#include <stdio.h>

/**
 * main-Write a c program to print your name,date of birth 
 *       and your mobile number.
 */
int main()
{
	char Name[] = "Alexandra Abramov";
	char Month[] = "July";
	int  Day = 14;
	int  Year = 1975;
	char Mobile[] = "99-9999999999";

	printf("Name	:%s \n",Name);
	printf("DOB	:%s %d, %d\n",Month,Day,Year);
	printf("Mobile	:%s\n",Mobile);
	return(0);
}
