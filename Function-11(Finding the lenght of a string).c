#include<stdio.h>
#include<stdlib.h>

void length(char a[100]);

int main()
{
 char U_input[100];
  gets(U_input);

 length(U_input); 
return 0;
}

void length(char a[100])
{
  int len=0;
  int i;

  for(i=0;a[i]!=0;i++)
  {
     len++;
  }
  printf("%d\n",len);
}
