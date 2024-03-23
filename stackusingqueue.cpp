#include<bits/stdc++.h>
// #include<iostream>
using namespace std;
class stack{
    int N;
    queue<int> q1;
    queue<int> q2;
    public:
    stack(){
        N=0;
    }
    void push(int val){
        q2.push(val);
        N++;
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        queue<int> temp=q1;
        q1=q2;
        q2=temp;
         
    };
    void q1.pop(){
        q1.pop();
        N--;
    }
    int top(){
        return q1.front();
    }
    int size(){
        return N;
    }
};
int main(){
    stack st;
    st.push(4);
    st.push(3);
    st.push(2);
    st.push(7);

    return 0;
}