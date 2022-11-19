#include<iostream>
using namespace std;
class Node{
    public: 
    int data;
    Node*next;


// constructor
    Node(int data){
        this->data =data;
        this->next = NULL;
    }
};


 void insertAtTail(Node* &tail, int data){

        Node* temp= new Node(data);
        tail->next=temp;
        tail =tail->next;

 }

  void print(Node * &head){
    Node* temp=head;


    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
 }


bool isCircular(Node* &head){
    if(head==NULL){
        return true;
    }

    Node* temp = head->next;
    while(temp!=NULL && temp!=head){
        temp =temp->next;
    }
    if(temp==head){
        return true;
    }
    if(temp==NULL){
        return false;
    }
}
int main(){
Node* tail =NULL;
Node* head =NULL;
insertAtTail(tail,3);
print(head);
insertAtTail(tail,5);
print(head);

if(isCircular(head)){
    cout<<"Linked List is circular "<<endl;
}
else{
    cout<<"Linked List is Not Cicular in nature"<<endl;
}
return 0;
}
