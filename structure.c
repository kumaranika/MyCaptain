#include <stdio.h>
#include <stdlib.h>

struct Employee{

    char name[30];
    int age;
    long int phno;
    int salary;

} emp[20];

int main()
{
    int i;
    printf("Enter Employee Details \n \n");
    for(i=0; i<20; i++)
    {
        printf("Employee %d:- \n",i+1);
        printf("Name: ");
        scanf("%s",emp[i].name);
        printf("Age: ");
        scanf("%d",&emp[i].age);
        getch();
        printf("Phone number: ");
        scanf("%zu",&emp[i].phno);
        getch();
        printf("Salary: ");
        scanf("%d",&emp[i].salary);
        getch();
        printf("\n");
    }
    display();
    return 0;
}

void display()
{
    printf("-------------- All Employees Details ---------------\n");
    int i;
    printf("Name \t Age \t Phone number \t Salary \n");
    for(i=0; i<20; i++)
    {
        printf("%s \t %d \t %zu \t %d \n",emp[i].name, emp[i].age, emp[i].phno, emp[i].salary);
    }
}
