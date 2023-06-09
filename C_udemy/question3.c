/*
question - generate prime numbers between 3-100
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
	int p;
	int i;

	int primes[50]={0};
	int primeIdex=2;

	//hardcore first 2 prime numbers

	primes[0]=2;
	primes[1]=3;

	bool isprime;

	for(p=5;p<=100;p=p+2)//start at 5 , stay below 100,skip even numbers
	{
		isprime = true;
		for (i=1;isprime && p/primes[i]>=primes[i];++i)
		{
			if (p%primes[i]==0)
				isprime = false;
		}
	if (isprime==true)
	{
		primes[primeIdex]=p;
		++primeIdex;	
	}
	}

	for (i=0;i<primeIdex;++i)
		printf("%i ",primes[i]);

	return 0;
}