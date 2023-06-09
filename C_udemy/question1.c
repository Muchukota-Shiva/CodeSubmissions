/*
question - print area and perimeter of rectangle 

printf("%d days = %d year(s), %d month(s), %d day(s)\n", days, days / 365, (days % 365) / 30, (days % 365) % 30);

*/
#include <stdio.h>
//#include <"stdlib.h">
int main()
{
	double l;
	double b;
	double area ;
	double perimeter; //made variables 
	printf("enter lenght : \n");
	scanf("%lf",&l);
	printf("enter breadth : \n");
	scanf("%lf",&b);
	printf("\n");
	printf("lenght = %lf \nwidth = %lf \n\n\n",l,b); //entered value
	area = 0.0;
	perimeter = 0.0;
	area = l*b;
	perimeter = 2.0 * (l+b);
	printf("the area is %.2lf and the perimeter is %.2lf \n\n\n",area,perimeter); // finished it
	return 0;
}	