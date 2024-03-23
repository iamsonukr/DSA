#include <bits/stdc++.h>
using namespace std;

//binary search
int bsearch(int arr[],int size,int key){
    int s=0;
    int e=0;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
     

    }return -1;
}

int main()
{
    int size;
    cout << "enter the size of array: " << endl;
    cin >> size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"enter the key: "<<endl;
    cin>>key;
    cout<<bsearch(arr,size,key);
}