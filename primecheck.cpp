#include<iostream>
using namespace std;
int main(){
    int num;
    int i;
    cout<<"enter the number"<<endl;
    cin>>num;
    for ( i = 2; i < num; i++)
    {
        if (num%i==0)
        {
            cout<<"Number is composite"<<endl;
            break;
        }
        
    }
    if(num==i){
        cout<<"the numbe is prime"<<endl;
    }
    

}