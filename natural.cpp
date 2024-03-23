#include <iostream>
using namespace std;

// Natureal
int nature(int num)
{
    int sum = 0;
    for (int i = 1; i <= num; i++)
    {
        sum = sum + i;
    }
    return sum;
}

// python triplet
bool pytho(int x, int y, int z)
{
    int a = max(x, max(y, z));
    int b, c;
    if (a == x)
    {
        b = y;
        c = z; 
    }
    else if (a == y)
    {
        b = x;
        c = z;
    }
    else
    {
        a = z;
        b = x;
        c = y;
    }
    return false;
    //half coding
}

int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    if (pytho(x, y, z))
    {
        cout << "Yes it is pytho";
    }
    else
    {
        cout << "No it is not";
    }
}