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
   n++;
   arr[n];

   int number;
    printf("number:");
     scanf("%d",&number);
   int position;
    printf("position:");
     scanf("%d",&position);
   
   for(i=0;i<=n-position;i++)
   {
     arr[n-i]=arr[n-i-1];
   }
   
   arr[position]=number;

   for(i=0;i<n;i++)
   {
    printf("%d ",arr[i]);
   }

}
