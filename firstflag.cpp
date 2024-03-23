#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    bool flag=0;
    for(int i=2;i<sqrt(num);i++){
        if(num%i==0){
            flag=1;
            cout<<"the number is composite";
            break;
        }
    }
    if(flag==0){
        cout<<"the number is prime"<<endl;
    }
}