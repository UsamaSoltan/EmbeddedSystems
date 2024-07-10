#include <stdio.h>
#include <stdlib.h>
int max_or_min_number_in_array(int*arr,int size,int*max,int*min);

extern max,min;
int main()
{int array[10]={1,2,8,6,0,9,5,9,4,10};
 max_or_min_number_in_array(array,10,&max,&min);

    printf("max=%d\n",max);
    printf("min=%d",min);
    return 0;
}
