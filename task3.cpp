#include<iostream>
using namespace std;
int main()
{
    char operation;
    int x,y;
    int result;
    cout<<"Enter the value of x"<<endl;
    cin>>x;
    cout<<"Enter the value of y"<<endl;
    cin>>y;
    cout<<"Enter your choice of operation"<<endl;
    cin>>operation;
    switch(operation){
        case '+':
        {
            result=x+y;
       cout<<"Sum of x and y is :"<<result<<endl;
       break;   
        }

         case '-':
        {
            result=x-y;
       cout<<"Subtraction of x and y is :"<<result<<endl;
       break;   
        }
         case '*':
        {
            result=x*y;
       cout<<"Multiplactionof x and y is :"<<result<<endl;
       break;   
        }
         case '/':
        {
            result=x/y;
       cout<<"Divisionof x and y is :"<<result<<endl;
       break;   
        }
        default:{

        cout<<"Invalid value"<<endl;
       break;   
        }
        
    }
    return 0;
}

    
    
   