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
    int mx=INT_MIN;
    int mn=INT_MAX;
    // cout<<"Your array is: ";
    for (int i=0;i<size;i++){
        mx=max(mx, arr[i]);
        mn=min(mn, arr[i]);
    }
    cout<<"the max "<<mx<<endl;
    cout<<"the min "<<mn<<endl;
}