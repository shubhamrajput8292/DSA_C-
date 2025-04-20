#include<iostream>
using namespace std;
int main ()
{

    int  a,b,c;
    cout<<"enter the 1 side"<<" ";
    cin>>a;
    cout<<"enter the 2 side"<<" ";
    cin>>b;

    cout<<"enter the 3side"<<" ";
    cin>>c;
    if(a>c&&b>c)
    {cout<< a<<"greater";
    }
    else if(b>a&&b>c){
    cout<< b<<"greater";}
    else 
    {
        cout<< c<<"greater";

    }
}
   