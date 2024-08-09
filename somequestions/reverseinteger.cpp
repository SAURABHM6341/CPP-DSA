#include <iostream>
using namespace std;
int main()
{
    long long int x;
    cin >> x;
    long long int s = 0;
    while (x % 10 != 0)
    {
        if ((s > (INT32_MAX / 10)) || (s < (INT32_MIN / 10)))
        {
            s = 0;
            break;
        }
        else
        {
            s = (s * 10) + x % 10;
            x = x / 10;
        }
    }
    cout << s;

    return 0;
}