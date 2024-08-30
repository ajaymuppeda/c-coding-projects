
#include <stdio.h>
#include <stdlib.h>

// Define the structure for a linked list node
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Function to reverse the linked list
void reverseList(Node** head) {
    Node* prev = NULL;
    Node* current = *head;
    Node* next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    *head = prev;
}

// Function to print the linked list
void printList(Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    Node* head = NULL;

    // Insert nodes
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = 10;
    newNode->next = NULL;
    head = newNode;

    newNode = (Node*)malloc(sizeof(Node));
    newNode->data = 20;
    newNode->next = NULL;
    head->next = newNode;

    newNode = (Node*)malloc(sizeof(Node));
    newNode->data = 30;
    newNode->next = NULL;
    head->next->next = newNode;

    // Print the linked list
    printf("Linked List: ");
    printList(head);

    // Reverse the linked list
    reverseList(&head);

    // Print the reversed linked list
    printf("Reversed Linked List: ");
    printList(head);

    return 0;
}



