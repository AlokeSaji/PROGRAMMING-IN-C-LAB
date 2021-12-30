#include <stdio.h>
int main(void) 
{
  int n,r,c,sum=0,temp;
  printf("enter a number:");
  scanf("%d",&n);
  temp=n;
  while(n>0)
    {
      r=n%10;
      c=r*r*r;
      sum=sum+c;
      n=n/10;
    } 
  if(sum==temp)
    printf(" %d is Armstrong",temp);
  else
printf("%d is not Armstrong",temp);
       return 0;
  }