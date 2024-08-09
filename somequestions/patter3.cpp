#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the value of n : ";
    cin >> n;
    cout<<"enter no. of row\n";
    int row;
    cin>>row;
for (int t = 0; t < row; t++)
{
        int b = 1;
    int d = 1;
    for (int i = n; i > 0; i--)
    {
        int a = i - 1;
        for (int j = 1; j <= a; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < b; k++)
        {
            cout << "*";
        }
        b = b + 2;
        for (int j = 1; j <= 2 * a; j++)
        {
            cout << " ";
        }
        cout << " ";
        for (int k = 0; k < d; k++)
        {
            cout << "*";
        }
        d = d + 2;
        cout << "\n";
    }
    int c = b - 2;
    int e = b - 2;
    for (int i = 1; i <= n; i++)
    {
        int a = i - 1;
        for (int j = 1; j <= a; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < c; k++)
        {
            cout << "*";
        }
        c = c - 2;
        for (int j = 1; j <= 2*a; j++)
        {
            cout << " ";
        }
         cout << " ";
        for (int k = 0; k < e; k++)
        {
            cout << "*";
        }
        e = e - 2;
        cout << "\n";
    }
}


    return 0;
}