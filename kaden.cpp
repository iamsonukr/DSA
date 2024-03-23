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
    int currSum=0;
    int maxSum=INT_MIN;
    for (int i=0;i<size;i++){
        currSum=currSum+arr[i];
        if(currSum<0){
            currSum=0;
        }
        maxSum=max(maxSum,currSum);
    }cout<<maxSum<<endl;

    }