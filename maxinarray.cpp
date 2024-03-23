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
    cout<<"max element"<<endl;
    int mx=-1222;
    for(int i=0;i<size;i++)
    {
        mx=max(mx,arr[i]);
    }
    cout<<mx<<endl;
}