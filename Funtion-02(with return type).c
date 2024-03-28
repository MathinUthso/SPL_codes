#include<stdio.h>
#include<stdlib.h>

char ret_char()
{
  char a;
    scanf("%c",&a);
  printf("Value received from main: %c\n",a);
return a;
}

int main()
{   
   char x=ret_char();
   printf("Valur received from main: %c",x);
return 0;
}
