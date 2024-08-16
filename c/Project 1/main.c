#include <stdio.h>
#include <stdlib.h>
#include "file1.h"
#define MAX_STUDENTS 1000
#define s school
struct student
{
    char name[20];
    int age;
    // char ID[8];
    char grade;
};
char id;//id=--i;
int i;
char x;
int num_students ;
struct student **school;//struct student *school[&s1,&s2,&,&,&]
int main()
{
    while (1)
    {
        int choice;
        printf("Please select number of Operation:\n");
        printf("1-add student\n");
        printf("2-edit student\n");
        printf("3-print information of student\n");
        printf("4-remove student\n");
        printf("5-Print all data of student\n");
        printf("6-exit\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1: // add student
            if (num_students >= MAX_STUDENTS)
            {
                printf("Maximum number of students reached.\n");
                break;
            }

            school = (struct student**)realloc(school, (num_students + 1) * sizeof(struct student*));
            if (school == NULL)
            {
                perror("Failed to allocate memory");
                exit(1);
            }
            school[num_students]=(struct student*)malloc(sizeof(struct student));
            student_scanByRef(school[num_students]);
            num_students++;
            break;

        case 2: // edit student
        {
            char num;
            printf("Please select number of Operation:\n");
            printf("1-with ID\n");
            printf("2-with NAME\n");
            scanf("%d",&num);
            switch(num)
            {
            case 1://1-with ID

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
                    string_scan((s[id-1]->name));
                    // school[id-1]->name[0]='a';
                    break;

                case 2:
                    printf("enter new age:");
                    scanf("%d",&s[id-1]->age);
                    break;


                case 3:
                    fflush(stdin);
                    printf("enter new grade:");
                    scanf("%c",&s[id-1]->grade);
                    break;


                default:
                    printf("selection Invalid \n");
                    break;

                }
                break;
            case 2://2-with NAME
                char str[20];
                printf("please enter your name:");
                string_scan(str);
                int falg=0;
                for(int i=0; i<num_students; i++)
                {
                    if(string_is_mirror_or_not(s[i]->name,str)==1)
                    {
                        falg=1;
                        printf("Please select number of Operation:\n");
                        printf("1-edit name\n");
                        printf("2-edit age\n");
                        printf("3-edit grate\n");
                        scanf("%d",&x);
                        switch(x)
                        {
                        case 1:
                            fflush(stdin);
                            printf("enter new name:");
                            string_scan(school[i]->name);

                            break;

                        case 2:
                            printf("enter new age:");
                            scanf("%d",&school[i]->age);
                            fflush(stdin);
                            break;


                        case 3:
                            fflush(stdin);
                            printf("enter new grade:");
                            scanf("%c",&school[i]->grade);

                            break;


                        default:
                            printf("Invalid selection\n");
                            break;
                        }
                    }
                    else
                    {
                        i++;
                    }


                }
                if(falg==0)
                {
                    printf("this student is NOT found\n");

                }
                break;
            default:
                printf("Invalid selection\n");
                break;
            }
        }


        break;
        case 3: // print student information

            printf("Please select number of Operation:\n");
            printf("1-with ID\n");
            printf("2-with NAME\n");
            scanf("%d",&x);
            switch(x)
            {
            case 1://1-with ID
            {

                printf("please enter ID number: ");
                scanf("%d",&id);
                //student_printByRef(&school[id-1]);
                printf("name:%s",school[id-1]->name);
                fflush(stdin);
                printf("  age: %d",school[id-1]->age);
                fflush(stdin);
                printf("  grade: %c\n",school[id-1]->grade);
                fflush(stdin);
                printf("\n\n\n");
                break;
            }
            case 2://2-with NAME
            {
                char str[20];
                printf("please enter your name:");
                string_scan(str);
                int falg1=0;
                while(i<num_students)
                {

                    if(string_is_mirror_or_not((school[i]->name),str)==1)
                    {
                        id=++i;
                        falg1=1;
                        printf("\n\n");
                        printf("this student is found\n");
                        printf("name:%s",school[id-1]->name);
                        fflush(stdin);
                        printf("  age: %d",school[id-1]->age);
                        fflush(stdin);
                        printf("  grade: %c\n",school[id-1]->grade);
                        fflush(stdin);
                        printf("\n\n\n");
                        break;
                    }
                    else
                    {
                        i++;
                    }
                }
                if( falg1==0)
                {
                    printf("this student is NOT found\n");
                }
                break;
            }
            default:
            {
                printf("Invalid selection\n");
                break;
            }
            }
            break;
        case 4: // remove student
            printf("Please select number of Operation:\n");
            printf("1 - Remove with ID\n");
            printf("2 - Remove with NAME\n");
            scanf("%d", &x);
            switch (x)
            {
            case 1: // 1 - Remove by ID
            {
                printf("Please enter ID number: ");
                scanf("%d", &id);

                for (i = 0; i < num_students; i++)
                {
                    if (i-1 == id)
                    {
                        free(school[i]);
                        for (int j = i; j < num_students - 1; j++)
                        {
                            school[j] = school[j + 1];
                        }
                        num_students--;
                        school = (struct student**)realloc(school, (num_students - 1) * sizeof(struct student*));
                        printf("Student with ID %d removed.\n", id);
                        break;
                    }
                }
                break;
            }
            case 2: // 2 - Remove by NAME
            {
                char str[20];
                printf("Please enter the name: ");
                string_scan(str);
                int falg2=0;
                for (i = 0; i < num_students; i++)
                {

                    if (string_is_mirror_or_not(school[i]->name, str) == 1)
                    {
                        falg2=1;
                        free(school[i]);
                        for (int j = i; j < num_students - 1; j++)
                        {
                            school[j] = school[j + 1];
                        }
                        school = (struct student**)realloc(school, (num_students - 1) * sizeof(struct student*));
                        num_students--;
                        printf("Student with name %s removed.\n", str);
                        break;
                    }
                }
                if(falg2==0)
                {
                    printf("this student is NOT found\n");
                }
                break;
            }
            default:
                printf("Invalid selection\n");
                break;
            }
            break;

        case 5:// Print all data of student
            for(i=0; i<num_students; i++)
            {
                printf("name:%s",school[i]->name);
                fflush(stdin);
                printf("  age: %d",school[i]->age);
                fflush(stdin);
                printf("  grade: %c\n",school[i]->grade);
            }
            break;
        case 6:
            return 0;
        default:
            printf("Invalid choice.\n");
        }
        printf("\n\n\n");
    }

    return 0;
}
