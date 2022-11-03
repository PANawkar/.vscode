#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * next;
    /* data */
};

void LinkedList(struct node* ptr){
    while(ptr!= NULL){
        printf(" -> % d" , ptr->data);
        ptr = ptr->next;
    }

}

// inseration at the head
struct node * insertatFirst(struct node  * head, int data){
    struct node* ptr= (struct node *)malloc(sizeof (struct node));
    ptr ->next=head;
    ptr ->data = data;
    return ptr;
}

// insert at index (insert in middle)
struct node * insertatIndex(struct node * head, int data, int index){
    struct node* ptr=(struct node *)malloc(sizeof(struct node));
    struct node * p =head;
    int i =0;
    while(i!= index-1){
        p=p->next;
        i++;
    }
    ptr->data= data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}// insert at end 
struct node *insertatEnd(struct node* head, int data){
    struct node*ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    struct node*p=head;
    while(p->next!=NULL){
        p=p->next;
        
    }
    p->next =ptr;
    ptr->next=NULL;
    return head;
}


int main()
{
    struct node * head;
    struct node * second;
    struct node * third;
    struct node * fourth;

    head = (struct node *)malloc(sizeof(struct node) );
    second = (struct node * )malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head -> data =6;
    head -> next = second;

    second -> data = 12;
    second -> next = third;

    third -> data = 18;
    third ->next = fourth;

    fourth -> data = 24;
    fourth ->next = NULL;


    printf("\nBefore insertion\n");
   head = insertatFirst(head, 56);
   head = insertatIndex(head,56,1);
    LinkedList(head);
    LinkedList(head);

    printf("\nAfter insertion\n");
    head - insertatEnd(head, 99);
    LinkedList(head);

    return 0;

}