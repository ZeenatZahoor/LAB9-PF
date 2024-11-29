#include<iostream>
using namespace std;
int main()
{
    char color;
    cout<<"Enter a colour"<<endl;
    cin>>color;
   
    switch(color)
    {
    case 'R':
    {
        cout<<"STOP"<<endl;
        break;
    }
    case 'G':
    {
        cout<<"Go"<<endl;
        break;
    }
    case 'Y':
    {
        cout<<"Slow down"<<endl;
        break;
    }
    default:
    {
        cout<<"default value"<<endl;
        break;
    }
    }
    return 0;
}