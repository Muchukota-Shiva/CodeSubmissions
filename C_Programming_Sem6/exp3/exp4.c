#include <stdio.h>

void triCheck(int a, int b, int c)
{
    if(a+b>c && a+c>b && b+c>a)
    {
        printf("\nit is correct");

        if(a==b && b==c) // equal sides
        {
            printf("\nthe triangle is equilateral");
        }
        else if((a==b)||(a==c)||(b==c)) // any two sides are equal 
        {
            printf("\nthe triangle is isolateral");
        }
        else // none of the above means that it is scalene
        {
            printf("\nthe triangle is scalene");
        }
        
    }
    else
    {
        printf("\nit is not correct");
    }
}


int main()
{
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    
    triCheck(a,b,c);

    return 0;
}