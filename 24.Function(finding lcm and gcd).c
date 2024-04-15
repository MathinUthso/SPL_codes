#include<stdio.h>

int gcd();
int lcm();

int main()
{
   int x,y;
    scanf("%d%d",&x,&y);

   printf("GCD:%d\n",gcd(x,y));
   printf("LCM:%d\n",lcm(x,y));

}

int gcd(int a,int b)
{
   if(a<b)
   { int rem;
      while(rem!=0)
      {  
         rem=b%a;
         if(rem!=0)
         {
            b=a;
            a=rem;
         }
      }
      return a;
   }
    else
    {
   { int rem;
      while(rem!=0)
      {  
         rem=a%b;
         if(rem!=0)
         {
            a=b;
            b=rem;
         }
      }
   }
   return b;
    }
   
}

int lcm(int a,int b)

{
   int product=a*b;

   int lcm=product/gcd(a,b);

   return lcm;
}

