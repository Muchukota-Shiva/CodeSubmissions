#include <stdio.h>

void Swappy(int a, int b)
{
    printf("value before swapping - %d %d\n", a,b);
    int c;
    
    c=a;
    a=b;
    b=c;
    
    printf("value after swapping  - %d %d", a,b);
}

int main()
{
    printf("enter both numbers seperated by space - ");
    int a,b;
    scanf("%d %d", &a, &b);
    Swappy(a,b);

    return 0;
}