/*
question from episode 63-64 , a simple weather program

note - some fuck up due to compiler being old or something
its not allowing variable lenght arrays

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	//first initialised data for 2011-2015
	int years=12,months=5;
	float rain[5][12]=
	{
		{4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},//so on januarry 2011 january we jave 4.3 inches of rain
        {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
        {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
        {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
        {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
	};
	
	int year,month;
	float subtot,total;

	printf("Year\t\tRainfall ()inches\n");

	for(year = 0,total = 0;year < years;year++)
	{//outer loop
		for(month=0,subtot=0;month<months;month++)
		{
			subtot+=rain[year][month];
		}
		printf("%d %15.lf\n",2010+year,subtot);
		total+=subtot;
	}
	printf("\nweekly average is %lf inches\n",total/years);
	return 0;
}
