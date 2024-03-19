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

/*Trick in this question is that 
you just cannot reverse print it 
rather you have to print from the 0 index*/
  
  int revarr[n];
   for(i=0;i<n;i++)
   {
     
        revarr[i]=arr[n-i-1];
   }

   for(i=0;i<n;i++)
    {
        printf("%d ",revarr[i]);
    }

}
