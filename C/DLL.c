#include <stdio.h>

struct Node{
    struct Node* prev;
    int data;
    struct Node* next;
};

struct Node* linkedListTraversal(struct Node* head, int data){
    struct Node *head=malloc(sizeof(struct Node));
    struct Node *second=malloc(sizeof(struct Node));
    struct Node *third=malloc(sizeof(struct Node));
    // struct Node *fourth=malloc(sizeof(struct Node));

    head->prev=NULL;
    head->data=10;
    head->next=second;

    second->prev=head;
    second->data=30;
    second->next=third;

    third->prev=head;
    third->data=50;    
    third->next=NULL;
}

int main(){

}