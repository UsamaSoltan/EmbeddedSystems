#include <stdio.h>
#include <stdlib.h>
void reverse_array(int*arr,int size);
void print_array(int*arr,int size);
void arrays_swap(int*arr1,int size1,int*arr2,int size2);
int count_of_the_longest_consecutive_8(int*arr,int size,int num);
int count_of_the_longest_consecutive_9(int*arr,int size);
int merging_array(int* arr1,int size1, int* arr2, int size2, int* newarr);
int removeDuplicates(int arr[], int n);
void arrar_between_two_number(int n1,int n2,int*arr);
int main()
 {
    int arr1[] = {1,1,1,1,1};
    int arr2[] = {2,2,2,2,2};
    int newarr[10]={0};
    int size = sizeof(arr1) / sizeof(arr1[0]);
   int x= merging_array(arr1,6,arr2,5,newarr);
//arrar_between_two_number(6,2,arr2);
   //int x=removeDuplicates( arr1, size);
   if(x!=-1)
   {
       print_array(newarr,10);
   }


    }

