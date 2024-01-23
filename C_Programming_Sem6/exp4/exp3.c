#include <stdio.h>

void prime(int n)
{
    int a;
    for(a=2;a<=n;a++)
    {
        if(n%a==0) // if perfectly divisible
        {
            printf("%d, ",a);
            n = n/a; // now that it has been divided reduce its value
            a--; // check if same number would divide it again or not
        }
    }
}

int main()
{
    printf("enter number - ");
    int n;
    scanf("%d",&n);
    prime(n);
    
    return 0;
}