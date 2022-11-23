#include<iostream>
#include<map>
using namespace std;
 class Node{
    public:
    int data;
    Node* next;

// when new node called constructor is  being use
    Node(int data){
        this->data=data;
        this->next=NULL;
    }

    //destructor
    ~Node(){
        int value=this->data;
        //memory free
        if(this->next!=NULL){
            delete next;
            this->next= NULL;   
        }
        cout<<"Memory is free for node with data "<<value<<endl;
    }



 };

 void insertAtHead(Node* &head, int data){

        //new node create
        Node* temp= new Node(data);
        temp -> next =head;
        head= temp;
 }

 void insertAtTail(Node* &tail, int data){

        Node* temp= new Node(data);
        tail->next=temp;
        tail =tail->next;

 }

//  void insertAtPosition(Node* &tail,Node* &head, int position, int data){

//         //insert at start
//         if(position==1){
//             insertAtHead(head, data);
//             return;
//         }

        
//         Node*temp=head;
//         int cnt=1;

//         //insert at last position
//         if(temp->next ==NULL){
//             insertAtTail(tail, data);
//             return;
//         }
//         while(cnt<position-1){
//             temp= temp->next;
//             cnt++;
//         }

//         //create a new node
//         Node* nodeToInsert = new Node(data);
//         nodeToInsert-> next= temp->next;
//         temp -> next = nodeToInsert;
//  }

void insertAtPosition(Node* &head, Node*&tail, int position, int data){
    Node*temp=head;
    int cnt=1;

    //for start position
    if(position==1){
        insertAtHead(head, data);
        return ;
    }

    //insert at last position
    if(temp->next==NULL){
        insertAtTail(tail,data);
        return ;
    }
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    //creating a node for data
    Node* nodetoInsert= new Node(data);
    nodetoInsert->next=temp->next;
    temp->next=nodetoInsert;
}

void deleteNode(int position, Node* &head){
    //deleting first node
    if(position==1){
        Node* temp=head;
        head = head->next;
        //memory free krdo
        temp->next = NULL; 
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
        prev->next= current->next;
        current -> next = NULL;
        delete current;

    }
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

void removeLoop(Node* &head){
    if(head==NULL){
        return;
    }
    Node* startOfLoop =getStartingPoint(head);
    Node* temp =startOfLoop;

    while(temp!= startOfLoop){
        temp =temp->next;
    }
    temp->next =NULL;
}

int main(){

Node* node1= new Node(20);
// cout<<node1 -> data<<endl;
// cout<< node1 ->next<<endl;

//head pointed to node
Node* head= node1;
Node* tail= node1;

print(head);
//insert a node

insertAtHead(head, 10);
print(head);

insertAtHead(head, 30);
print(head);



insertAtTail(tail, 40);
print(head);

insertAtTail(tail, 50);
print(head);

insertAtTail(tail, 60);
print(head);


// cout<<"Head "<<head->data<<endl;
// cout<<"Tail "<<tail->data<<endl;

// // insertAtPosition(tail,head,7 , 100);
// // print(head);

// cout<<"Head "<<head->data<<endl;
// cout<<"Tail "<<tail->data<<endl;

insertAtPosition(head,tail,7, 499);
print(head);



// cout<<"Head "<<head->data<<endl;
// cout<<"Tail "<<tail->data<<endl;

/*
deleteNode(1,head);
print(head);


deleteNode(6,head);
print(head);

deleteNode(3,head);
print(head);
*/

tail->next  =head->next;

if(detectLoop){
    cout<<"Loop is present "<<endl;
}
else{
    cout<<"Loop is absent "<<endl;
}

Node* detect = floydDetectLoop(head);
cout<<"detect the loop at node ->"<<detect->data<<endl;
Node* startOfLoop =getStartingPoint(head);
cout<<"starting node is "<<startOfLoop->data<<endl;

removeLoop(head);
print(head);
return 0;
}
