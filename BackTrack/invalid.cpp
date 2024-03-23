#include <bits/stdc++.h>
using namespace std;

void solve(string s,int minInv){
    if(minInv<0){
        return;
    }
    if(minInv==0)
    {
        if(!getMinInValid(s))
            res.push_back(s);
        return;
    }

    for(int i=0;i<s.size();i++)
    {
        string left=s.substr(0,i++);
        string right=s.substr(i+1);
        solve(left+right,minInv-1);
    }
    return;
}

vector<string>removeInvalid(string s){
    solve(s,getMinInValid(s));
    return res;
}

int main()
{

}