#include<stdio.h>

int isPrime(int n, int x);

int main()
{
    int num, p;
    printf("Enter a number: ");
    scanf("%d",&num);
    p=isPrime(num,num/2);
    if(p==1)
    {
        printf("\n%d is a prime number",num);
    }
    else
    {
        printf("\n%d is not a prime number",num);
    }
    return 0;
}

int isPrime(int n, int x)
{
    if(x==1)
        return 1;
    else
    {
        if(n%x==0)
            return 0;
        else
            isPrime(n,x-1);
    }
}
