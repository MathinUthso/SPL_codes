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
  int a;

  int sum=0;
  while (n--)
  {
    scanf("%d",&a);
     
     sum+=a;
  }
  return sum;
}
