#include<stdio.h>
int main(void)
{
    int n;
     printf("n:");
      scanf("%d",&n);

    int sum=0;
    int arr[n];
    
    int i;
       for(i=0;i<n;i++)
     {
        int temp;
         scanf("%d",&temp);
        arr[i]=temp;
        if((arr[i]&1)==0)//or you can use arr[i]%2==0
        {
            sum+=arr[i];
        } 
     }
     printf("%d\n",sum);  
}
