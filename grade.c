#include <stdio.h>

int main()
{
    int marks;
    printf("Enter marks: ");
    scanf("%d",&marks);
    if(marks>=85 && marks<=100)
    {
        printf("\nGrade A");
    }
    else if(marks>=70 && marks<85)
    {
        printf("\nGrade B");
    }
    else if(marks>=55 && marks<70)
    {
        printf("\nGrade C");
    }
    else if(marks>=40 && marks<55)
    {
        printf("\nGrade D");
    }
    else
    {
        printf("\nGrade F");
    }
    return 0;
}
