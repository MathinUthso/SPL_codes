#include<stdio.h>
#include<stdlib.h>

int even_odd(int a)
{
  

  if((a&1)==0)
  {
    printf("Even\n");

  }
  else 
  printf("Odd\n");

return 0;
}

int main()
{   
  int x;
  scanf("%d",&x);
  even_odd(x); 
   
return 0;
}
