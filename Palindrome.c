#include <stdio.h>

int main(void) 
{
  int n,r,sum=0,temp;
  printf("enter a number:");
  scanf("%d",&n);
temp=n;
  while(n>0)
    {
      r=n%10;
      sum=sum*10+r;
      n=n/10;
    }
  if(sum==temp)
    printf("%d is a palindrome",temp);
  else
    printf("%d is not palindrome",temp);
  return 0;
}