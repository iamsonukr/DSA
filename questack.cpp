#include<bits/stdc++.h>
using namespace std;
class queue{
    public:
    stack<int> s1;
    stack<int> s2;
    void push(int x){
        s1.push(x);
    }
    int pop(){
        if(s1.empty() and s2.empty()){
            cout<<"Out quite is empty"<<endl;
            return -1;
        }
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        int topval=s2.top();
        s2.pop();
        return topval;
    }
};
int main(){   
     
}