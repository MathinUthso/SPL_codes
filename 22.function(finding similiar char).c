#include<stdio.h>
#include<string.h>

int find_substr(char a[],char b[]);
int main()
{
   char a[100];
   char b[100];
   scanf("%s%s",a,b);

   if(find_substr(a,b)==1)
   printf("1\n");
   else 
   printf("0\n");
    return 0;
}

int find_substr(char a[],char b[])
{ 
   int count=0;
   int flag=0;
  int i;
   for(i=0;i<strlen(a)-1;i++)
   {
      if(a[i]==b[0])
      {
         int j;
          for(j=1;j<strlen(b);j++)
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
   if(count==strlen(b)-1)
    return 1;
   else 
     return -1;
   
}
