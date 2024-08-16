#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 struct student
{
    char name[20];
    int age;
};
int c;
int num_of_student=1;
struct student**s;
int main()
{
s=(struct student**)malloc(num_of_student*sizeof(struct student*));
s[c]=(struct student*)malloc(num_of_student*sizeof(struct student));
s[c]->name;
s[c]->age=20;
printf("%d\n",s[0]->age );
num_of_student++;
c++;
s=(struct student**)realloc(s,num_of_student*sizeof(struct student*));
s[c]=(struct student*)malloc(num_of_student*sizeof(struct student));
s[c]->name;
s[c]->age=23;
printf("%d",s[1]->age );
printf("\n%d\n",s[0]->age );
s[0]->age=21;
printf("%d\n",s[0]->age );
}
