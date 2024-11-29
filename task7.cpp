#include<iostream>
using namespace std;
int main(){
    cout<<"Enter your choice"<<endl;
    int x='A';
    switch(x){
     case 'A':
     {
        cout<<"Your choice is A"<<endl;
        break;
     }
      case 'B':
     {
        cout<<"Your choice is B"<<endl;
        break;
     }
      case 'C':
     {
        cout<<"Your choice is C"<<endl;
        break;
     }
     default:
     {
        cout<<"Your choice is other than A B and C"<<endl;
        break;
     }
    }
    return 0;
}