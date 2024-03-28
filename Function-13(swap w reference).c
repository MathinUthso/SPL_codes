#include<stdio.h>
#include<stdlib.h>

void swap_value(int* a,int* b);

int main()
{
  int first_num,second_num;
  scanf("%d%d",&first_num,&second_num);
 
  swap_value(&first_num,&second_num);
 printf("Value in main:%d %d\n",first_num,second_num);

return 0;  
}

void swap_value(int* a,int* b)
{
   int temp;
    temp=*a;
    *a=*b;
    *b =temp;
printf("Value in function:%d %d\n",*a,*b);
}
