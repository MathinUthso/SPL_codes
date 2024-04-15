#include<stdio.h>
#include<string.h>

int find_substr();
int str_length();

int main()
{
   char a[100],b[100];
   scanf("%s%s",a,b);

   if(find_substr(a,b)==1)
   printf("1\n");
   else 
   printf("0\n");
}
int str_length(char str[])
{  
   int str_len;
   int i;
    for(i=0;str[i]!=0;i++)
    {
         
    }
    str_len=i;

} 

int find_substr(char a[],char b[])
{ 
   int count=0;
   int flag=0;
  int i;
   for(i=0;i<str_length(a)-1;i++)
   {
      if(a[i]==b[0])
      {
         int j;
          for(j=1;j<str_length(b);j++)
          {
             
              if(b[j]==a[i+j])
              {
                 count++;
              }
              else 
              break;    
          }
        
      }
     
   }
   if(count==str_length(b)-1)
    return 1;
   else 
     return -1;
   
}
