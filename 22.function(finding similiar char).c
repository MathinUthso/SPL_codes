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
  int i,j;
   for(i=0;i<strlen(a);i++)
   {
     for(j=0;j<strlen(b);j++)
     {
        if(a[i]==b[j])
        return 1;
        else 
        return -1;
     }
   }
}
