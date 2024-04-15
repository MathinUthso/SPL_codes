#include<stdio.h>


void inputMatrix();
void printMatrix();
void scalarmultiply();


int main()
{
   int matrix[3][5];
   int multiple;
    
 printf("Input the Matrix:\n");
   inputMatrix(matrix);

   printf("To be multiplied by:");  
     scanf("%d",&multiple);

   printf("\n");  
   
   printMatrix(matrix);
   scalarmultiply(matrix,multiple);
}

void inputMatrix(int matrix[3][5])
{
   int i,j;
   for(i=0;i<3;i++)
   {
      for(j=0;j<5;j++)
      {
         scanf("%d",&matrix[i][j]);
         
      }
   }
  
}

void printMatrix(int arr[3][5])
{
   printf("Original:\n");
    int i,j;
    
    for(i=0;i<3;i++)
   {
      for(j=0;j<5;j++)
      { 
         printf("%d ",arr[i][j]);
         
      }
      printf("\n");
   }
}

void scalarmultiply(int arr[3][5],int n)
{
   printf("\nMultiplied by 2:\n");
   int i,j;
    for(i=0;i<3;i++)
   {
      for(j=0;j<5;j++)
      { 
         printf("%d ",arr[i][j]*n);
         
      }
      printf("\n");
   }
}
