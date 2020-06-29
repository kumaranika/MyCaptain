#include <iostream>

using namespace std;

int main()
{
    int age,res=0;
    cout<<"Enter your age: ";
    cin>>age;
    res= age>=18? 1 : 0 ;
    if(res==1)
    {
        cout<<"\nYou are eligible to vote ";
    }
    else
    {
        cout<<"\nYou are not eligible to vote ";
    }
    return 0;
}
