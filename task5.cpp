#include<iostream>
using namespace std;
int main()
{
    int month;
    cout<<"Enter the month number"<<endl;
    cin>>month;
    switch(month)
    {
        case 12:
        case 1:
        case 2:
        {
            cout<<"Winter season"<<endl;
            break;
        }
        case 3:
        case 4:
        case 5:
        {
            cout<<"Spring season"<<endl;
            break;
        }
        case 6:
        case 7:
        case 8:

        {
            cout<<"Summer season"<<endl;
        break;
        }
        case 9:
        case 10:
        case 11:
        {
            cout<<"Automan season"<<endl;
            break;
        }
    }
    return 0;
}