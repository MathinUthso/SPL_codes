#include<stdio.h>
#include<stdlib.h>

void ret_char()
{
  char a;
    scanf("%c",&a);
  printf("Value received from main: %c\n",a);
}

int main()
{   
   ret_char();
return 0;
}
