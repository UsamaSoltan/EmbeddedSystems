#include <stdio.h>
#include <stdlib.h>
struct student
{
    char name[20];
    unsigned int age;
    int ID;
    char number_phone[11];
};

void string_scan(char *str)
{
    int i=0;
    fflush(stdin);
    scanf("%c",&str[i]);
    for(; str[i]!='\n';)
    {
        i++;
        scanf("%c",&str[i]);
    }
    str[i]=0;
}

void string_print(char *str)
{
    int i;
//printf("f:sizeof    %d\n",sizeof(str));

//printf("f:string len %d\n",string_len(str));
    for(i=0; str[i]; i++)
    {fflush(stdin);
        printf("%c",str[i]);

    }
    printf(" ");
    str[i]=0;

}
extern int ID_student;
void student_printByRef(struct student* ps)
{printf("ID:%d",ps->ID);
  printf("  name:");
string_print(ps->name);
printf("   age:%d",ps->age);fflush(stdin);

 printf("   phone number:");
string_print(ps->number_phone);
}

void student_scanByRef(struct student* ps)
{
    printf("enter your name:");
    string_scan(ps->name);fflush(stdin);
    printf("enter your age:");
    scanf("%d",&ps->age);
    ps->ID=ID_student++;

    //scanf(" %c",&ps->ID);
    //printf("enter your Grade:");
    //scanf(" %c",&ps->grade);
 printf("enter your phone number:");
    string_scan(ps->number_phone);fflush(stdin);
 printf("your ID Number: %d",ps->ID);
 printf("\n don't forget ID numbre\n");
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
 int string_is_mirror_or_not_for_password(char*str1,char*str2)
 {
    // string_upperToLower(str1);
    // string_upperToLower(str2);
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
/*int abs(int n)
{
    if(n<0)
    {
        n=n*-1;
    }
    return n;
}*/

