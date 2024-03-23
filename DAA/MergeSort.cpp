#include <bits/stdc++.h>
using namespace std;


void Merge(int arr[],int low,int mid,int high){
    int n1=mid-low+1;
    int n2=high-mid;

    int a[n1];
    int b[n2];

    for(int i=0;i<n1;i++){
        a[i]=arr[low+i];
    }

    for(int i=0;i<n2;i++){
        b[i]=arr[mid+1+i];
    }

    int i=0;
    int j=0;
    int k=low;
    
    while(i<n1&& j<n2){
        if(a[i]<b[j]){
            arr[k]=a[i];
            k++;i++;
        }
        else{
            arr[k]=b[j];
            k++;j++;
        }
    }
    while(i<n1){
        arr[k]=arr[i];
        k++;i++;
    }

    while(j<n2){
        arr[k]=arr[j];
        k++;j++;
    }

}

void MergeSort(int arr[],int low,int high){
    while(low<high)
    {
        int mid=(low+high)/2;
        MergeSort(arr,low,mid);
        MergeSort(arr,mid+1,high);
        Merge(arr,low,mid,high);
    }
}

int main()
{

}