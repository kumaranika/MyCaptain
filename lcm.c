#include <stdio.h>
 
int lcm(int, int);
 
int main()
{
    int a,b,l;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    l=lcm(a,b);
    printf("The LCM of %d and %d is %d\n",a,b,l);
    return 0;
}
 
int lcm(int a, int b)
{ 
    static int flag=1;
 
    if(flag%a==0 && flag%b==0)
    {
        return flag;
    }
    flag++;
    lcm(a,b);
    return flag;
}
