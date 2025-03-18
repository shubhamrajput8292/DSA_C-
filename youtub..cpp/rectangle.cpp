#include <iostream>
using namespace std;
int main()
{
int l;

cout<<"length of side"<<" ";
cin>>l;
int b;

cout<<"breathof side"<<" ";
cin>>b;

int area=l*b;
int perimeter =2*(l+b);
if(area>perimeter)
{
    cout<<"GREATER"<<endl;
}
else
{
cout<<"SMALLER"<<endl;
}
    return 0;
}5
