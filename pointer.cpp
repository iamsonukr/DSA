#include <iostream>
using namespace std;

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    // int a=5;
    // int *ptr=&a;
    // cout<<a;
    
    // int arr[]={10,20,30};
    // int *ptr=arr;
    
    // for(int i=0;i<3;i++){
    //     cout<<*(ptr+i)<<endl;
    // }
    // int **qtr=&ptr;
    // cout<<qtr<<endl;
    int a=2;
    int b=4;
    swap(&a,&b);
    cout<<a<<" "<<b<<endl;
}  