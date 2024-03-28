#include<stdio.h>
#include<stdlib.h>

void ret_char(char a)
{
  
  printf("Value received from main: %c\n",a);
}

int main()
{   char x;
    scanf("%c",&x);
   ret_char(x);
return 0;
}
