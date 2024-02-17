#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i=0;i<size;i++) {
        scanf("%d", &arr[i]);
    }

    int value_to_find;
    printf("Enter the value to search: ");
    scanf("%d",&value_to_find);

    for (int i=0;i<size;i++) {
        if (arr[i]==value_to_find) 
            printf("Value found at index: %d\n",i);

        else
        printf("Value not found in the array\n");
            break;
        }
    
    return 0;
}
