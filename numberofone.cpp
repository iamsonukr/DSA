#include<iostream>
using namespace std;
//number of ones in a number
int numberofone(int n){
    int count=0;
    while(n){
        n=n&(n-1);
        count++;

    }
    return count;
}
int main(){
 cout<<numberofone(19)<<endl;
}
