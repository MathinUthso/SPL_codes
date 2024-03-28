#include<stdio.h>
#include<stdlib.h>

int total(int n);

int main()
{   
  int n;
  scanf("%d",&n);
 
 int x=total(n);
  printf("%d",x);

return 0;
}


int total(int n)
{  
  int arr[n];
  int sum=0;
  
  for(int i=0;i<n;i++)
  {
    int temp;
     scanf("%d",&temp);
    arr[i]=temp;
    sum+=arr[i]; 
  }
  return sum;
}
