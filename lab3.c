#include <stdio.h>
int main()
{
    
    int arr[100],position,i,n,newindex;

    printf("Enter the number of element:\n");
    scanf("%d",&n);
    
    printf("Enter the elements of the array:\n");
    for ( i = 0; i <n; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the postion from where you want to delete:\n");
    scanf("%d",&position);

    for (i = position - 1; i < n-1; i++)
        arr[i]=arr[i+1];
    n--;
    printf("After deletation the elements are:\n");
    for ( i = 0; i <n; i++)
    
        printf("%d\n",arr[i]);


    return 0;
}
