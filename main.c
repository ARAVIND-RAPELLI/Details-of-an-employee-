#include <stdio.h>

struct employee{
    char    name[30];
    int     age , phonenum;
    float   salary;
};

int main()
{

    struct employee emp;

    printf("\nEnter details :\n");

    printf("Name ?:");
    gets( &emp.name);

    printf("Age ?:");
    scanf("%d",&emp.age);

    printf("Phone Number?:");
    scanf("%d",&emp.phonenum);

    printf("Salary ?:");
     scanf("%f",&emp.salary);

    printf("\nEmployee details are: \n");
    printf("Name: %s \n"   ,emp.name);
    printf("Age: %d \n"     ,emp.age);
    printf("Phone Number: %d \n" ,emp.phonenum);
    printf("Salary: %f\n",emp.salary);
    return 0;
}
