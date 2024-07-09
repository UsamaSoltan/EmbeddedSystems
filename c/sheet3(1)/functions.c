int number_of_index(int*arr,int size,int num)
{
    int i,index,count=0;
    for(i=0;i<size;i++)
    {
        if(arr[i]==num)
            {
               printf("index of number= %d\n",i) ;
               count++;
            }
        }
    return count;
}
