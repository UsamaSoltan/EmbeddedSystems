#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int nums ,sum=0 ;
    while(1)
    {
        for(;;)
        {
             printf("enter your number =");
        scanf("%d",&nums);
        if(nums%2==0)
            sum+=nums;
        else
        {printf("enter your number =");
            scanf("%d",&nums);
            if(nums%2==0)
               sum+=nums;
            else
                break;
        }
        }

        printf("sum of even number is = %d\n",sum);
    }
    return 0;
}
