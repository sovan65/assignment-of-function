#include<iostream>
using namespace std;
float are(int r)
{
    float a = 3.14*r*r;
    return a;
}
int main()
{
    int r;
    cout<<"enter the radious";
    cin>>r;
    cout<<are(r);
}