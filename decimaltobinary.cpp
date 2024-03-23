#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int rem=0;
    int a[10];
    int i=0;
    while(num>0){
        rem=num%2;
        num=num/2;
        a[i]=rem;
        i++;   
    }
    for(int j=i-1;j>00;j--){
        cout<<rem<<endl;
    }

}