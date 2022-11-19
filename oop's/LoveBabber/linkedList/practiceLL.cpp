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

void insertAtHead(Node *&head, int d){
    Node* temp =new Node(d);
    temp->next = head;
    head =temp; 
}

void insertAtTail(Node* &tail, int d){
    Node* temp =new Node(d);
    tail->next =temp; 
    tail = tail->next;

}

void insertAtPosition(Node* &head, Node* &tail, int position, int d){
    Node*temp =head;
    if(position==1){
        insertAtHead(head, d);
        return;
    }

    if(temp->next==NULL){
        insertAtTail(tail,d);
        return;
    }
    int count=1;
    while(count<position-1){
        temp = temp->next;
        count++;
    }
    Node*nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next= nodeToInsert;

}
void print(Node* &head){
    Node*temp =head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
Node*node1 = new Node(10);
// cout<<node1->data<<endl;
// cout<<node1->next<<endl;
Node* head =node1;

Node* tail = node1;
// print(head);
// insertAtHead(head, 20);
// print(head);
// insertAtHead(head, 15);
// print(head);

// insertAtTail(tail,30);
// print(head); 

// insertAtPosition(head,tail, 5, 100);
// print(head);

// cout<<"head->"<<head->data<<endl;
// cout<<"tail->"<<tail->data<<endl;
return 0;
}
