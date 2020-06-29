#include<iostream>

using namespace std;

class time
{
    private:
        int h;
        int m;
        int s;
        int sec;
    public:
        entertime();
        int calcsec();
        printtime();
}t;

time :: entertime()
{
    cout<<"Enter time:\nHours? ";
    cin>>h;
    cout<<"\nMinutes? ";
    cin>>m;
    cout<<"\nSeconds? ";
    cin>>s;
}

time :: calcsec()
{
    sec=h*3600 + m*60 + s;
    return sec;
}

time :: printtime()
{
    cout<<"The time is = "<<h<<":"<<m<<":"<<s<<endl;
    cout<<"Time in total seconds: "<<sec;
}

int main()
{
    t.entertime();
    t.calcsec();
    t.printtime();
    return 0;
}
