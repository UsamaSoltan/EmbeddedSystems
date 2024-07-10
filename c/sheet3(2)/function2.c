int max,min;
int max_or_min_number_in_array(int*arr,int size,int*max,int*min)
{
int i;
*max=arr[0];
     *min=arr[0];
 for(i=1;i<size;i++)
 {

     if(*max<arr[i])
     {
         *max=arr[i];
     }
     else if(*min>arr[i])
        {
            *min=arr[i];
        }
 }
}

