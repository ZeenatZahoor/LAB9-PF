#include<iostream>
using namespace std;
int main()
{
    int choice;
    int withdraw,deposit, balance;
    int amount ;
    cout<<"Enter your amount"<<endl;
    cin>>amount;
    cout<<"Enter your choice:"<<endl;
    cin>>choice;
    switch(choice){
        case 1:{
        cout<<"Deposit your balance:"<<endl;
        cin>>deposit;
        cout<<"Your deposit amount is :"<<deposit<<endl;
        break;
    }
    case 2:
    {
        cout<<"Withdraw your payment "<<endl;
        cin>>withdraw;
        cout<<"Your withdraw balance is:"<<withdraw<<endl;
     break;
    }
    case 3:
    {
        cout<<" Check your balance "<<endl;
        balance ==amount;
        cout<<"Your current balance is :"<<balance<<endl;
        break;
    }
    case 4:
    {
        cout<<"exit"<<endl;
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