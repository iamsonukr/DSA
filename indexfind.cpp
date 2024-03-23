#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "enter the size of an array: " << endl;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    const int N=1e6+2;
    int idx[N];
    for(int i=0;i<N;i++){
        idx[i]=-1;
    }
    int mindix=INT_MAX;
    for(int i=0;i<size;i++){
        if(idx[arr[i]] !=-1){
            mindix=min(mindix,idx[arr[i]]);
        }
        else{
            idx[arr[i]]=i;
        }
    }
    if(mindix==INT_MAX){
        cout<<"-1"<<endl;
    }
    else{
        cout<<mindix+1<<endl;
    }
}