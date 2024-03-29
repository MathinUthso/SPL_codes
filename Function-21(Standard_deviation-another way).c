#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void Takeinput();
int CalcMean(int arr[],int n);
void Calc_Std_deviation(int arr[],int n);

int main()
{ 
  Takeinput();
  
return 0;
}
void Calc_Std_deviation(int arr[],int n)
{  
  int distance_sum=0;
  
int mean=CalcMean(arr,n);
  int i;
   for(i=0;i<n;i++)
   {
      distance_sum+=pow((abs(mean-arr[i])),2);
   }

   double div_mean=(double)distance_sum/n;
  double div=sqrt(div_mean);
  printf("%.2lf\n",div);
}

int CalcMean(int arr[],int n)
{
  int sum=0;
  arr[n];
   for(int i=0;i<n;i++)
   {
    sum+=arr[i];
   }
   int mean=sum/n;
   return mean;
}
void Takeinput()
{ int n;
 printf("size:");
 scanf("%d",&n);
 int arr[n];
  printf("Enter Array elements:");
  
  for(int i=0;i<n;i++)
  {
    int temp;
    scanf("%d",&temp);
    arr[i]=temp;
  }
  Calc_Std_deviation(arr,n);
  
}
