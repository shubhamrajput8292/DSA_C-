#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the ap number";
    cin>>n;
    for(int i=1;i<=2*n-1;i+=3)
    cout<<i<<" ";
}