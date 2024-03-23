#include <iostream>
using namespace std;
int main()
{
    int num, num1, num2;
    cout << "enter the first number" << endl;
    cin >> num1;
    cout << "enter the second number" << endl;
    cin >> num2;
    int i;
    for (num = num1; num <= num2; num++)
    {
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                break;
            }
        }
        if(i==num){
            cout<<num<<endl;
        }
    }
}