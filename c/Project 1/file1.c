#include <stdio.h>
#include <stdlib.h>
struct student
{
    char name[20];
    int age;
    //char ID[8];
    char grade;
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
    printf("\n");
    str[i]=0;

}

void student_printByRef(struct student* ps)
{
  printf("name:");
string_print(ps->name);
printf("  age:",ps->age);
printf("   grade:%c",(*ps).grade);
fflush(stdin);

  //printf("ID:");

  // printf("ID:%s\n",(*ps).ID);
//string_print((*ps).ID);


}
void student_scanByRef(struct student* ps)
{

    printf("enter your name:");
    string_scan(ps->name);fflush(stdin);
    printf("enter your age:");
    scanf("%d",&ps->age);

   // printf("enter your ID:");
    //scanf(" %c",&ps->ID);

    printf("enter your Grade:");
    scanf(" %c",&ps->grade);


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
 extern int num_students ;
 extern struct student **school;
void edit_data(char num)
{

                printf("Please select number of Operation:\n");
                printf("1-with ID\n");
                 printf("2-with NAME\n");
                 scanf("%d",&num);
                 switch(num)
                 {
                    case 1://1-with ID
                  char id;
                printf("please enter ID number: ");
                scanf("%d",&id);
              //student_printByRef(&school[id-1]);
              char x;
              printf("Please select number of Operation:\n");
              printf("1-edit name\n");
              printf("2-edit age\n");
             printf("3-edit grate\n");
              scanf("%d",&x);
              switch(x)
              {
                 case 1:
                      //free(school[id-1].name);
                          printf("enter new name:");
                         // scanf("%s",&school[id-1].name);
                            string_scan(&(school[id-1]->name));
                          // school[id-1]->name[0]='a';
                          break;

             case 2:
            printf("enter new age:");
                 scanf("%d",&school[id-1]->age);break;


             case 3:
                 printf("enter new grade:");
                     scanf("%c",&school[id-1]->grade);break;


            default:
                             printf("selection Invalid \n");
                             break;

              }
              break;
                case 2://2-with NAME
                    char str[20];
                    printf("please enter your name:");
                    string_scan(str);
                    for(int i=0;i<num_students;i++)
                    {
                        if(string_is_mirror_or_not(school[i]->name,str)==1)
                        {
                           char x;
              printf("Please select number of Operation:\n");
              printf("1-edit name\n");
              printf("2-edit age\n");
              printf("3-edit grate\n");
              scanf("%d",&x);
              switch(x)
              {
                case 1:
                          printf("enter new name:");
                         string_scan(school[id-1]->name);
                          fflush(stdin);
                          break;

             case 2:
            printf("enter new age:");
                 scanf("%d",&school[id-1]->age);
                 fflush(stdin);
                 break;


             case 3:
                 printf("enter new grade:");
                     scanf("%c",&school[id-1]->grade);
                     fflush(stdin);
                     break;


            default:
                             printf("Invalid selection\n");
                             break;
              }
                 }
                   else
                        {
                            printf("this student is not found\n");
                            break;
                        }
                        break;
                 default:
                             printf("Invalid selection\n");
                             break;

}}}

