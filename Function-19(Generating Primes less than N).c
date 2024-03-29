#include<stdio.h>
int GeneratePrime(int n);
int isPrime(int num);

int main()
{
  int num;
  printf("Enter a number:");
   scanf("%d",&num);

GeneratePrime(num);
return 0;
} 

int GeneratePrime(int n)
{
  printf("Prime numbers less than %d: ",n);
  
  int i,j;
   for(i=2;i<n;i++)
   { 
    if(isPrime(i))
    {
   printf("%d ",i);
    }
   }
   return 0;
}

int isPrime(int num)
{ 
  int i;
   for(i=2;i*i<=num;i++)
   {
    if(num%i==0)
    {
      return 0;
    }
   }
  return 1; 
  
}
