#include<stdio.h>
#include<stdlib.h>

void arr_in();
void min_val();

int main()
{
  int n;
   scanf("%d",&n);
  int arr[n];

arr_in(n,arr);  
min_val(n,arr);
  
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
void min_val(int n,int our_arr[])
{
  int min=our_arr[0];
  
  int i;
   for(i=0;i<n;i++)
   {
    if(our_arr[i]<min)
    {
      min=our_arr[i];
    }
    else;
   }
   printf("%d\n",min);
}

