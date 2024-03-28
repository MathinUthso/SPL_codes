#include<stdio.h>
#include<stdlib.h>

void num_type(int a)
{
  (a<0)?(printf("Negative\n")):
  (a==0)?(printf("Zero\n")):
  printf("Positive\n");
//I used ternary operator
//you can replace it with if-else ladder
}

int main()
{   
  int x;
   scanf("%d",&x);

  num_type(x); 
   
return 0;
}
