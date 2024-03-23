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
    for(int j=0;j<size;j++){
        if(arr[j]>arr[j-1]&&arr[j+1]){
            cout<<j+1<<" is the record breaking day"<<endl;
        }
    }

}