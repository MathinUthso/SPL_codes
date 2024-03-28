#include<stdio.h>
#include<stdlib.h>

void ret_char(int a)
{
  
  printf("Value received from main: %d\n",a);
}

int main()
{   int x;
    scanf("%d",&x);
   ret_char(x);
return 0;
}
