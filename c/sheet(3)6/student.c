/*void student_print(struct student*s)
{

printf("name:");
string_print(s->name);
printf("age:%d\ngrade:%c\n========================================\n",s.age,s.grade);

}


void student_printByRef(struct student* ps)
{
  printf("name:");
string_print(ps->name);
printf("age:%d\ngrade:%c\n========================================\n",(*ps).age,(*ps).grade);
//printf("%d    %d\n",ps,ps+1);

}


struct student student_scan(void)
{
    struct student s;
    printf("enter your name:");
    string_scan(s.name);
    printf("enter your age:");
    scanf("%d",&s.age);
    fflush(stdin);
    printf("enter your Grade:");
    scanf("%c",&s.grade);
    return s;

}



void student_scanByRef(struct student* ps)
{

    printf("enter your name:");
    string_scan(ps->name);
    printf("enter your age:");
    scanf("%d",&ps->age);
    fflush(stdin);
    printf("enter your Grade:");
    scanf("%c",&ps->grade);


}

