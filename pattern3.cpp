#include<iostream>
using namespace std;
int main(){
    int row,column;
    cin>>row>>column;
    int i,j;
    for(int i=1;i<=row;i++){
        for( j=1;j<=column;j++){
            if(i==1 || i==row || j==1 || j==column){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}