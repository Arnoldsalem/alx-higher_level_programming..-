#include <stdio.h>
#include <stdlib.h>
typedef struct listint_t {
    int data;
    struct listint_t* next;
} listint_t;

// Function to insert a node into a sorted singly linked list
listint_t* insert_node(listint_t** head, int number) {
    // Create a new node
    listint_t* new_node = (listint_t*)malloc(sizeof(listint_t));
    if (new_node == NULL) {
        // Memory allocation failed
        return NULL;
    }

    new_node->data = number;
    new_node->next = NULL;

    // If the list is empty or the new node should be inserted at the beginning
    if (*head == NULL || number < (*head)->data) {
        new_node->next = *head;
        *head = new_node;
        return new_node;
    }

    // Traverse the list to find the correct position to insert the new node
    listint_t* current = *head;
    while (current->next != NULL && current->next->data < number) {
        current = current->next;
    }

    // Insert the new node into the list
    new_node->next = current->next;
    current->next = new_node;

    return new_node;
}

// Function to print the linked list
void print_list(listint_t* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

// Function to free the memory allocated for the linked list
void free_list(listint_t* head) {
    listint_t* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main() 
{
    listint_t* head = NULL;

    insert_node(&head, 10);
    insert_node(&head, 20);
    insert_node(&head, 30);
    insert_node(&head, 15);

    printf("Original Linked List: ");
    print_list(head);

    free_list(head);

    return 0;
