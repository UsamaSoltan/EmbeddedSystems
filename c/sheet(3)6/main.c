#include <stdio.h>
#include <stdlib.h>
#include"student.h"
int number_of_index(int*arr,int size,int num)
{
    int i,count=0;
    for(i=0;i<size;i++)
    {
    if(arr[i]==num)
    {
     printf("index of number= %d\n",i) ;
     count++;
    }
    }
    if(count==0)
    {
    return -1;
    }
    else
    return count;
}
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
int is_power_of_3(int n)
{int i;
    if(n<=0)
    {
        return 1;
    }
    else
    {
    for(i=0;n%3==0;i++)
    n/=3;
    }
    if(n==1)
    return 0;
    else
    return 1;
    }
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
 int most_repeat_number2(int*arr,int size)
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
 void swap_pointers(int **px,int **py)
 {
     int *temp;
     temp=*px;
     *px=*py;
     *py=temp;
 }
 int size_of_string(char*str)
 {
     int i,size=0;
     for(i=0;str[i];i++)
     {
         if(str[i]!=0)
         {
             size++;

         }

     }

     return size+1;
 }
void string_print(char *str)
{
    int i;
//printf("f:sizeof    %d\n",sizeof(str));

//printf("f:string len %d\n",string_len(str));
    for(i=0; str[i]; i++)
    {
        printf("%c",str[i]);

    }
    printf(" ");

}

 void reverse_string(char*str,char*new_str)
 {
     int i,j,size=size_of_string(str),x=size -1;
     for(i=0;str[i];i++)
     {
      new_str[x-1-i]  = str[i];
     }
string_print(new_str);
 }
 void string_upperToLower(char*str)
{
    int i;
    for(i=0; str[i]; i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
        {
            str[i]=str[i]-'A'+'a';
        }
    }

}
 int string_is_mirror_or_not(char*str1,char*str2)
 {
     string_upperToLower(str1);
     string_upperToLower(str2);
  if(size_of_string(str1)<size_of_string(str2)||size_of_string(str1)>size_of_string(str2))
  {
      return -1;
  }
  else
  {
      for(int i=0;i<size_of_string(str1);i++)
      {
          if(str1[i]!=str2[i])
          {
              return -1;
          }
          else
            return 1;
      }
  }
 }
 void swap_string(char*str1,char*str2,int x)
{
    int i,y,size=size_of_string(str2);
    int*temp;
    for(i=0;i<size;i++,x++)
    {
        temp=str1[x];
     str1[x]=str2[i];
     str2[i]=temp;

    }string_print(str1);

    str2[i]=0;
   //str1[i]=0;
   //  string_print(str2);
}
void pointer_print_of_array(char**str,int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        string_print(str[i]);
    }
}
    void string_replace(char*Main_string,char*find,char*replace)
    {
      char str1[100] = "";

        int x, size=size_of_string(Main_string);

         for(int y=0, i=0;i<size;i++,y++)
        {
string_print(Main_string);
                //printf("%C",Main_string[i]);
            if(Main_string[i]==' ')
            {string_print(Main_string);
                str1[y]=NULL;

               y=-1;
            //string_print(str1);
                //printf("%C",Main_string[i]);
//printf("%d",string_is_mirror_or_not(str1,find));
string_print(Main_string);
                if (string_is_mirror_or_not(str1,find)==1)
                {string_print(Main_string);
  printf("\n%d  ",i);
x=i+1-size_of_string(find);
              swap_string(str1,replace,x);
string_print(Main_string);
                }
                else{

//printf("replace\n");

            }}

            else
            {
               str1[y]=Main_string[i];
               // printf("\n%d  ", y);
               //
string_print(Main_string);
            }

        }
string_print(Main_string);
    }
    int clear_bit(int num, int pos) {
    int mask = ~(1 << pos);
    return num & mask;
}
int count_ones(unsigned int num) {
    int count = 0;

    while (num != 0) {
        count += num & 1;
        num >>= 1;
    }

    return count;
}

void reverse_array(char*str)
{
    int i,j=size_of_string(str)-1-1,temp;
    for(i=0;i<size_of_string(str)/2;i++)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        j--;
    }
string_print(str);
}
int main()
{int X;
    char*Main_string[]={"I", "work" ,"as" ,"an" ,"embedded" ,"software", "engineer", "for" ,"3" "years"};
     char find[]={"worK"};
char*Main_string2[5]=NULL;
     //char replace[]={"oop"};
X=size_of_string(Main_string);
pointer_print_of_array(Main_string,X);

}

