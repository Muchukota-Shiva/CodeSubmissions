/*
#include <stdio.h>
void armstrong(int a) // first function made
{
	int temp,sum,rem;
	temp=a;
	sum=0;
	while(temp>0)
	{
		rem=(temp%10);
		sum=sum+(rem*rem*rem);
		temp=(temp/10);
	}
	if(a==sum)
	{
		printf("%d ",a);
	}
	else
	{
		printf("");
	}
}

int coprime(int b) //second function has been crapped on and has some infi-nite sequence
{
	int n1,n2,hcf,i;
	printf("enter two numbers - ");
	scanf("%d%d",&n1,&n2);
	for(i=1 ; i<=n1 ; i++)
	{
		if(n1%i==0 && n2%i==0)
		{
			hcf=i;
		}
	}

	if(hcf==1)
	{
		printf("the numbers are co-prime numbers");
	}
	else
	{
		printf("the numbers are not co-prime");
	}

	return 0;
}	

int factorial(int c)//function 3 made
{
	if(c==1)
	{
		return 1;
	}

	else
	{
		return c*factorial(c-1);//note to work it has to be like f=factorial(c)
	}

	return 0;
}

int main( )
{
	int no;
	printf("Armstrong numbers between 1 and 1000 are:\n");
	for(no=1; no<=1000; no++)
	{
		armstrong(no);
	}
	
	printf("\n lets see if 9 and 8 are coprime");
	coprime(54);

	printf("\n lets see what is the factorial of 5\n");
	int f;
	f=factorial(5);
	printf("%d is the factorial.",f);
	

	return 0;
}
*/