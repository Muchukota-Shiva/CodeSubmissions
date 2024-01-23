#include <stdio.h>

int findSmallest(int *arr, int size)
{
    int smallest=*arr; // pointer of name of array is first element.
                       // addingn numbers to it will traverse forward
    
    for(int i=0; i<size; i++)
    {
        if(*(arr+i)<smallest)
        {
            smallest=*(arr+i);
        }
    }
    
    
    return smallest;
}

int main()
{
     int size;

    printf("size of the array - ");
    scanf("%d", &size);

    int *arr = (int *)malloc(size * sizeof(int));

    printf("Enter elements for the array- \n");
    for (int i = 0; i < size; ++i) 
    {
        scanf("%d", &arr[i]);
    }

    int smallest = findSmallest(arr, size);

    printf("smallest number is: %d\n", smallest);

    return 0;
}


