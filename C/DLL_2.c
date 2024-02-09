#include <stdio.h>
#include <stdlib.h>

struct Node {
    struct Node* prev;
    int data;
    struct Node* next;
};

// Function to traverse and print the doubly linked list
void doublyLinkedListTraversal(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("Element %d \n", current->data);
        current = current->next;
    }
    printf("\n");
}

// Function to insert a node at the beginning of the doubly linked list
struct Node* insertAtBeginning(struct Node* head, int data) {
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->prev = NULL;
    newNode->data = data;
    newNode->next = head;

    if (head != NULL) {
        head->prev = newNode;
    }

    return newNode;
}

// Function to insert a node at the end of the doubly linked list
// struct Node* insertAtEnd(struct Node* head, int data) {
//     struct Node* newNode = malloc(sizeof(struct Node));
//     newNode->data = data;
//     newNode->next = NULL;

//     if (head == NULL) {
//         newNode->prev = NULL;
//         return newNode;
//     }

//     struct Node* current = head;
//     while (current->next != NULL) {
//         current = current->next;
//     }

//     current->next = newNode;
//     newNode->prev = current;

//     return head;
// }

int main() {
    struct Node* head = NULL;

    // Insert nodes at the beginning
    head = insertAtBeginning(head, 30);
    head = insertAtBeginning(head, 20);
    head = insertAtBeginning(head, 10);

    printf("Doubly Linked List after insertion:\n");
    doublyLinkedListTraversal(head);

    // Insert nodes at the end
    // head = insertAtEnd(head, 40);
    // head = insertAtEnd(head, 50);

    // printf("Doubly Linked List after insertion at the end:\n");
    // doublyLinkedListTraversal(head);

    return 0;
}
