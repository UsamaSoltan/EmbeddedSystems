int most_repeat_number(int*arr,int size)
{
    int i,c=0, max_count,most_frequent=arr[0];
    for(i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
          if(arr[i]==arr[j])
            c++;

        }
         if (c > max_count) {
      max_count = c;
      most_frequent = arr[i];
    }
    }return most_frequent;
}
