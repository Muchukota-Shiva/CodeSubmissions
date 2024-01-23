#include <stdio.h>

int main()
{
    int num=0;
    scanf("%d",&num);
    numRev(num);

    return 0;
}

int numRev(int num)
{
    int rev=0; // reversed
    
    
    while(num!=0)
    {
        rev=rev*10;
        rev=rev+num%10;
        num=num/10;
    }
    
    printf("\nthe reverse of input is %d",rev);
}