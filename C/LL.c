#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void linkedListTraversal(struct Node* ptr){
    while (ptr != NULL) {
        printf("%d\n", ptr->data);
        ptr=ptr->next;
    }    
}

int main(){
    struct Node* head = malloc(sizeof(struct Node));
    struct Node* second = malloc(sizeof(struct Node));
    struct Node* third = malloc(sizeof(struct Node));

    head->data=7;
    head->next=second;

    second->data=14;
    second->next=third;

    third->data=21;
    third->next=NULL;

    linkedListTraversal(head);
    return 0;
}