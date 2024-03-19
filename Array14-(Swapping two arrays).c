#include<stdio.h>
int main(void)
{
    int n;
     printf("n:");
      scanf("%d",&n);

    int firstarr[n];
    
   int i;
    for(i=0;i<n;i++)
    {
        int temp;
         scanf("%d",&temp);
          firstarr[i]=temp;
    }
  

   
   
    int m;
     printf("m:");
      scanf("%d",&m);

    int notfirstarr[m];
    
    for(i=0;i<m;i++)
    {
        int temp;
         scanf("%d",&temp);
          notfirstarr[i]=temp;
    }
    
     
     int temparr[n];
     for (i=0;i<n;i++)
     {
        temparr[i]=firstarr[i];
     }
     
     firstarr[m];
    notfirstarr[n];

    for(i=0;i<m;i++)
    {   
       firstarr[i]=notfirstarr[i]; 
       
    } 
    printf("Array A:");
   for(i=0;i<m;i++)
   {
    printf("%d ",firstarr[i]);
   }

    for(i=0;i<n;i++)
    {   
       notfirstarr[i]=temparr[i]; 
    }
     
    printf("\nArray B:");
    for(i=0;i<n;i++)
   {
    printf("%d ",notfirstarr[i]);
   }
}
