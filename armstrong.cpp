#include <iostream>
#include<math.h>
using namespace std;
int main(){
    int num;
    cout<<"enter the number"<<endl;
    cin>>num;
    int sum=0;
    int real=num;

    while(num>0){
        int last=num%10;
        sum=sum+pow(last,3);
        num/=10;

    }
    if(sum==real){
        cout<<"the number is armstrong"<<endl;
    }
}