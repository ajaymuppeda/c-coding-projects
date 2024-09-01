
#include <stdio.h>
#include <stdlib.h>

// Define the structure for a doubly linked list node
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
    if (*head == NULL) {
        *head = newNode;
    } else {
        newNode->next = *head;
        (*head)->prev = newNode;
        *head = newNode;
    }
}

// Function to insert a node at the end of the list
void insertAtEnd(Node** head, int data) {
    Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
    } else {
        Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
}

// Function to insert a node at a specific position in the list
void insertAtPosition(Node** head, int data, int position) {
    Node* newNode = createNode(data);
    if (position == 0) {
        insertAtBeginning(head, data);
    } else {
        Node* temp = *head;
        for (int i = 0; i < position - 1; i++) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        newNode->prev = temp;
        if (temp->next != NULL) {
            temp->next->prev = newNode;
        }
        temp->next = newNode;
    }
}

// Function to insert a node before a specific node in the list
void insertBefore(Node** head, Node* node, int data) {
    Node* newNode = createNode(data);
    newNode->next = node;
    newNode->prev = node->prev;
    if (node->prev != NULL) {
        node->prev->next = newNode;
    } else {
        *head = newNode;
    }
    node->prev = newNode;
}

// Function to insert a node after a specific node in the list
void insertAfter(Node** head, Node* node, int data) {
    Node* newNode = createNode(data);
    newNode->next = node->next;
    newNode->prev = node;
    if (node->next != NULL) {
        node->next->prev = newNode;
    }
    node->next = newNode;
}
// Function to print the doubly linked list
void printList(Node* head) {
    while (head != NULL) {
        printf("%d <-> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    Node* head = NULL;

    // Insert nodes at the beginning and end of the list
    insertAtBeginning(&head, 10);
    insertAtEnd(&head, 20);
    insertAtBeginning(&head, 30);
    insertAtEnd(&head, 40);

    // Print the doubly linked list
    printf("Doubly Linked List: ");
    printList(head);



    return 0;
}