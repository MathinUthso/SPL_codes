#include<stdio.h>
int main(void)
{
    int n;
     printf("n:");
      scanf("%d",&n);

    int arr[n];
    
   int i,j;
    for(i=0;i<n;i++)
    {
        int temp;
         scanf("%d",&temp);
          arr[i]=temp;
    }
  
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        
        if(arr[j]>arr[j+1])
        {
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;

        }

    }
}
for(i=0;i<n;i++)
{
    printf("%d ",arr[i]);
}
 
}
