#include <iostream>
#include <algorithm>

#include <string>
using namespace std;
int main()
{
    string s = "hellomoto";
    // transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout << s << endl;
    string num="9389923232000111";
    transform(num.begin(),num.end(), greater<int>());

    string str;
    cin >> str;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
    }
    // string s= "hellojoto";
    // transform(s.begain(),s.end(),s.begin(),::toupper);
    // cout<<str<<endl;

    cout << str << endl;
}