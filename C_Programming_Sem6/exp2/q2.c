#include <stdio.h>

int main()
{
    float h,w;
    
    scanf("%f",&h);
    if(h==0.0)
    {
        printf("enter non zero positive value");
        scanf("%f",&h);
    }
    scanf("%f",&w);
    if(w==0.0)
    {
        printf("enter non zero positive value");
        scanf("%f",&w);
    }
    
    float bmi = w/h*h;
    
    if(bmi<15)
    {
        printf("starvation");
    }
    else if(bmi>15 && bmi<17.6)
    {
        printf("anorexic");
    }
    else if(bmi>17.5 && bmi<18.6 )
    {
        printf("underweight");
    }
    else if(bmi>18.5 && bmi<25)
    {
        printf("ideal");
    }
    else if(bmi>24.9 && bmi<30)
    {
        printf("overweight");
    }
    else if(bmi>29.9 && bmi<40)
    {
        printf("obese");
    }
    else
    {
        printf("morbidly obese");
    }
    
}
