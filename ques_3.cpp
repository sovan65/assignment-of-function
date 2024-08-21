#include<iostream>
using namespace std;
int oddnum(int i)
{
    return i;
}
int main()
{
    int a,b;
    cout<<"enter the first range";
    cin>>a;
    cout<<"enter the second range";
    cin>>b;
    for(int i=a;i<=b;i++)
    {
        if(i%2!=0)
        {

        cout<<oddnum(i)<<endl;
        }
    }
}