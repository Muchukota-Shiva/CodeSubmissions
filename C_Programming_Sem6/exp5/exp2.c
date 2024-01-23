// i sat and revised pointers for this hope it works
// attempt counter - 6
// finally hogaya T_T

#include <stdio.h>
#include <stdlib.h>


void appendArrays(int *arr1, int *arr2, int size1, int size2) {
    for (int i = 0; i < size1; ++i) {
        // this is where size 1 + size 2 comes into play
        arr2[size2 + i] = arr1[i];
    }
}


void mergeAndSortArrays(int *arr1, int *arr2, int size1, int size2) {
    // Allocate memory
    // this will have sorted items
    int *mergedArray = (int *)malloc((size1 + size2) * sizeof(int));

    // Copy 
    for (int i = 0; i < size1; ++i) {
        mergedArray[i] = arr1[i];
    }

    // Copy to second
    for (int i = 0; i < size2; ++i) {
        mergedArray[size1 + i] = arr2[i];
    }

    // Sort the merged array
    for (int i = 0; i < size1 + size2 - 1; ++i) {
        for (int j = 0; j < size1 + size2 - i - 1; ++j) {
            if (mergedArray[j] > mergedArray[j + 1]) {
                // Swap elements if they are in the wrong order
                int temp = mergedArray[j];
                mergedArray[j] = mergedArray[j + 1];
                mergedArray[j + 1] = temp;
            }
        }
    }

    
    printf("Merged and sorted array:\n");
    for (int i = 0; i < size1 + size2; ++i) {
        printf("%d ", mergedArray[i]);
    }
    printf("\n");

    
    free(mergedArray);
}

int main() {
    int size1, size2;

    
    printf("size of the first array: ");
    scanf("%d", &size1);

    
    printf("size of the second array: ");
    scanf("%d", &size2);

    
    int *arr1 = (int *)malloc(size1 * sizeof(int));
    int *arr2 = (int *)malloc((size1 + size2) * sizeof(int));
    
    // why size 1 + size 2 ? 
    // so that i can fit elements of 1 and 2 after swap

    
    printf("elements for the first array:\n");
    for (int i = 0; i < size1; ++i) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    
    printf("elements for the second array:\n");
    for (int i = 0; i < size2; ++i) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    
    appendArrays(arr1, arr2, size1, size2);

   
    printf("added the first array to the end of the second one:\n");
    for (int i = 0; i < size1 + size2; ++i) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    
    appendArrays(arr2, arr1, size2, size1);

    
    printf("added the second array to the end of the first one:\n");
    for (int i = 0; i < size1 + size2; ++i) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    
    mergeAndSortArrays(arr1, arr2, size1, size2);


    return 0;
}
