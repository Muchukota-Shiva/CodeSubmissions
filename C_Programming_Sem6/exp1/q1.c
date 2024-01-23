#include <stdio.h>

int main()
{
    int num=0; // input
    int rev=0; // reversed
    scanf("%d",&num);
    
    while(num!=0)
    {
        rev=rev*10;
        rev=rev+num%10;
        num=num/10;
    }
    
    printf("\nthe reverse of input is %d",rev);

    return 0;
}