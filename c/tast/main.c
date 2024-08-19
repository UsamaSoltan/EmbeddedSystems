#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100
#define PASSWORD "yourpassword"  // كلمة المرور الافتراضية
#define MAX_ATTEMPTS 2  // عدد المحاولات المسموح بها

struct student {
    int ID;
    char name[50];
    int age;
    char number_phone[15];
};

// دوال توضيحية
void student_scanByRef(struct student* s) {
    // تنفيذ التحقق من إدخال بيانات الطالب
}

void student_printByRef(struct student* s) {
    // تنفيذ طباعة بيانات الطالب
}

int string_is_mirror_or_not(char *a, char *b) {
    // تنفيذ المقارنة بين سلسلتين
    return strcmp(a, b) == 0;
}

void string_scan(char *str) {
    // تنفيذ قراءة سلسلة من المستخدم
    scanf("%s", str);
}

int main() {
    struct student** school = NULL;
    int num_students = 0;
    int choice, i, id;
    char password[50];
    int attempts = 0;
    int is_authenticated = 0;

    do {
        // طلب إدخال كلمة المرور
        printf("Enter password to access the system: ");
        scanf("%s", password);

        // التحقق من صحة كلمة المرور
        if (strcmp(password, PASSWORD) == 0) {
            is_authenticated = 1;  // كلمة المرور صحيحة
            break;
        } else {
            attempts++;
            if (attempts < MAX_ATTEMPTS) {
                printf("Incorrect password. Try again.\n");
            }
        }
    } while (attempts < MAX_ATTEMPTS);

    if (!is_authenticated) {
        // إذا فشلت كل المحاولات، أغلق البرنامج
        printf("Incorrect password. Exiting...\n");
        return 1;
    }

    // إذا وصلت هنا، فهذا يعني أن كلمة المرور كانت صحيحة
    while (1) {
        printf("Please select number of Operation From 1 To 6:\n\n");
        printf("1-add student to the system\n\n");
        printf("2-edit student to the system\n\n");
        printf("3-print information of student\n\n");
        printf("4-remove student from the system\n\n");
        printf("5-Print all data of student\n\n");
        printf("6-exit\n\n");
        printf("Select number of Operation: ");
        scanf("%d", &choice);
        printf("\n");
        switch (choice) {
            case 1: // add student
                if (num_students >= MAX_STUDENTS) {
                    printf("Maximum number of students reached.\n");
                    break;
                }
                school = (struct student*)realloc(school, (num_students + 1) * sizeof(struct student));
                if (school == NULL) {
                    perror("Failed to allocate memory");
                    exit(1);
                }
                school[num_students] = (struct student*)malloc(sizeof(struct student));
                student_scanByRef(school[num_students]);
                num_students++;
                break;

            case 2: // edit student
                // تنفيذ تعديل بيانات الطالب
                break;

            case 3: // print student information
                // تنفيذ طباعة معلومات الطالب
                break;

            case 4: // remove student
                // تنفيذ حذف الطالب
                break;

            case 5: // Print all data of student
                for (i = 0; i < num_students; i++) {
                    student_printByRef(school[i]);
                    printf("\n");
                }
                printf("Total number of students is : %d", num_students);
                break;

            case 6:
                free(school);  // تحرير الذاكرة
                return 0;

            default:
                printf("Invalid choice.\n");
        }
        printf("\n\n");
    }

    // تحرير الذاكرة في النهاية
    free(school);
    return 0;
}
else {
    printf("your password is wrong \n");
             printf("Try again \n");
              printf("enter password:");
        string_scan(pass);
    if (string_is_mirror_or_not_for_password(password,pass)==1)
        {
            printf("your password is correct \n\n");
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
                for(i=0;i<num_students;i++)
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
                for(int i=0; i<num_students; i++)
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
                            fflush(stdin);
                            printf("enter new name:");
                            string_scan(s[i]->name);
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
                    else
                    {
                        i++;
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
                for(i=0;i<num_students;i++)
                    {
                    if (school[i]->ID == id)
                    {
                student_printByRef(s[i]);
                }}
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
                while(i<num_students)
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
                    else
                    {
                        i++;
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
                fflush(stdin);int flag5=0;
               for(i=0;i<num_students;i++)
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
            printf("-------------------------------------------------------------------------------");
            break;
        case 6:
            return 0;
        default:
            printf("Invalid choice.\n");
        }
        printf("\n\n");
        }
             //continue;

        }}
printf("error in system");
