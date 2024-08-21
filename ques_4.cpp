#include<iostream>
using namespace std;
int square(int n)
{
    return n*n;
}
int countdigit(int n)
{
    int a=0;
    while(n>0)
    {
        n=n/10;
        a++;
    }
    return a;
}
int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;
    cout<<countdigit(n)<<endl;
    cout<<square(n);
}