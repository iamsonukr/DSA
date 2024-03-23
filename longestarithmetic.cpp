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
    // int count=0;
    // for(int j=0;j<size;j++){
    //     if(arr[j]-arr[j-1]==arr[j+1]-arr[j]);
    //     count=count+1;
    // }
    // cout<<count<<endl;

    int ans=2;
    int pd=arr[1]-arr[0];
    int j=2;
    int curr=2;
    while(j<size){
        if(pd==arr[j]-arr[j-1]){
            curr++;
        }
        else{
            pd=arr[j]-arr[j-1];
            curr=2;
        }
        ans=max(ans,curr);
        j++;
    }
    cout<<ans<<endl;
    return 0;
}