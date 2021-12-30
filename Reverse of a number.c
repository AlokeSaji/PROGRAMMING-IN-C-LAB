#include <stdio.h>

int main(void)
{
  int n,r,sum=0,temp=n;
  printf("enter the number:");
  scanf("%d",&n);
  temp=n;
  while(n>0)
    {
      r=n%10;
      sum=sum*10+r;
      n=n/10;
    }
  printf("\n reverse of %d is %d",temp,sum);
  return 0;
}