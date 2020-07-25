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
    int s=0,r;
    while(num!=0)
    {
        r=num%10;
        s+=r;
        num=num/10;
    }
    return s;
}
