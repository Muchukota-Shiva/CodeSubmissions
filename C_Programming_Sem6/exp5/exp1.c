#include <stdio.h>

int main() {
    int n;
    printf("enter matrix size - ");
    scanf("%d",&n);
    
    int a[n][n];
    
    printf("enter elements for matrix - ");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\noriginal matrix is\n");
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\nthe transpose for the matrix is\n");
    
    int b[n][n]; // to store the transpose
    int flag=0; // to see if it is symmetrical or not
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            b[j][i] = a[i][j];
        }
    }
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ",b[i][j]);
            if(a[i][j]!=b[i][j])
            {
                flag=1; // not symmetrical
            }
        }
        printf("\n");
    }
    
    if(flag==1)
    {
        printf("\n not symmetrical");
    }
    else
    {
        printf("\n is symmetrical");
    }

    return 0;
}
