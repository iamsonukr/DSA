#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main()
{
    // string s1="784";
    // int x=stoi(s1);
    // cout<<x<<endl;
    // int a=890;
    // cout<<to_string(a)<<endl;
    // string str="fjafsndfsfsnisfsdnmcxvertb";
    // sort(str.begin(),str.end());
    // cout<<str;

    // cout << s  << endl;
    string num = "9389923232000111";
    transform(num.begin(), num.end(), greater<int>());
    cout << num << endl;

    // string str;
    // getline(cin,str);
    // cout<<"the output"<<endl;
    // cout<<str<<endl;
    // return 0;
    // string s1="fam";
    // string s2="ily";
    // cout<<s1+s2<<endl;
    // s1.append(s2);
    // cout<<s1<<endl;
    string sa1 = "nincompoop";
    string s2 = "hello moto";
    // cout<<s1.length()<<endl;

    // for (int i=0;i<s1.length();i++)
    // cout<<s1[i]<<"ojo"<<endl;
    // cout<<s1<<endl;
    // cout<<s1.substr(4,5)<<endl;
    return 0;
}