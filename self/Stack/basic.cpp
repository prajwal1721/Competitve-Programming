#include<iostream>
using namespace std;
class Stack{
    int mx;
    int sz;
    int *ptr;
    public:
        Stack();
        void push(int x);
        int size();
        int pop();
        int top();
};
Stack::Stack(){
    sz=-1;
    mx=1;
    ptr=new int(1);
}
void Stack::push(int x){
    if(sz>=mx){
        int *tmp=new int(mx*2);
        for(int i=0;i<=sz;i++){
            tmp[i]=ptr[i];
        }
        delete(ptr);
        ptr=tmp;
    }
    ptr[++sz]=x;
}
int Stack::pop(){
    if(sz==-1){cout<<"Stack underflow\n";return -1;}
    return ptr[sz--];
}
int Stack::top(){
    if(sz==-1){cout<<"Stack underflow\n";return -1;}
    return ptr[sz];
}
int Stack::size(){
    return sz+1;
}
int main(){
    Stack s;
    s.push(32);
    s.push(332);
    cout<<s.top()<<"\n";
    cout<<s.pop()<<"\n";
    cout<<s.top()<<'\n';
}