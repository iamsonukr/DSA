#include<bits/stdc++.h>
using namespace std;
//function overloading
class college{
    public:
    void fun(){
        cout<<"I am no argument"<<endl;
    }
    void fun(int x){
        cout<<"I am function with int argument: "<<endl;

    }
    void fun(string s){
        cout<<"I am fun with string argument "<<endl;

    }
    void fun(double c){
        cout<<"I am a function with double argument"<<endl;
    }

};

int main(){
    college apna;
    // apna.fun();
    // apna.fun(3.4);
    // apna.fun(5);
    // apna.fun("joj");
}