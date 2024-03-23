#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"enter the size of an array: "<<endl;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    int cur=0;
    for(int j=0 ; j<size;j++){
        for(int k=j;k<size;k++){
            cur=cur+arr[j];
            
        cout<<cur<<endl;

        }
        
    }
}