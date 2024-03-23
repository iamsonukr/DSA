#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter the number" << endl;
    cin >> num;
    int i;
    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            cout << "the number is composite" << endl;
            break;
        }
    }
    if(i==num){
    cout<<"number is prime"<<endl;
    }
}
