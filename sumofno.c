#include<stdio.h>

int sumofno(int num);

int main()
{
    int x,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    x=sumofno(n);
    printf("\nSum of digits of %d is %d",n,x);
    return 0;
}

int sumofno(int num)
{
    if(num==0)
    return 0;
    else
    return num%10 + sumofno(num/10);
}
