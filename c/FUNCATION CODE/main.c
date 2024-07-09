#include <stdio.h>
#include <stdlib.h>
int IsPrime2(int n)
{
    int i;
    if(n<2)
    {
        return 0;
    }
    for(i=2; i<n; i++)
    {
        if(n%i==0)
        {

            return 0;
        }
    }
    return 1;

}



void generatePrime(int n)
{

}
while(1)
    {
        scanf("%d",&x);
        for(i=1;i<=x;i++)
        {
            if(IsPrime2(i))
            {
               printf("%d   ",i);
            }

        }


    }
int main()
{
    printf("Hello world!\n");
    return 0;
}
