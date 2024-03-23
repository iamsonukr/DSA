#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter the number"<<endl;
    cin>>num;
    int rev=0;
    while(num>0){
        int last=num%10;
        rev=rev*10+last;
        num=num/10;
    }
    cout<<rev<<endl;
}