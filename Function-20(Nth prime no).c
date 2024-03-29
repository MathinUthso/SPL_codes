#include<stdio.h>
int GenNthPrime(int n);
int main()
{
  int num;
   printf("Enter a number:");
   scanf("%d",&num);

   GenNthPrime(num);
}
int GenNthPrime(int n)
{ int prime=1,count=0,flag;
  int i;
   
   while(count!=n)
   {
    prime++;
    flag=0;
    for(i=2;i<=prime/2;i++)
   {
     if(prime%i==0)
     flag=1;
   }
   if(flag==0)
   count++;
   }
   
   printf("%dth prime:%d",n,prime);
}
