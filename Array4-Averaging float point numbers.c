#include<stdio.h>
int main(void)
{
    int n;
     printf("n:");
      scanf("%d",&n);

    double sum=0.00;
    double arr[n];
    
    int i;
       for(i=0;i<n;i++)
     {
        double temp;
         scanf("%lf",&temp);
        arr[i]=temp;
        sum+=arr[i];
     }
     printf("%.2lf\n",sum/(double)n); 
//Donot worry the output given in the problemsheet is wrong 
}
