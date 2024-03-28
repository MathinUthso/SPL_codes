#include<stdio.h>
#include<stdlib.h>

void arr_in();
void even_element();

int main()
{
  int n;
   scanf("%d",&n);

 arr_in(n);
  
  
  return 0;
}

void arr_in(int n)
{
  int arr[n];
 
  int i;
   for(i=0;i<n;i++)
   {
    int temp;
    scanf("%d",&temp);
    arr[i]=temp;

    even_element(arr[i]);
   }
}

void even_element(int num)
{
  if((num&1)==0)//you can use % operator instead
    {
      printf("%d ",num);

    }
    else;
}
