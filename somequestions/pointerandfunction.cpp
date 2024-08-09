#include <bits/stdc++.h>
using namespace std;
void swap1(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
void swapp(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void update(int *a)
{
    // a++;//it will not update thw value in main function
    *a = *a + 1; // it will update the value in main function also
}
void getsum(int *arr, int length)
{ // int*arr ki jagah ham int arr[] ye bhi likh skte h
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum = sum + *(arr + i);
        // sum = sum + arr[i]; ye bhi shi h
    }
    cout << sum << endl;
}
int main()
{
    int a = 5;
    // int b = 6;
    // cout<<"a== "<<a<<endl<<" b== "<<b<<endl;
    // swap1(a,b);//it does not swap because we does not alter the value that stored in a,b memory in swap1 a,b are different and here a,b,are different
    // cout<<"a== "<<a<<endl<<" b== "<<b<<endl;
    // swapp(&a,&b); it will swap value because i have given adress of both value and changed the value in their adress hence it get swapped
    // cout<<"a== "<<a<<endl<<" b== "<<b<<endl;
    update(&a);
    // cout<<a<<endl;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    getsum(arr, 10);
    return 0;
};
