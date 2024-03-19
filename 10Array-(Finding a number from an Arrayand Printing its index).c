#include<stdio.h>
int main(void)
{
    int n;
     printf("n:");
      scanf("%d",&n);

    int arr[n];
    int arrin[n];
    int count=0;
    
   int i,j;
    for(i=0;i<n;i++)
    {
        int temp;
         scanf("%d",&temp);
          arr[i]=temp;
    }
    int searchlight;
    //printf("Searchlight:");
     scanf("%d",&searchlight);

    for(i=0;i<n;i++)
    {
        if(arr[i]==searchlight)
        {
           arrin[count]=i;
           count++;
        }
    } 
   if(count!=0)
   {
     for(i=0;i<count;i++)
    {
       if(i!=count-1)
       {
        printf("FOUND at index position:%d,",arrin[i]);
       
       } 
       else 
       {
        printf("%d",arrin[i]);
       }
       //You can skip this if-else statement as its not manadatory to not print "," at the end.
    }
   }
   else 
   {
    printf("NOT FOUND");
   }

}
