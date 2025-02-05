#include <iostream>
using namespace std;

int main() {
    double num1,num2;
    char operation;
    cout<<"Enter Number 1: "<<endl;
    cin>>num1;
    cout<<"Enter Number 2: "<<endl;
    cin>>num2;
    cout<<"Enter your operation +,-,*,/ : "<<endl;
   cin>>operation;
   switch(operation){
       case '+':
       cout<< num1 + num2;
       break;
       case '-':
       cout<<num1 - num2;
       break;
       case '*':
       cout<<num1 * num2;
       break;
       case '/':
       if(num2 == 0){
           cout<<"Can't be divided by 0";
       }
       cout<<num1 / num2;

   }
    return 0;
}