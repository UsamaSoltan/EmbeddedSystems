#include <stdio.h>
#include <stdlib.h>
int max;
int f1(int a)
{static int max;
int flag=0;
if(flag==0)
{
    max=a;
    flag=1;
}
    if(a>max)
    {
        max=a;
    }
    return max;
}
int main()
{f1(5);
f1(10);
f1(3);
int y=f1(3);
printf("y=%d",y);

    return 0;
}
