#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    int data;
    struct Node *next;
};

void printLinkedList(struct Node *node) {
    if (node == NULL) return; 

    while (node->next != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }

    printf("%d\n", node->data);
}

void insertAtHead(struct Node **head, int data) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    newNode->next = *head;
    *head = newNode;
}

void insertAtTail(struct Node **head, int data) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->next = NULL;
    newNode->data = data;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    struct Node *temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}

void insertAfterIndex(struct Node **head, int data, int atIndex) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    int currentIndex = 0;
    struct Node *temp = *head;

    for (int i = 0; i < atIndex; i++) {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}
Í
int main() {
    struct Node *head = NULL;

    insertAtTail(&head, 10);
    insertAtTail(&head, 11);
    insertAtTail(&head, 12);
    insertAtTail(&head, 14);
    insertAtTail(&head, 15);

    insertAfterIndex(&head, 13, 2);

    printLinkedList(head);

    return 0;
}

// void printLinkedList(struct Node *node) {
//     if (node == NULL) return;

//     while (node->next != NULL) {
//         printf("%d -> ", node->data);
//         node = node->next;
//     }
//     printf("%d\n", node->data);
// }

// void pushHead(struct Node **head, int data) {
//     struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

//     newNode->data = data;
//     newNode->next = *head;

//     *head = newNode;
// }

// void pushTail(struct Node **head, int data) {
//     struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
//     struct Node *temp = *head;

//     newNode->data = data;
//     newNode->next = NULL;

//     if (*head == NULL) {
//         *head = newNode;
//         return;
//     }

//     while (temp->next != NULL) {
//         temp = temp->next;
//     }

//     temp->next = newNode;
//     return;
// }

// // 7 -> 6 -> 5
// // 0    1    2

// void insertAt(struct Node **head, int data, int index) {
//     struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
//     struct Node *temp = *head;

//     newNode->next = NULL;
//     newNode->data = data;

//     if (temp != NULL) {
//     }
// }
