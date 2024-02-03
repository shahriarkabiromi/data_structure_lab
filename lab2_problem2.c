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

    int maximum1 = arr[0];
    int maximum2 = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > maximum1)
        {
            maximum2=maximum1;
            maximum1 = arr[i];
        }
        else if(arr[i]>maximum2 && arr[i]!=maximum1)
        {
            maximum2=arr[i];
        }
    }

    printf("The second maximum element in the array is: %d\n", maximum2);

    return 0;
}