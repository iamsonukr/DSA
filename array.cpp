#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cout<<"enter the size of array: "<<endl;
    cin>>size;
    int arr[size];
    for (int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Your array is: ";
    for (int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}