#include<stdio.h>
#include<stdlib.h>

void num_size(int a,int b);


int main()
{   
  int x,y;
   scanf("%d%d",&x,&y);

  num_size(x,y); 
   
return 0;
}

void num_size(int a,int b)
{
  (a>b)?printf("%d is greater than %d",a,b):
  (a<b)?printf("%d is greater than %d",a,b):
  (a==b)?printf("%d is equal to %d",a,b):
  printf("%d and %d is not a valid number");
  
}
