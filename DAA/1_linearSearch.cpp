#include <bits/stdc++.h>
using namespace std;

int LinearSearch(int arr[], int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            cout<<"element " <<key<<" found at: ";
            cout<<i<<endl;
        }
    }
}

int main()
{
    int arr[5]={3,4,5,6,7};
    int sz=sizeof(arr)/sizeof(arr[0]);
    int key=6;
    LinearSearch(arr,sz,key);


}