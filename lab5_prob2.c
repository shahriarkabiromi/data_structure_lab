//write a c program to multiply two matrix
#include<stdio.h>
int main(){
    int m1,m2,n1,n2,i,j,k;
     
    printf("Enter the dimension of the matrix 1:\n");
    scanf("%d %d",&m1,&n1);
    printf("Enter the dimension of the matrix 2:\n");
    scanf("%d %d",&m2,&n2);

    if(n1!=m2)
    {
        printf("Cant mutiply these dimension of matrix");
        return 0;
    }

    int matrix1[m1][n1],matrix2[m2][n2];
    int multiply[m1][n2];
    
    printf("Enter the elements of matrix 1: \n");
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
           scanf("%d",&matrix1[m1][n1]);
        }     
    }
    
    
    printf("Enter the elements of matrix 2: \n");
    for (int i = 0; i < m2; i++)
    {
        for (int j = 0; j < n2; j++)
        {
           scanf("%d",&matrix2[m2][n2]);
        }     
    }

   for (int i = 0; i < m1; i++)
   {
    for (int j = 0; j < n2; j++)
    {
        multiply[i][j] =0;
        for (int k = 0; k < m2; k++)
        {
            multiply[i][j]+=matrix1[i][k]*matrix2[k][j];
        }
        
    }
   }
  printf("\nResultant matrix : \n");
  for (int i = 0; i < m1; i++)
  {
    for (int j = 0; j < n2; j++)
    {
        printf("%d ", multiply[i][j]);
    }
        printf("\n");
   }
   
    return 0;
}