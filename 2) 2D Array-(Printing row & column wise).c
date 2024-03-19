#include<stdio.h>
int main(void)
{   int m,n;
     printf("(m,n):");
      scanf("%d%d",&m,&n);

      int arr[m][n];
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            int temp;
            scanf("%d",&temp);
            arr[i][j]=temp;
        }
        
     
    }


   int i;
   printf("Row-wise:");
    for(i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        
    
    }
    printf("Column-wise:");
     for(i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",arr[j][i]);
        }
        
    
    }
}

