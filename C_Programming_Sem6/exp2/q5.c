#include <stdio.h>

int main()
{
    int x1,x2,y1,y2,z1,z2;
    printf("enter rectangle 1 - ");
    scanf("%d",&x1);
    scanf("%d",&x2); // rectangle 1
    printf("\nenter rectangle 2 - ");
    scanf("%d",&y1);
    scanf("%d",&y2); // rectangle 2 
    printf("\nenter rectangle 3 - ");
    scanf("%d",&z1);
    scanf("%d",&z2); // rectangle 3 

    
    2*(x1+x2) > 2*(y1+y2) ? 
                            (2*(x1+x2)>2*(z1+z2) ? printf("rectangle 1 is largest") : printf("rectangle 3 is largest")) : 
                            (2*(y1+y2)>2*(z1+z2) ? printf("rectangle 2 is largest") : printf("rectangle 3 is largest"));                 

    return 0;
}