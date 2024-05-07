#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned short x,y;
    x=0x33FF;
     printf("before Swaping 0x%x\n",x);
    y=x;
    x&=0x00FF;
    y&=0xFF00;
    x=x<<8;
    y=y>>8;
    x=x|y;
    printf("Swap bytes 0x%x\n",x);
    return 0;
}
