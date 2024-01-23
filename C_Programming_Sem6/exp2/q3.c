#include <stdio.h>

int main()
{
    int x1,x2,y1,y2,x3,y3;
    scanf("%d",&x1);
    scanf("%d",&x2);
    scanf("%d",&y1);
    scanf("%d",&y2);
    scanf("%d",&x3);
    scanf("%d",&y3);
    
    
    
    if(0.5 * (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2))==0)
    {
        printf("they are collinear");
    }
    else
    {
        printf("they are not collinear");
    }
    
    // formular for triangle area 0.5 * [x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)]

    return 0;
}