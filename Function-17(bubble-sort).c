#include<stdio.h>
#include<stdlib.h>

void arr_in();
void sort();

int main()
{
  int n;
   scanf("%d",&n);
  int arr[n];

arr_in(n,arr);  
sort(n,arr);
  
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
void sort(int n,int our_arr[])
{ 
  int min=our_arr[0];
  int i,j;
   for(i=0;i<n;i++)
   {
    for(j=0;j<n;j++)
    {
      if (our_arr[j]>our_arr[j+1])
     {
     int temp=our_arr[j];
     our_arr[j]=our_arr[j+1];
     our_arr[j+1]=temp;
     }
     else;
    }
     
   }
   for(i=0;i<n;i++)
   {
    printf("%d ",our_arr[i]);
   }
}

