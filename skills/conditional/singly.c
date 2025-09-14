// #include <stdio.h>
// #include <stdlib.h>
// struct Node {
//     int data;
//     struct Node* next;
// };
// void insertAtBeginning(struct Node** head_ref, int new_data) {
//     struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
//     new_node->data = new_data;
//     new_node->next = *head_ref;
//     *head_ref = new_node;
// }
// void insertAtEnd(struct Node** head_ref, int new_data) {
//     struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
//     struct Node* last = *head_ref;

//     new_node->data = new_data;
//     new_node->next = NULL;

//     if (*head_ref == NULL) {
//         *head_ref = new_node;
//         return;
//     }

//     while (last->next != NULL) {
//         last = last->next;
//     }
//     last->next = new_node;
// }
// void insertAtPosition(struct Node** head_ref, int position, int new_data) {
//     struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
//     struct Node* temp = *head_ref;

//     new_node->data = new_data;
//     if (position == 1) { 
//         new_node->next = *head_ref;
//         *head_ref = new_node;
//         return;
//     }
//     for (int i = 1; temp != NULL && i < position - 1; i++) {
//         temp = temp->next;
//     }

//     if (temp == NULL) { 
//         printf("Position out of bounds.\n");
//         free(new_node);
//         return;
//     }

//     new_node->next = temp->next;
//     temp->next = new_node;
// }
// void printList(struct Node* node) {
//     while (node != NULL) {
//         printf("%d -> ", node->data);
//         node = node->next;
//     }
//     printf("NULL\n");
// }
// int main() {
//     printf("Chirag\n");
//     printf("roll no=2301920100110\n");
//     struct Node* head = NULL;
//     insertAtBeginning(&head, 1);
//     insertAtEnd(&head, 2);
//     insertAtPosition(&head, 2, 3);
//     printf("Linked list: ");
//     printList(head);
//     return 0;
// }
#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
void deleteFromBeginning(struct Node** head_ref) {
    if (*head_ref == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* temp = *head_ref;
    *head_ref = temp->next;
    free(temp);
    printf("Deleted from beginning.\n");
}
void deleteFromEnd(struct Node** head_ref) {
    if (*head_ref == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* temp = *head_ref;
    if (temp->next == NULL) { 
        *head_ref = NULL;
        free(temp);
        printf("Deleted from end.\n");
        return;
    }

    while (temp->next->next != NULL) {
        temp = temp->next;
    }

    struct Node* last = temp->next;
    temp->next = NULL;
    free(last);
    printf("Deleted from end.\n");
}
void deleteFromPosition(struct Node** head_ref, int position) {
    if (*head_ref == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* temp = *head_ref;

    if (position == 1) {  
        *head_ref = temp->next;
        free(temp);
        printf("Deleted from position %d.\n", position);
        return;
    }

    for (int i = 1; temp != NULL && i < position - 1; i++) {
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL) { 
        printf("Position out of bounds.\n");
        return;
    }

    struct Node* next = temp->next->next;
    free(temp->next);
    temp->next = next;
    printf("Deleted from position %d.\n", position);
}
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}
void insertAtEnd(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last = *head_ref;
    
    new_node->data = new_data;
    new_node->next = NULL;

    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }

    while (last->next != NULL) {
        last = last->next;
    }
    last->next = new_node;
}

int main() {
    struct Node* head = NULL;
    printf("Devansh Mishra\n");
    printf("roll.no=2301920100114\n");
    
    insertAtEnd(&head, 1);
    insertAtEnd(&head, 2);
    insertAtEnd(&head, 3);
    insertAtEnd(&head, 4);

    printf("Initial linked list: ");
    printList(head);

    deleteFromBeginning(&head);
    printf("After deleting from beginning: ");
    printList(head);

    deleteFromEnd(&head);
    printf("After deleting from end: ");
    printList(head);

    deleteFromPosition(&head, 2);
    printf("After deleting from position 2: ");
    printList(head);

    return 0;
}
