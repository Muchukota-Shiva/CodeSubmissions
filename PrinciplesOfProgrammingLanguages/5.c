/*
// print armstrong nubmers between 1 and n
#include <stdio.h>
#include <math.h>
int main()
{
	int num, lastDigit, digits, sum, i, end;
	//Input upper limit from user 
	printf("Enter upper limit: ");
	scanf("%d", &end);
	printf("Armstrong number between 1 to %d are: \n", end);
	for(i=1; i<=end; i++)
	{
		sum = 0;
		//Copy the value of num for processing 
		num = i;
		// Find total digits in num 
		digits = (int) log10(num) + 1;
		// Calculate sum of power of digits 
		while(num > 0)
		{
			// Extract last digit 
			lastDigit = num % 10;
			// Find sum of power of digits
			// Use ceil() function to overcome any rounding errors by 				
			//pow()
			sum = sum + ceil(pow(lastDigit, digits));
			// Remove the last digit 
			num = num / 10;
		}
		//Check for Armstrong number 
		if(i == sum)
		{
			printf("%d, ", i);
		}
	}
	return 0;
}
*/

/*
// find sum of digits using for loop
#include <stdio.h>

int main()
{
	int n,rem;
	int sum=0;
	printf("enter the number whose sum you want - ");
	scanf("%d",&n);
	printf("\n");

	while(n>0)
	{
		rem=int(n%10);
		sum=sum+rem;
		n=int(n/10);
	}

	printf("sum of digits of numbers entered is - %d",sum);
	return 0;
}
*/

/*
// find the sum of 1+1/2+1/3 ... 1/n
#include <stdio.h>
#include <stdio.h>

int main()
{
    double number, sum = 0, i;

    printf("\n enter the number ");
    scanf("%lf", &number);
    for (i = 1; i <= number; i++)
    {
        sum = sum + (1 / i); // x + 1/n
        if (i == 1)
            printf("\n 1 +");
        else if (i == number)
            printf(" (1 / %lf)", i);
        else
            printf(" (1 / %lf) + ", i);
    }
    printf("\n The sum of the given series is %.2lf", sum);
    return 0;
}
*/