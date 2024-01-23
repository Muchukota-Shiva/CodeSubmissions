#include <stdio.h>

int main()
{
    int num=0; // input the 5 dig num 
    
    scanf("%d",&num);
    
    numSum(num);

    return 0;
}

void numSum(int num)
{
    int s=0; // sum
    while(num!=0)
    {
        s+=num%10;
        num=num/10;
    }
    
    printf("\nsum of digits of input is %d",s);
}