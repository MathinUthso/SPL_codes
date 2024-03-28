#include<stdio.h>
#include<stdlib.h>

void arr_in();
void into_2();

int main()
{
  int n;
   scanf("%d",&n);
  int arr[n];

arr_in(n,arr);  
into_2(n,arr);
  
  return 0;
}

void arr_in(int n,int num[])
{
  num[n];
  int i;
   for(i=0;i<n;i++)
   {
    int temp;
    scanf("%d",&temp);
    num[i]=temp;
   }
}
void into_2(int n,int our_arr[])
{
  int i;
   for(i=0;i<n;i++)
   {
      our_arr[i]*=2;
   printf("%d ",our_arr[i]);
   }
}

