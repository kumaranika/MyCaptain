#include <iostream>

using namespace std;

int main()
{
    int *p,a[5];
    cout<<"Enter 5 elements of an array: ";
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    p=a;
    cout<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<*p<<endl;
        p++;
    }
    return 0;
}
