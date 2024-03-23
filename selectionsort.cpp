#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size of "<<endl;
    cin>>size;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    //selection sort
    int temp;
    for(int j=0;j<size-1;j++){
        for(int k=j+1;k<size; k++){
            if(arr[k]<arr[j])
            temp=arr[j];
            arr[j]=arr[k];
            arr[k]=temp;
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}