#include<stdio.h>
#include<stdlib.h>

void factorial(int n)
{ 
  int fact=1;

  while(n>0)
  {
     fact=fact*n;
     n--;
  }
  printf("%d\n ",fact);
}

int main()
{   
  int n;
  scanf("%d",&n);
 
 factorial(n);

return 0;
}


