#include<stdio.h>
int main(void)
{
    int n;
     printf("n:");
      scanf("%d",&n);

    int arr[n];
    
    int maxdex;
    int mindex;
   
   int i,j;
    for(i=0;i<n;i++)
    {
        int temp;
         scanf("%d",&temp);
          arr[i]=temp;
    }
    
    int max=arr[0];
    int min=arr[0];
    
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            maxdex=i;
        }
        if(arr[i]<min)
        {
            min=arr[i];
            mindex=i;
        }
    }
    printf("Max:%d, Index:%d\nMin:%d, Index:%d",max,maxdex,min,mindex);

}
