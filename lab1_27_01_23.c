
//take an array from user,print their elements and sum the elements


#include <stdio.h>
int main()
{
    int size;

    printf("Enter the size number of the array:\n");
    scanf("%d", &size);

    int arr[size];
    int sum=0;
    
    printf("Enter array elements\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum+arr[i];
    }

    printf("Elements of array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
    

    printf("Sum of these array elements: %d\n",sum);
    
    return 0;
}