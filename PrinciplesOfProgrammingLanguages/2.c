/*
// find biggest number out of 3 
#include <stdio.h>
int main() // find biggest number out of 3
{
	int num1, num2, num3; //declare variables
	printf(" Enter the number1 = ");
	scanf("%d", &num1);
	printf("\n Enter the number2 = ");
	scanf("%d", &num2);
	printf("\n Enter the number3 = ");
	scanf("%d", &num3);
	if (num1 > num2) // check if 1 is bigger than 2
	{
		if (num1 > num3) // check if 1 is bigger than 3
		{
			printf("\n Largest number = %d \n",num1);
		}
		else
		{
			printf("\n Largest number = %d \n",num3);
		}
	}
	else if (num2 > num3) // check if 2 is bigger than 2
	{
		printf("\n Largest number = %d \n",num2);
	}
	else
	{
		printf("\n Largest number = %d \n",num3);
	}
	return 0;
}*/

/*
// calculate sum, differences, division and multiplication result of 2 numbers
#include <stdio.h>
int main()
{
	int x,y;
	printf("enter the two numbers seperated by space - ");
	scanf("%d %d",&x,&y); // declared and got values for variables

	int sum,diff,mult;
	float div;
	// made variables to store values in

	sum = x+y;
	diff = x-y;
	mult = x*y;
	div = x/y;
	//performed mathematical operations

	printf("sum = %d\ndiff = %d\nmult = %d\ndiv = %lf",sum,diff,mult,div);
	// values printed
return 0;
}
*/

/*
// check if a number entered is even or odd
#include <stdio.h>
int main()
{
	int x;
	printf("enter value for variable - ");
	scanf("%d",&x); // declared variable and gave it value 

	if(x%2==0) // checking if num is divisible by 2 or not
		printf("%d is an even number",x);
	else
		printf("%d is an odd number",x);
	// printed if num is even or odd

	return 0;
}
*/

/*
// multiply two numbers without using the * operator
#include <stdio.h>
int main()
{
	int x,y;
	int i=0,prod=0;
	printf("enter the numbers to be multiplied spereated by space - ");
	scanf("%d %d",&x,&y); // entered values for variables created

	while(i<y) // loop runs till y times
	{
		prod+=x;
		++i;
	}

	printf("product of the numbers is = %d\n",prod); // printed product

	return 0;
}
*/