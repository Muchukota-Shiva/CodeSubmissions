/*
// question 1 , calculate area of parralelogram , trapezoid,rhombus,sphere and ellipse
#include <stdio.h>
int main()
{	
	int pb,ph; //for ||gram
	int th,tb,tb2; //for trapezoid
	int rh,rs; //for rhombus
	double sr; //for sphere
	double er,er2; //for ellipse



	printf("enter base and height resp. of ||gram seperated by space - ");
	scanf("%d %d",&pb,&ph);
	printf("enter height , long base and short base resp. of trapezoid sep	erated by space - ");
	scanf("%d %d %d",&th,&tb,&tb2);
	printf("enter height and side resp. of rhombus seperated by space - ");
	scanf("%d %d",&rh,&rs);
	printf("enter radius of circle - ");
	scanf("%lf",&sr);
	printf("enter major radius and minor radius resp. of ellipse seperated 	by space - ");
	scanf("%lf %lf",&er,&er2);

	int para=0,trap=0,rhom=0;
	double sphe=0.0,elli=0.0; //area of all shapes

	para = pb*ph;
	trap = ((tb+tb2)*th)/2;
	rhom = rh*rs;
	sphe = (sr*sr)*3.14;
	elli = (3.14)*(er*er2);

	printf("area of ||gram is-%d \narea of trapezoid is-%d \narea of rhom	bus is-%d \narea of sphere is-%.2lf \narea of ellipse is-%.2lf 			\n",para,trap,rhom,sphe,elli);
	
	return 0;
} 
*/

/*
// demonstrate swapping of variable without use of third variable
#include <stdio.h>
int main()
{
int x,y,z;
	x=1;
	y=2;
	z=0;
	printf("swapping with 3rd  variables - ");
	z=x;
	x=y;
	y=z;
	printf("%d %d \n\n",x,y);

	printf("swapping without 3rd variable - ");
	x=1;
	y=2;
	z=0;
	y,x=x,y;
	printf("%d %d",x,y);
	
	return 0;
}
*/

/*
// enter value in celcius and convert it into celcius
#include <stdio.h>
 
int main()
{
double c=0,k=0,f=0;
	printf("enter temperature in celcius - ");
	scanf("%lf",&c);

	f = (1.8*c)+32;
	k = 273.15+c;

	printf("%.2lf celcius in fahrenheit and kelvin resp. is - %.2lf and 		%.2lf",c,f,k);

	return 0;
}
*/

/*
// enter value in days and display it in years-months-days format
#include <stdio.h>

int main()
{
	//question 4 print given days in years - month - day format
int d=0;     
	printf("enter number of days to be calculated - ");
	scanf("%d",&d); // entered variable for days to be calculated. we as	sume all months as 365 days and months with 30 days

	int y,m,ed; // years , months and days left

	y = d/365;
	d = d - (365*y);
	m = d/30;
	ed = d - (30*m);

	printf("%d days are %d year(s) , %d motnh(s) , %d day(s)",d,y,m,ed);

	return 0;

}
*/
