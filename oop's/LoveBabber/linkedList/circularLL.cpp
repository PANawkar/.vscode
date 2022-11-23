#include<iostream>
#include<map>
using namespace std;
class Node{
    public: 
    int data;
    Node* next;
    //constructor
    Node(int d){
        this->data = d;
        this->next = NULL;
    }
    ~Node(){
        int value = this->data;
        if(this->next!=NULL){
            delete next;
            next =NULL; 
        }
        cout<<"memory is free for node with data "<<value<<endl;
    }
};

void insertNode(Node* &tail, int element , int d){
    // assume that the element present in the list
    //empty list
    if(tail==NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else{
        //non empty list
        Node* curr= tail;

        while(curr->data!=element){
            curr = curr->next;
        }
        //element found curr is representing curr node
        Node* temp = new Node(d);
        temp->next= curr->next;
        curr->next = temp;
    }
}
void print(Node* &tail){
    Node*temp =tail;
    if(tail==NULL){
        cout<<"List is empty"<<endl;
    }
    do {
        cout<<tail->data<<" ";
        tail= tail->next;
    }while(tail != temp);
        cout<<endl;
    
}

void deleteNode(Node* &tail, int value){
    // empty list
    if(tail==NULL){
        cout<<"List is Empty"<<endl;
        return ;
    }
    else{
        //non empty
        // assuming value is present in the linked list
        Node* prev =tail;
        Node* curr = prev->next;

        while(curr->data !=value){
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr ->next;

        //1 Node Linked List
        if(curr == prev ){
            tail =NULL;
        }
        // 2 Node Linked List
        if(tail==curr){
            tail= prev;
        }
        curr->next =NULL;
        delete curr;
    }
}

// check is circluar or not
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

bool detectLoop(Node* &head){
    if(head ==NULL){
        return false; 
    }
    map<Node*, bool> visited;
    Node* temp = head;
    while(temp!=NULL){
        // cycle is present
        if(visited[temp]==true){
            return true;
        }
        visited[temp]= true;
        temp = temp->next;
    }
    return false;
}


Node*  floydDetectLoop(Node* &head){
    if(head==NULL){
        return NULL;
    }
    Node* slow = head;
    Node* fast =head;
    while(slow!=NULL && fast!=NULL){
        fast = fast->next;
        if(fast!=NULL){
            fast = fast->next;
        }
        slow = slow ->next;
        if(slow==fast){
            return slow;
        }
    }
    return NULL;
        
}

Node* getStartingPoint(Node* &head){
    if(head==NULL){
        return NULL;
    }
    Node* intersection = floydDetectLoop(head);
    Node* slow = head;

    while(slow !=intersection){
        slow = slow->next;
        intersection =intersection->next;
    }
    return slow;
}
int main(){
Node* tail =NULL;
Node* head = NULL;
//empty list me insert krte hai
insertNode(tail, 5,3); 
print(tail);

insertNode(tail, 3,5); 
print(tail);

insertNode(tail,5,7); 
print(tail);
/*
deleteNode(tail , 5);
print(tail);

deleteNode(tail , 7);
print(tail);

deleteNode(tail , 3);
print(tail);
*/
// tail->next = head;
if(floydDetectLoop(head)!=NULL){
    cout<<"cycle is  present"<<endl;

}
else{
    cout<<"cycle is absent"<<endl;
}
return 0;
}
