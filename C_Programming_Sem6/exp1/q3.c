#include <stdio.h>

int main()
{
    int num=0; // input money
    scanf("%d",&num);
    int notes[7]={0,0,0,0,0,0,0}; // corresponding to rupees 1,2,5,10,20,50,100
    char *denot[7]={"1  ","2  ","5  ","10 ","20 ","50 ","100"};
    
    if(num>100)
    {
        notes[6]=num/100;
        num%=100;
    }
    if(num>50)
    {
        notes[5]=num/50;
        num%=50;
    }
    if(num>20)
    {
        notes[4]=num/20;
        num%=20;
    }
    if(num>10)
    {
        notes[3]=num/10;
        num%=10;
    }
    if(num>=5)
    {
        notes[2]=num/5;
        num%=5;
    }
    if(num>=2)
    {
        notes[1]=num/2;
        num%=2;
    }
    if(num>=1)
    {
        notes[0]=1;
        num%=1;
    }
    
    
    printf("\n\n");
    for(int i=0; i<7; i++)
    {
        printf("%s --- %d\n",denot[i],notes[i]);
    }
    

    return 0;
}
