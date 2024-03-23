#include<iostream>
using namespace std;
int main(){
    int num,i,j;
    cin>>num;
    int count =1;
    for(i=1;i<=num;i++){
        for(j=1;j<=i;j++){

            cout<<count<<" ";
            count++;
            
        }
        cout<<endl;
    }
}