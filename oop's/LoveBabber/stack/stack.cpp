#include<iostream>
#include <stack>
using namespace std;

class Stack{
    //properties
    public:
        int *arr;
        int top;
        int size;

    //behavior
    Stack(int size){
        this ->size = size;
        arr = new int[size];
        top =-1;
    }

    void push(int element ){
        if(size - top >1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"stack overflow"<<endl;
        }
    }

    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"stack under flow"<<endl;
        }
    }

    int  peek(){
        if(top>=0 ){
            return arr[top]; 
        }
        else{
            cout<<"Stack is empty"<<endl; 
            return -1;
        }
    }

    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }

};
int main(){
//     // creation of stack
// stack<int> s;
// s.push(3);
// s.push(4);

// s.pop();
// cout<<"printing top elemeent "<<s.top()<<endl;

// if(s.empty()){
//     cout<<"stack is empty"<<endl;
// }
// else{
//     cout<<"stack is not empty"<<endl;
// }

Stack st(5);
st.push(22);
st.push(44);
st.push(66);
st.push(22); 
st.push(44);
st.push(66);

cout<<st.peek()<<endl;
st.pop();
cout<<st.peek()<<endl;
st.pop();
cout<<st.peek()<<endl;
st.pop();
cout<<st.peek()<<endl;

if(st.isEmpty()){
    cout<<"Stack is empty mere dost"<<endl;
}
else{
    cout<<"Stack is not empty "<<endl;
}
return 0;
}
