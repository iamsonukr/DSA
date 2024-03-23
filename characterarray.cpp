#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin>>size;
    char arr[size+1];
    cin>>arr;
    bool found =false;
    for(int i=0;i<size;i++){
        if(arr[i]==arr[size-1-i]){
            found =true;
            break;
        }
    }
    if(found==true){
        cout<<"Malyalam"<<endl;
    }
    else{
        cout<<"NagaLand"<<endl;
    }

}