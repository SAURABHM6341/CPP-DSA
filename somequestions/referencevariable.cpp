#include <bits/stdc++.h>
using namespace std;
void update(int&j){
    j = j+125;
}//here without help of point we cam do it called "function call by reference";
int main()
{
/*
//reference variable means ek hi memory ko do variable point lre jaise niche 5 ko i and j both point kr rhe h 
    int i =5;
    int&j = i;    
    i++;
    cout<<i<<endl;
    cout<<j<<endl;
    j++;
    cout<<j<<endl;
    //why we need it..?
    //abhi tak ham function me call by value variable pass krte the lekin reference variable ki madad se ham pointer ki tarah us kr skte h example is below.....
    update(i);
    cout<<i<<endl;
    //normal and bad practice
    int n;
    cin>>n;
    int arr[n];//agr n bda h to stack memory me jagah nhi rhegi aur program creash kr jayega to ya fir int arr[1000000] likh do ya fir n  ki max value kr do

    //mentos declaration

    //ab ham array dynamically allocate krenge ya fir vector is supreme

    int *arr1 = new int[n];
    // " new " lgane se heap se ham memory lete h aur ye adress return krta h to ham ise pointer me store kra lete h 
    //ise ham char int float in sab ke liye bhi use kr skte h
    int * a = new int;
    //new is key to heap

    //Note: always free memory after use of any allocation in heap
    delete []arr1;//way to delete array;
    delete a;
    //kisi bhi function ke return type ko reference variable nhi banana h ye ek bad practice hoti h aur warning generate krte h ha array return krane ke liye pointer return kr skte ho
    */

    //its time for 2d array
    int n,m;
    cin>>n>>m;
    //n = no. of rows
    //m= = no. of columns
    int **arr = new int* [n];
    //dekho 1 row ke liye ek int* aur n row ke liye n int * aur m int;
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[m];
    }
    //creation done;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    //printing the array
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    // releasing memory;
    for (int i = 0; i < n; i++)
    {
        delete []arr[i];
    }
    delete []arr;

    

    
     

    return 0;
};
