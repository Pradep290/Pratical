#include <stdio.h>
#include <stdlib.h>
struct Node {
     int data;
    struct Node* next;
};

void append(struct Node** head_ref, int new_data) 
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = NULL;

    if (*head_ref == NULL) 
	{
        *head_ref = new_node;
        return;
    }

    struct Node* current = *head_ref;
    while (current->next != NULL) 
	{
        current = current->next;
    }
    current->next = new_node;
}

void printList(struct Node* node) 
{
    while (node != NULL)
	 {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

int main() 
{
    struct Node* head = NULL;
    
    append(&head, 1);
    append(&head, 2);
    append(&head, 3);
    append(&head, 4);

    printf("Linked list: ");
    printList(head);

    return 0;
}
