#include<iostream>
using namespace std;
int sum(int n){

    if(n==0){
        return 0; 
    }
    int prevSum=sum(n-1);
    return n+prevSum;
}
int main(){
    int num;
    cin>>num;
    cout<<sum(num)<<endl;
}