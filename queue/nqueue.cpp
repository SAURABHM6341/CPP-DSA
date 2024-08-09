#include <bits/stdc++.h>
using namespace std;
class nqueue
{
public:
    int n;
    int k = 0;
    int *front;
    int *rear;
    int *arr;
    int freespot;
    int *next;
    nqueue(int n, int k)
    {
        this->n = n;
        this->k = k;
        front = new int[k];
        rear = new int[k];
        arr = new int[n];
        next = new int[n];
        freespot = 0;
        for (int i = 0; i < n; i++)
        {
            front[i] = -1;
            rear[i] = -1;
        }
        for (int i = 0; i < n - 1; i++)
        {
            next[i] = i+1;
        }
        next[n - 1] = -1;
    }
    void enqueue(int data,int qn){
        if(freespot==-1){
            cout<<"queue is full\n";
            return ;
        }
        int index = freespot;
        freespot = next[index];
        if(front[qn-1]==-1){
            front[qn-1] = index;
        }
        else{
            next[rear[qn-1]] = index;
        }
        next[index] = -1;
        rear[qn-1] = index;
        arr[index] = data; 
    }
    void dequeue(int qn){
        if(front[qn-1]==-1){
            cout<<"queue is empty\n";
            return;
        }
        int index = front[qn-1];
        front[qn-1] = next[index];
        next[index] = freespot;
        freespot = index;
        cout<<arr[index]<<" is popped out\n";
    }
};
int main()
{
nqueue q(10,3);
q.enqueue(1,1);
q.enqueue(2,2);
q.enqueue(3,3);
q.enqueue(4,1);
q.enqueue(5,2);
q.enqueue(6,3);
q.enqueue(7,1);
q.enqueue(8,2);
q.enqueue(9,3);
q.enqueue(10,1);
q.enqueue(11,2);
q.enqueue(12,3);
q.dequeue(1);
q.dequeue(2);
q.dequeue(2);
q.dequeue(3);
q.dequeue(3);
q.dequeue(3);
q.dequeue(2);
q.dequeue(2);
q.dequeue(3);
q.dequeue(1);
    return 0;
}