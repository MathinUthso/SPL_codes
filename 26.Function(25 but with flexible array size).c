#include<stdio.h>


void inputMatrix();
void printMatrix();
void scalarmultiply();


int main()
{
   int m,n;
   printf("Size of array(m,n):");
    scanf("%d%d",&m,&n);
   printf("\n"); 

   int matrix[m][n];
   int multiple;
    
 printf("Input the Matrix:\n");
   inputMatrix(m,n,matrix);

   printf("To be multiplied by:");  
     scanf("%d",&multiple);

   printf("\n");  
   
   printMatrix(m,n,matrix);
   scalarmultiply(m,n,matrix,multiple);
}

void inputMatrix(int m,int n,int matrix[m][n])
{
   int i,j;
   for(i=0;i<m;i++)
   {
      for(j=0;j<n;j++)
      {
         scanf("%d",&matrix[i][j]);
         
      }
   }
  
}

void printMatrix(int m,int n,int arr[m][n])
{
   printf("Original:\n");
    int i,j;
    
    for(i=0;i<m;i++)
   {
      for(j=0;j<n;j++)
      { 
         printf("%d ",arr[i][j]);
         
      }
      printf("\n");
   }
}

void scalarmultiply(int p,int q,int arr[p][q],int n)
{
   printf("\nMultiplied by 2:\n");
   int i,j;
    for(i=0;i<p;i++)
   {
      for(j=0;j<q;j++)
      { 
         printf("%d ",arr[i][j]*n);
         
      }
      printf("\n");
   }
}
