#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the table";
    cin>>n;
    for(int i=n;i<=n*10 ;i=i+n)
    {
        if (i%n==0) cout<<i<<" ";
    }
}