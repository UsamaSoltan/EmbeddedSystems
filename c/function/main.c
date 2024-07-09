#include <stdio.h>
#include <stdlib.h>
int pow(int n,int exp)
{
  int r=1;
  for(int i=1;i<=exp;i++)
  {
    r=r*n;
  }
  return r;
}
int main()
{int x,y,r=1;
  printf("enter your number ");
  scanf("%d",&x);
   printf("enter your number power");
  scanf("%d",&y);
  r= pow(x,y);
  printf("%d",r);
    return 0;
}
