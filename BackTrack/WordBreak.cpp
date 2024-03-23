#include <bits/stdc++.h>
using namespace std;
unordered_set<string>s;

void go(string str ,int len,string res){
    for(int i=1;i<=len;i++)
    {
        string pre=str.substr(0,i);
        if(s.find(pre)!=s.end()){
            if(i==len)
            {
                res+=pre;
                cout<<res<<endl;
            }
            go(str.substr(i,len-i),len-i,res+pre+" ");
        }
    }
}

int main()
{
    s.insert("i");
    s.insert("love");
    s.insert("sam");
    s.insert("sung");
    s.insert("sung");
    string str;
    cin>>str;
    go(str,str.length()," ");


}