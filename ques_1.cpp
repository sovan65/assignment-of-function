#include<iostream>
#include<cmath>
using namespace std;
int sqrt(int i)
{
    return i*i;
}
int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<sqrt(i)<<endl;
    }
}