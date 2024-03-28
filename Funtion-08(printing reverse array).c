#include<stdio.h>
#include<stdlib.h>

void reverse(int n)
{ int arr[n];
  for(int i=0;i<n;i++)
  {
    int temp;
     scanf("%d",&temp);
    arr[i]=temp;
  }
  for(int i=0;i<n/2;i++)
  {
    int temp=arr[i];
     arr[i]=arr[n-i-1];
     arr[n-i-1]=temp;
     
  }
  for(int i=0;i<n;i++)
  {
    printf("%d ",arr[i]);
  }
}
//or you just can use a while(n--) to print em in the reverse order

int main()
{   
  int n;
  scanf("%d",&n);
 
 reverse (n);



return 0;
}


