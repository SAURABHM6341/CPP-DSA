#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    long int bin = 0, multi = 1,bit_count = 0;;
    while (x != 0)
    {
        bin = bin + (x % 2) * multi;
        x = x / 2;
        multi = multi * 10;
        bit_count++;
    }
    long long int complement = 0;
    long long int multi2 = 1, multiten = 1;
    while (bin != 0)
    {
        complement = complement + (!(bin % 10)) * multiten;
        bin = bin/10;
        multiten*=10;
    }
    long long int decimal = 0;
    while (bit_count--)
    {
        decimal  = decimal+multi2*(complement%10);
        complement/=10;
        multi2*=2;
    }
    cout<<decimal;
    // cout<<bin<<endl;
    return 0;
}