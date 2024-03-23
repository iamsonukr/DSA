#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter the number"<<endl;
    cin>>num;
    int fact=1;
    for(int i=2;i<=num;i++){
        int fact=fact*i;

    } 
    cout<<fact;
}