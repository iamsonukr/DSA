#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cout<<"enter the size of array: "<<endl;
    cin>>size;
    int arr[size];
    int find;
   
    for (int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"enter the element address to search: "<<endl;
    cin>>find;
    
    for (int i=0;i<size;i++){
        if(arr[i]==find){
            cout<<"the element found at index: "<<i<<endl;
            break;
        }
        else{
            cout<<"element not found"<<endl;
            break;
        }
    }
}