#include<stdio.h>
#include<stdlib.h>


int GeneratePrime();
int prime();

int main(void)
{
  int num;
   scanf("%d",&num);
GeneratePrime(num);
} 

int GeneratePrime(int n)
{
  int flag=0;
  printf("Prime less than %d: ",n);
  int i,j;
   for(i=2;i<n;i++)
   { 
    for(j=2;j<i;j++)
    {
      if(i%j==0)
      {
        flag=1;
         break;
      }
      else
      {
        flag=0;
      } 
    }
    
    prime(flag,i);

   }
}

int prime(int checker,int num)
{
  (checker==0)?
  (printf("%d, ",num)):
  printf("");
}
