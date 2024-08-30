
#include <stdio.h>
#include <stdlib.h>

// Define the structure for a linked list node
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Function to delete a node with a specific key
void deleteNode(Node** head, int key) {
    Node* temp = *head;
    Node* prev = NULL;

    // Check if the node to be deleted is the head node
    if (temp != NULL && temp->data == key) {
        *head = temp->next;
        free(temp);
        return;
    }

    // Traverse the list to find the node to be deleted
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    // If the node is found, delete it
    if (temp != NULL) {
        prev->next = temp->next;
        free(temp);
    }
}

// Function to delete a node at a specific position
void deleteAtPosition(Node** head, int position) {
    Node* temp = *head;
    Node* prev = NULL;

    // Check if the position is 0 (head node)
    if (position == 0) {
        *head = temp->next;
        free(temp);
        return;
    }

    // Traverse the list to find the node to be deleted
    for (int i = 0; i < position - 1; i++) {
        prev = temp;
        temp = temp->next;
    }

    // If the node is found, delete it
    if (temp != NULL) {
        prev->next = temp->next;
        free(temp);
    }
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

    // Delete a node with a specific key
    deleteNode(&head, 20);

    // Print the linked list after deletion
    printf("Linked List after deletion: ");
    printList(head);

    // Delete a node at a specific position
    deleteAtPosition(&head, 0);

    // Print the linked list after deletion
    printf("Linked List after deletion: ");
    printList(head);

    return 0;
}
