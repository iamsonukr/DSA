#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(3);
    v.push_back(2);
    v.push_back(9);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << endl;
    }
    v.pop_back();

    cout << "using auto" << endl;
    for (auto element : v)
    {
        cout << element << " ";
    }
    cout << "introduciton" << endl;
    vector<int> v2(4, 5);
    for (auto element : v2)
    {
        cout << element << " ";
    }
    swap(v, v2);

    
cout<<"after swaping:" <<endl;
    for (auto element : v)
    {
        cout << element << endl;
    }
}