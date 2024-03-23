#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int freq[26];

    for(int j=0;j<26;j++){
        freq[j]=0;
    }
    for(int i=0;i<=str.size();i++){
        freq[str[i]-'a']++;
    }

    char ans='a';
    int maxFreq=0;
    for(int i=0;i<26;i++){
        if(freq[i]>maxFreq){
            maxFreq= freq[i];
            ans=i+'a';
        }
    }cout<<maxFreq<<ans<<endl;
}