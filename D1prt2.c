#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *start = NULL;

// Insert at beginning
void insert_beg(int value) {
    struct node *new_node;

    new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL) {
        printf("Memory not available\n");
        return;
    }

    new_node->data = value;
    new_node->next = start;
    start = new_node;
}

// Display linked list
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
    int n, value, i;

    printf("How many nodes you want to create: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter data: ");
        scanf("%d", &value);
        insert_beg(value);   // insertion at beginning
    }

    display();
    return 0;
}
