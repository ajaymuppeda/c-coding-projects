
#include <stdio.h>
#include <stdlib.h>

// Define the structure for a linked list node
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Function to calculate the length of the linked list
int length(Node* head) {
    int count = 0;
    Node* temp = head;

    while (temp != NULL) {
        count++;
        temp = temp->next;
    }

    return count;
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

    // Calculate the length of the linked list
    int len = length(head);

    // Print the length of the linked list
    printf("Length of Linked List: %d\n", len);

    return 0;
}
