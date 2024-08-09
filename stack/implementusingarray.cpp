#include <bits/stdc++.h>
using namespace std;
class stacks{
public:
int *arr;
int top;
int size;
stacks(int size){
    this->size =size;
    arr = new int [size];
    top = -1;
}
void push(int element){
    if(top==size){
        cout<<"'STACK OVERFLOW'... More Elements cannot be Pushed, please pop out some elements to push\n";
    }
    else{
        top++;
        arr[top] = element;
    }
}
void pop(){
    if(top==-1){
        cout<<"'STACK UNDERFLOW'... Please Push something to Pop\n";
    }
    else{
        top--;
    }
}
void peek(){
    if(top==-1||top>size){
        cout<<"NO DATA FOUND\n";
    }
    else{
        cout<< "top element is "<<arr[top]<<endl;
    }
}
bool is_empty(){
    if(top==-1){
        return true;
    }
    else{
        return false;
    }
}
bool is_full(){
    if(top==size){
        return true;
    }
    return false;
}
};
int main()
{
stacks s(10);
cout<<s.size<<endl;
s.push(1);
s.push(2);
s.push(3);
s.push(4);
s.push(5);
s.push(6);
s.push(7);
s.push(8);
s.push(9);
s.push(10);
s.push(11);
s.push(12);//stack overflow
if(s.is_full()){
    cout<<"stack is full NOw\n";
}
s.peek();
s.pop();
s.pop();
s.pop();
s.pop();
s.pop();
s.pop();
s.peek();
if(s.is_empty()){
    cout<<"stack is empty you can push elements";
}
s.pop();
s.pop();
s.pop();
s.pop();
s.pop();
s.pop();
    return 0;
};
