#include<stdio.h>
int main(void)
{  int arr[3][3];
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            int temp;
            scanf("%d",&temp);
            arr[i][j]=temp;
        }
        
    
    }


   int i;
    for(i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    
    }
}
