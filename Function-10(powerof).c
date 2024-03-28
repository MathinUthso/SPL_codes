#include<stdio.h>
#include<stdlib.h>

void powerof(int a,int b);


int main()
{ 
  int x,y;
  scanf("%d%d",&x,&y);

  powerof(x,y);
}

void powerof(int a,int b)
{
  int temp=b;
  int power=1;

  while(b--)
  {
    power*=a;
  }
  printf("%d to the power of %d is %d\n",a,temp,power);
}
