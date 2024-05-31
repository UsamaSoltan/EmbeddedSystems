#include <stdio.h>
#include <stdlib.h>

int main()
{while(1)
{int terms,first_term,last_term,sum=0;
    printf("enter terms = \n");
    scanf("%d",&terms);
     printf("enter first-term = \n");
    scanf("%d",&first_term);
     printf("enter last-term = \n");
    scanf("%d",&last_term);
    sum=(terms/2)*(first_term+last_term);
    printf("the sum of items = %d\n",sum);

}

    return 0;
}
