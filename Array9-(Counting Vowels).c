#include<stdio.h>
int main(void)
{
    int n;
     printf("n:");
      scanf("%d",&n);

    char arr[n];
    int count=0;
    
   int i,j;
    for(i=0;i<n;i++)
    {
        char temp;
         scanf("%c",&temp);
          arr[i]=temp;
    }
   char vowel[10]={'a','e','i','o','u','A','E','I','O','U'};
   //We could have just taken only those Capital letters too.
   for(i=0;i<n;i++)
   {
    for(j=0;j<10;j++)
    {
        if(arr[i]==vowel[j])
        {
            count++;
        }
    }
   }
   printf("Count: %d",count);
}
