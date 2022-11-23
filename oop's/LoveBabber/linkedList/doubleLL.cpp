#include<iostream>
using namespace std;
 
 class Node{
    public:
    int data;
    Node*prev;
    Node*next;

    //constuctor
    Node(int d){
        this->data=d;
        this->prev =NULL;
        this->next = NULL;
    }

    ~Node(){
      int val = this->data;
      if(next!=NULL){
         delete next;
         next = NULL;
      }
      cout<<"Memory free for node with data "<<val<<endl;
    }
 };

 void print(Node*head){
    Node*temp =head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
 }

 int getlength(Node*head){
    int len =0;
    Node*temp =head;

    while(temp!=NULL){
        len++;
        temp = temp->next;
    }
    return len;
 }

 void insertAtHead(Node* & tail, Node* &head, int d){

   // empty list
   if(head ==NULL){
      Node* temp = new Node(d);
      head = temp;
      tail = temp;
      
   }
   else{
    Node* temp = new Node(d);
    temp->next =head;
    head->prev = temp;
    head = temp;
   }
 } 

 void insertAtTail(Node* &tail, Node* &head, int d){

   //empty list
    if(tail ==NULL){
      Node* temp = new Node(d);
      tail = temp;
      head = temp;
      
   }
   else{
      Node*temp =new Node(d);
      tail->next =temp;
      temp->prev = temp;
      tail= temp;
   }
 }

 void insertAtPosition(Node* &tail,Node* &head, int position, int d){
   //insert at start
   if(position==1){
      insertAtHead(tail,head,d);
      return ;
   }
   Node* temp =head;
   int cnt =1;
   while(cnt<position-1){
      temp= temp->next;
      cnt++;
   }

   //insert at tail
   if(temp->next ==NULL){
      insertAtTail(tail,head, d);
      return;
   }

   // creating a node for d
   Node* nodeToInsert = new Node(d);
   nodeToInsert->next = temp->next;
   temp->next->prev =nodeToInsert;
   temp->next = nodeToInsert;
   nodeToInsert->prev = temp;
 }

 //deletion
void deleteNode(int position, Node* &head){
    //deleting first node
    if(position==1){
        Node* temp=head;
        temp->next->prev = NULL;
        head =temp->next;
        temp->next =NULL;
        //memory free krdo
        delete temp; 
    }
    else{
        //deleting any middle or last node
        Node*current=head;
        Node*prev=NULL;
        int cnt=1;
        while(cnt< position){
            prev=current;
            current =current->next;
            cnt++;
        }
        current ->prev =NULL;
        prev->next= current->next;
        current -> next = NULL;
        delete current;

    }
}
int main(){

Node* head =NULL;
Node* tail = NULL;

// cout<<getlength(head)<<endl;
// print (head);

insertAtHead(tail, head,12);
print(head);

insertAtHead(tail, head, 22);
print(head);

insertAtTail(tail,head, 35);
print(head);

insertAtPosition(tail, head, 3, 30);
print(head);

insertAtPosition(tail, head, 1, 300);
print(head);

cout<<"head "<<head->data<<endl;
cout<<"Tail "<<tail->data<<endl;
insertAtPosition(tail, head, 6, 3000);
print(head);

cout<<"head "<<head->data<<endl;
cout<<"Tail "<<tail->data<<endl;

deleteNode(3,head);
print(head);
return 0;
}
 