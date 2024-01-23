#include <stdio.h>

void Fibo(int n)
{
    int i=0, t1=0, t2=1;
    
    printf("the series is - 0 1 ");
    
    int nxtTerm=t1+t2;
    
    for (i = 3; i <= n; ++i) {
    printf("%d ", nxtTerm);
    t1 = t2;
    t2 = nxtTerm;
    nxtTerm = t1 + t2;
  }
    
}

int main()
{
    printf("enter limit - ");
    int n;
    scanf("%d", &n);
    Fibo(n);

    return 0;
}
