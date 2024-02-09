#include <stdio.h>
#include <stdlib.h>

struct Node{
    struct Node* prev;
    int data;
    struct Node* next;
};

struct Node* addToEmpty(struct Node* head,  int data){
    struct Node* temp = malloc(sizeof(struct Node));
    temp->prev=NULL;        
    temp->data=data;        
    temp->next=NULL;        
    head = temp;
    
    return head;
};

struct Node* addToLinkedList(struct Node* head, int data){
    struct Node* temp = malloc(sizeof(struct Node));
    temp->prev = NULL;
    temp->data = data;
    temp->prev = NULL;

    if (head == NULL){
        head = temp;
    } else {
        struct Node* current = head;
        while (current->next != NULL){
            current = current->next;
        }      
        current->next = temp;
        temp->prev = current;
    }
    return head;
}

void printList(struct Node* head){
    struct Node* current = head;
    while (current != NULL){
        printf("%d\n", current->data);
        current = current->next;
    }
    printf("\n");
}

int main(){
    struct Node* head = NULL;

    head = addToLinkedList(head, 45);
    head = addToLinkedList(head, 46);
    head = addToLinkedList(head, 47);

    printf("Linked List: ");
    printList(head);

    return 0;
}