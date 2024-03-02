//write a c program to show binary search

#include<stdio.h>
int main(){

int size,item;
printf("Enter the size of the array: \n");
scanf("%d",&size);

int i;
int arr[size];

printf("Enter the elements of array: \n");
for(int i=0;i<size;i++)
{
    scanf("%d",&arr[i]);
}

printf("Enter the item that you want to search \n");
scanf("%d",&item);

int beg=0;
int end=size-1;

while(beg<=end)
{
  int mid=(int)(beg+end)/2;

  if(arr[mid]==item)
    {
        printf("Item Found at index :%d \n",mid);
        return 0;
    }
    else if(arr[mid]<item)
    {
        beg=mid+1;
    }
    else{
        end=mid-1;
    }
}
  printf("Item not found \n");

    return 0;
}