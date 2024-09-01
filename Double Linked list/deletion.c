
#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the double linked list
typedef struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
} Node;

// Function to create a new node
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

// Function to insert a node at the beginning of the list
void insertAtBeginning(Node** head, int data) {
    Node* newNode = createNode(data);
    newNode->next = *head;
    if (*head != NULL) {
        (*head)->prev = newNode;
    }
    *head = newNode;
}

// Function to insert a node at the end of the list
void insertAtEnd(Node** head, Node** tail, int data) {
    Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        *tail = newNode;
    } else {
        (*tail)->next = newNode;
        newNode->prev = *tail;
        *tail = newNode;
    }
}

// Function to delete a node with a specific data
void deleteNode(Node** head, Node** tail, int data) {
    Node* temp = *head;
    while (temp != NULL) {
        if (temp->data == data) {
            if (temp->prev != NULL) {
                temp->prev->next = temp->next;
            } else {
                *head = temp->next;
            }
            if (temp->next != NULL) {
                temp->next->prev = temp->prev;
            } else {
                *tail = temp->prev;
            }
            free(temp);
            return;
        }
        temp = temp->next;
    }
}

// Function to print the double linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}



int main() {
    Node* head = NULL;
    Node* tail = NULL;

    // Insert nodes into the list
    insertAtEnd(&head, &tail, 1);
    insertAtEnd(&head, &tail, 2);
    insertAtEnd(&head, &tail, 3);
    insertAtEnd(&head, &tail, 4);
    insertAtEnd(&head, &tail, 5);

    printf("Original List: ");
    printList(head);

    // Delete a node
    deleteNode(&head, &tail, 3);

    printf("List after deletion: ");
    printList(head);

  

    return 0;
}