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

   int max=0;
   int min=arr[1];
    for (int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"the min is "<<min<<endl;
    cout<<"the max is "<<max<<endl;
}