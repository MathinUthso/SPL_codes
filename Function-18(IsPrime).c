#include<stdio.h>
#include<stdlib.h>

int isPrime(int num);

int main()
{ 
int n;
 printf("Enter the num:");
  scanf("%d",&n);

if((isPrime(n))==0)
{
  printf("%d is a prime\n",n);
}
else
{
  printf("%d is not a prime\n",n);

}
  
return 0;
}

int isPrime(int num)
{
int flag=0;
 if(num==0 || num==1)
{
  flag=1;
}
int i;
for(i=2;i<num;i++)
//A certain number is achievable until halfoftheNUM*2  
{
   if(num%i==0)
   {
     flag=1;
     break;
   }
     else
   {
     flag=0;
   }
}
return flag;

}
