#include <stdio.h>
#include <stdlib.h>
void sum(int *arr,int size)
{
    int sum=0;
    for(int i=0;i<size;i++){
      sum=  arr[i]+sum;

    }
     printf("sum= %d",sum);

}
int main()
{
   int arr[5]={1,5,8,100,125};
   sum(arr,5);

    return 0;
}
