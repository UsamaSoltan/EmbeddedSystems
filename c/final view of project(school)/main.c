#include <stdio.h>
#include <stdlib.h>
#include "File.h"
#define MAX_STUDENTS 1000
#define s school
#define MAX_ATTEMPTS 2
struct student
{
    char name[20];
    unsigned int age;
    unsigned int ID ;
    char number_phone[11];
};
int ID_student=1000;//start id
unsigned int id;//id=--i;
int i;
char x;
char password[]= {"password123"};
int num_students ;
struct student **s;//struct student *school[&s1,&s2,&,&,&]
int main()
{
    char pass[20];
    int attempts = 0;
    int is_correct = 0;
    do
    {
        printf("Enter password to access the system: ");
        scanf("%s", pass);
        if (string_is_mirror_or_not_for_password(pass,password)==1)
        {
            is_correct = 1;
            break;
        }
        else
        {
            attempts++;
            if (attempts < MAX_ATTEMPTS)
            {
                printf("Incorrect password. Try again.\n");
            }
        }
    }
    while (attempts < MAX_ATTEMPTS);

    if (is_correct==0)
    {
        printf("error in system\n");
        return 1;
    }
    while (1)
    {
        int choice;
        printf("Please select number of Operation From 1 To 6:\n\n");
        printf("1-add student to the system\n\n");
        printf("2-edit student to the system\n\n");
        printf("3-print information of student\n\n");
        printf("4-remove student from the system\n\n");
        printf("5-Print all data of student\n\n");
        printf("6-exit\n\n");
        printf("Select number of Operation:");
        scanf("%d", &choice);
        printf("\n");
        switch (choice)
        {
        case 1: // add student
            if (num_students >= MAX_STUDENTS)
            {
                printf("Maximum number of students reached.\n");
                printf("-------------------------------------------------------------------------------");
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
            printf("-------------------------------------------------------------------------------");
            printf("\n");
            break;

        case 2: // edit student
        {
            char num;
            printf("Please select number of Operation:\n");
            printf("1-with ID\n");
            printf("2-with NAME\n");
            printf("select number of Operation: ");
            scanf("%d",&num);
            switch(num)
            {
            case 1://1-with ID
                printf("please enter ID number: ");
                scanf("%d",&id);
                for(i=0; i<num_students; i++)
                {
                    if (school[i]->ID == id)
                    {
                        printf("this student name:%s",s[i]->name);
                        int falg3=1;
                        printf("\n if NOT student enter number 0 :");
                        printf("\n if is student enter number 1 :\n");
                        scanf("%d",&falg3);
                        if(falg3==0)
                        {
                            continue;//to start again
                        }
                        else
                        {
                            char x;
                            printf("Please select number of Operation:\n");
                            printf("1-edit name\n");
                            printf("2-edit age\n");
                            printf("3-edit phone number\n");
                            printf("select number of Operation: ");
                            scanf("%d",&x);
                            switch(x)
                            {
                            case 1:
                                printf("enter new name:");
                                string_scan((s[i]->name));
                                printf("-------------------------------------------------------------------------------");
                                printf("\n\n");
                                break;

                            case 2:
                                printf("enter new age:");
                                scanf("%d",&s[i]->age);
                                printf("-------------------------------------------------------------------------------");
                                printf("\n\n");
                                break;


                            case 3:
                                fflush(stdin);
                                printf("enter new grade:");
                                string_scan((s[i]->number_phone));
                                printf("-------------------------------------------------------------------------------");
                                printf("\n\n");
                                break;


                            default:
                                printf("selection Invalid \n");
                                printf("-------------------------------------------------------------------------------");
                                printf("\n\n");
                                break;

                            }
                        }
                    }

                }
                break;
            case 2://2-with NAME
                char str[20];
                printf("please enter your name:");
                string_scan(str);
                int falg=0;
                for(i=0; i<num_students; i++)
                {
                    if(string_is_mirror_or_not(s[i]->name,str)==1)
                    {
                        falg=1;
                        printf("Please select number of Operation:\n");
                        printf("1-edit name\n");
                        printf("2-edit age\n");
                        printf("3-edit phone number\n");
                        printf("select number of Operation: ");
                        scanf("%d",&x);
                        switch(x)
                        {
                        case 1:

                            printf("enter new name:");
                            scanf("%s",s[i]->name);
                            fflush(stdin);
                            printf("-------------------------------------------------------------------------------");
                            printf("\n\n");
                            break;

                        case 2:
                            printf("enter new age:");
                            scanf("%d",&s[i]->age);
                            fflush(stdin);
                            printf("-------------------------------------------------------------------------------");
                            printf("\n\n");
                            break;


                        case 3:
                            fflush(stdin);
                            printf("enter new phone number:");
                            string_scan(s[i]->number_phone);
                            printf("-------------------------------------------------------------------------------");
                            printf("\n\n");
                            break;


                        default:
                            printf("Invalid selection\n");
                            printf("-------------------------------------------------------------------------------");
                            printf("\n\n");
                            break;
                        }
                    }

                }
                if(falg==0)
                {
                    printf("this student is NOT found\n");
                    printf("-------------------------------------------------------------------------------");
                    printf("\n\n");
                }
                break;
            default:
                printf("Invalid selection\n");
                printf("-------------------------------------------------------------------------------");
                printf("\n\n");
                break;
            }
        }
        break;
        case 3: // print student information
            printf("Please select number of Operation:\n");
            printf("1-with ID\n");
            printf("2-with NAME\n");
            printf("select number of Operation: ");
            scanf("%d",&x);
            switch(x)
            {
            case 1://1-with ID
            {
                printf("please enter ID number: ");
                scanf("%d",&id);
                for(i=0; i<num_students; i++)
                {
                    if (school[i]->ID == id)
                    {
                        student_printByRef(s[i]);
                    }
                }
                printf("\n\n");
                printf("-------------------------------------------------------------------------------");
                break;
            }
            case 2://2-with NAME
            {
                char str[20];
                printf("please enter your name:");
                string_scan(str);
                int falg1=0;
                for(i=0;i<num_students;i++)
                {
                    if(string_is_mirror_or_not((school[i]->name),str)==1)
                    {
                        falg1=1;
                        printf("\n\n");
                        printf("this student is found\n");
                        student_printByRef(school[i]);
                        printf("\n\n");
                        printf("-------------------------------------------------------------------------------");
                        break;
                    }

                }
                if( falg1==0)
                {
                    printf("this student is NOT found\n");
                    printf("-------------------------------------------------------------------------------");
                }
                break;
            }
            default:
            {
                printf("Invalid selection\n");
                printf("-------------------------------------------------------------------------------");
                break;
            }
            }
            break;
        case 4: // remove student
            printf("Please select number of Operation:\n");
            printf("1 - Remove with ID\n");
            printf("2 - Remove with NAME\n");
            printf("select number of Operation: ");
            scanf("%d", &x);
            switch (x)
            {
            case 1: // 1 - Remove by ID
            {
                printf("Please enter ID number: ");
                scanf("%d", &id);
                fflush(stdin);
                int flag5=0;
                for(i=0; i<num_students; i++)
                {
                    if (school[i]->ID == id)
                    {
                        flag5=1;
                        free(school[i]);
                        for (int j = i; j < num_students - 1; j++)
                        {
                            school[j] = school[j + 1];
                        }
                        num_students--;
                        school = (struct student**)realloc(school, (num_students - 1) * sizeof(struct student*));
                        printf("Student with ID %d removed.\n", id);
                        printf("-------------------------------------------------------------------------------");
                        break;
                    }

                }
                if(flag5==0)
                {
                    printf("Student with ID %d NOT NOT  removed.\n", id);
                    printf("-------------------------------------------------------------------------------");
                }
            }

            break;

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
                        printf("-------------------------------------------------------------------------------");
                        break;
                    }
                }
                if(falg2==0)
                {
                    printf("this student is NOT found\n");
                    printf("-------------------------------------------------------------------------------");
                }
                break;
            }
            default:
                printf("Invalid selection\n");
                printf("-------------------------------------------------------------------------------");
                break;
            }
            break;

        case 5:// Print all data of student
            for(i=0; i<num_students; i++)
            {
                student_printByRef(school[i]);
                printf("\n");
            }
            printf("Total number of student is : %d",num_students);
            printf("\n-------------------------------------------------------------------------------");
            break;
        case 6:// exit the system
            return 0;
        default:
            printf("Invalid choice.\n");
        }
        printf("\n\n");
    }




    return 0;
}
