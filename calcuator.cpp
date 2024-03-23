#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter the number"<<endl;
    cin>>num1>>num2;
    cout<<"Press A for addition"<<endl;
    cout<<"Press B for Subtraction"<<endl;
    char button;
    cin>>button;
    switch (button)
    {
    case'a':
        cout<<num1+num2<<endl;
        break;
    case'b':
        cout<<num1-num2<<endl;
        break;
    case 'c':
        cout<<num1*num2<<endl;
        break;
    
    default:
    cout<<"please select the option from the above option"<<endl;
        break;
    }
}