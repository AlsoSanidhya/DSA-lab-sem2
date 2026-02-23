//insertion at the given position 
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *start = NULL;

// Insert at beginning (used when position = 1)
void insert_beg(int value) {
    struct node *new_node;
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = value;
    new_node->next = start;
    start = new_node;
}

// Insert at given position
void insert_pos(int value, int pos) {
    struct node *new_node, *temp;
    int i;

    // If position is 1, insert at beginning
    if (pos == 1) {
        insert_beg(value);
        return;
    }

    new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL) {
        printf("Memory not available\n");
        return;
    }

    new_node->data = value;

    temp = start;
    for (i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Invalid position\n");
        return;
    }

    new_node->next = temp->next;
    temp->next = new_node;
}

// Display list
void display() {
    struct node *temp = start;
    printf("Linked list: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    int n, value, pos, i;

    // Create list at beginning
    printf("How many nodes to create: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter data: ");
        scanf("%d", &value);
        insert_beg(value);
    }

    display();

    // Insert at given position
    printf("Enter value to insert: ");
    scanf("%d", &value);
    printf("Enter position: ");
    scanf("%d", &pos);

    insert_pos(value, pos);
    display();

    return 0;
}



