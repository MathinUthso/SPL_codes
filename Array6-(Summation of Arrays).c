#include<stdio.h>
int main(void)
{
    int n;
     printf("n:");
      scanf("%d",&n);

    int firstarr[n];
    int secondarr[n];
    int sumarr[n];

    int i;
     for(i=0;i<n;i++)
     {
        int temp;
         scanf("%d",&temp);
          firstarr[i]=temp;
     }
      
      for(i=0;i<n;i++)
     {  
        int temp;
         scanf("%d",&temp);
          secondarr[i]=temp;
     }    
          
      for(i=0;i<n;i++)
      {
         sumarr[i]=firstarr[i]+secondarr[i];
      }
        
      for(i=0;i<n;i++)
     {
        printf("%d ",sumarr[i]);
     }
    
 
}
