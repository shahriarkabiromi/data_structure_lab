// write a code to find the maximum array elements

#include <stdio.h>
int main()
{
    int size;

    printf("Enter the size number of the array:\n");
    scanf("%d", &size);

    int arr[size];

    printf("Enter array elements\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {

            max = arr[i];
        }
    }

    printf("The maximum element in the array is: %d\n", max);

    return 0;
}