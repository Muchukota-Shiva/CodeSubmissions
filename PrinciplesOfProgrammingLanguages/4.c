/*
// check if given character is vowel or consoent
#include <stdio.h>
int main() //question 1 check if given alphabet is vowel or consonant using 		switch statement
{
	char ch;
	printf("Enter any alphabet: ");
	scanf("%c", &ch);
	switch(ch) //create cases of vowels and a default saying consonant 
	{
		case 'a':
			printf("Vowel");
			break;
		case 'e':
			printf("Vowel");
			break;
		case 'i':
			printf("Vowel");
			break;
		case 'o':
			printf("Vowel");
			break;
		case 'u':
			printf("Vowel");
			break;
		case 'A':
			printf("Vowel");
			break;
		case 'E':
			printf("Vowel");
			break;
		case 'I':
			printf("Vowel");
			break;
		case 'O':
			printf("Vowel");
			break;
		case 'U':
			printf("Vowel");
			break;
		default:
			printf("Consonant");
	}
	return 0;
}
*/

/*
// find biggest number out of 3
int main()
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
}
*/

/*
// find if given number is positive, negative or 0
int main() 
{
	int x;
	printf("enter number to check - ");
	scanf("%d",&x);
	printf("\n"); // check if num is greater than or less than 0 or if it is 0
	if (x==0)
		printf("the number is 0\n");
	else if(x>0)
		printf("%d is a positive number\n",x);
	else if(x<0)
		printf("%d is a negative number\n",x);

	return 0;	
}
*/

/*
// check if entered year is leap year or not
int main() 
{
	int y;//year variable
	printf("enter the year in yyyy format - ");
	scanf("%d",&y);

	if (y%100==0)
		if (y%400==0)
			printf("the year is a leap year\n");
		else
			printf("the year is not a leap year\n");
	//space	
	else
		if (y%4==0)
			printf("the year is a leap year\n");
		else
			printf("the year is not a leap year\n");

	return 0;	
}

/*
// find root of quadratic equation
#include <math.h>
int main()
{
	printf("this program takes input in form of a.x^2+b.x+c \n");
	int a,b,c; // constants of the equation
	int x; // the variable
	int r,r1,r2; // root , and root 1 and root 2 if not same
	int d; // determinant

	printf("enter values for the variables a , b and c - ");
	scanf("%d %d %d",&a,&b,&c);

	d = (b*b)-(4*(a*c));

	if (d>0 || d==0)
	{
		if (d>0)
		{
			r=sqrt(d);
			r1=((-1*b)+r)/(2*a);
			r2=((-1*b)-r)/(2*a);
			printf("the roots are unique and are %d and %d \n",r1,r2);
		}
		else
		{	
			r=((-1*b)+r)/(2*a);
			printf("the roots are same and is %d \n",r);
		}
	}
	else
		printf("the roots are imaginary and root does not exist");

	return 0;	
}
*/