#include<iostream>
using namespace std;
int main()
{

    int n;
    cout<<"enter the number"<<" ";
    cin>>n;
    if(n%3==0 && n%5==0 && n!=15)
    {
        cout<<"divisible by 3 and 5 but not equal to 15";
    }
    else
    {
        cout<<"not divisible by 3 and 5 but not equal to 15";
    }
}
