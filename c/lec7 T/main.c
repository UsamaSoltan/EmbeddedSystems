// sultan
#include <stdio.h>
#include <stdlib.h>

int main()
{ unsigned short y, x=149;
x&=~(1<<4);
printf("%d\n",x);

for(int i=7;i>=0;i--)
{
    y=((x>>i)&1); // read bit
printf("%d",y);
}

    return 0;
}
