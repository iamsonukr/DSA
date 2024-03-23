#include <bits/stdc++.h>
using namespace std;

// int iterativeBinarySearch(int array[], int start_index, int end_index, int element){
//    while (start_index <= end_index){
//       int middle = start_index + (end_index- start_index )/2;
//       if (array[middle] == element)
//          return middle;
//       if (array[middle] < element)
//          start_index = middle + 1;
//       else
//          end_index = middle - 1;
//    }
//    return -1;
// }

// int BinarySearch2(int arr[],int low,int high,int key){
//     while(low<=high){
//         int mid=(low+high)/2;
//         if(arr[mid]==key){
//             return mid;
//         }
//         else if(arr[mid]<key){
//             low=mid+1;
//         }
//         else if(key>mid){
//             high=mid+1;
//         }
//     }
//     return -1;
// }


// -------------------------------------------------------------Recursive Mehod--------------

int RecursiveBinarySearch(int arr[],int low, int high, int key){
    while(low<high){
        int mid=(low+high)/2;
        if(key==arr[mid]){
            return mid;
        }
        else if(arr[mid]<key){
            return RecursiveBinarySearch(arr,mid+1,high,key);
        }
        else{
            return RecursiveBinarySearch(arr,low,mid-1,key);
        }
    }
}


int main()
{
    int arr[5]={3,4,5,2,8};
    int low=0;
    int high=4;
    int key=4;
    cout<<RecursiveBinarySearch(arr,low,high,key);


}