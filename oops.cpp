#include <iostream>
using namespace std;

class student
{
    string name;
    public:
    int age;
    bool gender;

    student(string s, int a, int){
        name=s;
        age=a;
        gender=g;
    }
    void printinfo(){}
    void setName(string s){
        
    }
};

int main()
{
    student arr[3];
    for (int i = 0; i < 3; i++)
    {
        string naam;
        cout<<"Name :";
        cin>>naam;
        arr[i].setName(naam);
        cout<<"age :";
        cin>>arr[i].age;
        cout<<"gender :";
        cin>>arr[i].gender;
    
    }
    for(int i=0;i<3;i++){
        arr[i].printinfo();
    }
    student a("Sonu",20,0);
    a.printinfo();
}

