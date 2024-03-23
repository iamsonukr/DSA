#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    // printing the array
    cout << "the amtrics is : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    // searching in arry
    cout << "Enter the element to search" << endl;
    int num;
    cin >> num;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == num)
            {
                cout << "Element found at " << endl;
                cout << "Row" << i<<endl;
                cout << "column" << j;
            }
        }
        cout << endl;
    }
}