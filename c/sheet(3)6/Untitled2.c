int reverse_array(int*arr ,int size)
{
    int i,j=size-1,temp;
    for(i=0;i<size/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        j--;
    }

}
void print_array(int*arr,int size)
{
    for(int i=0;i<size;i++){
        printf(" %d ",arr[i]);
    }
}
void arrays_swap(int*arr1,int size1,int*arr2,int size2)
{int i,temp;
    if(size1==size2)
    {
       for(i=0;i<size1;i++)
        {
        temp =arr1[i];
        arr1[i]=arr2[i];
        arr2[i]=temp;
       }
    }}
    int count_of_the_longest_consecutive_8(int*arr,int size,int num)
{
    int i,max=0,c=0,x;
    for(i=0;i<size+1;i++)
        {
    if(arr[i]==num)
    {
        c++;
        printf("c=%d\n",c);
    }
    else
        {
            if(c>max)
        {
            max=c;
printf("m=%d\n",max);
      c=0;
      }
    }
        }
return max;
}
int count_of_the_longest_consecutive_9(int*arr,int size)
{
    int i,max=1,c=0,x;
    for(i=1;i<size;i++)
        {
    if(arr[i]==arr[i-1])
    {
        c++;
    }
    else
        {
            if(c>max)
        {
            max=c;
            x=arr[i-1];
        }
      c=0;
      }
    }
      printf("longest number =%d\n",x);
return max+1;
 }
 int merging_array(int*arr1,int size1,int*arr2,int size2,int*newarr)
{if(size1!= size2)
{
    return -1;
}
else
{
     int i,a=0,b=0;
    for(i=0;i<size1*2;i++)
    {
        if(i%2==0)
        {
            newarr[i]=arr1[a];
            a=a+1;

        }
        else
        {
           newarr[i]=arr2[b];
            b=b+1;
        }
    }
}
}

int remove_repeated_number(int arr[], int n) {
    int j=0;
    for (int i=1;i<n;i++) {
        if (arr[i]!=arr[i-1])
         {
            arr[j+1]=arr[i];
            j++;
        }
    }

    return j+1;

}
void arrar_between_two_number(int n1,int n2,int*arr)
{
    int i;
    if(n1<n2)
    {
       for(i=n1+1;i<n2;i++)
       {
           arr[i]=i;
           printf("  %d  ",arr[i]);
       }
    }
    else
        {  for(i=n2+1;i<n1;i++)
       {
           arr[i]=i;
           printf("  %d  ",arr[i]);
       }
        }

}
