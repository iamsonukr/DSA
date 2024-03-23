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
    int maxSum=INT_MIN;
    int sum=0;
    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            for(int k=i;k<j;k++){
                sum+=arr[k];
            }
            // cout<<endl;
            maxSum=max(maxSum,sum);
        }
    }
    cout<<maxSum<<endl;
}