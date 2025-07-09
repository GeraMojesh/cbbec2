#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;
void create(int n) {
    int value;
    struct Node *newNode, *temp;
    for (int i = 0; i < n; i++) {
        printf("Enter value for node %d: ", i + 1);
        scanf("%d", &value);
        newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = value;
        newNode->next = NULL;
        if (head == NULL) {
            head = newNode;
        } else {
            temp = head;
            while (temp->next != NULL)
                temp = temp->next;
            temp->next = newNode;
        }
    }
}

void insert(int value, int pos) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    if (pos == 0) {
        newNode->next = head;
        head = newNode;
        return;
    }

    struct Node* temp = head;
    for (int i = 0; temp != NULL && i < pos - 1; i++) {
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Invalid position!\n");
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void delete(int pos) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct Node* temp = head;
    if (pos == 0) {
        head = head->next;
        free(temp);
        printf("Node deleted at position 0.\n");
        return;
    }
    struct Node* prev = NULL;
    for (int i = 0; temp != NULL && i < pos; i++) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Invalid position!\n");
        return;
    }
    prev->next = temp->next;
    free(temp);
    printf("Node deleted at position %d.\n", pos);
}

void search(int value) {
    struct Node* temp = head;
    int pos = 0;
    while (temp != NULL) {
        if (temp->data == value) {
            printf("Element %d found at position %d.\n", value, pos);
            return;
        }
        temp = temp->next;
        pos++;
    }
    printf("Element %d not found in the list.\n", value);
}

void display() {
    struct Node* temp = head;
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    printf("List elements: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    int choice, n, value, pos;
    while (1) {
        printf("\n--- Singly Linked List Menu ---\n");
        printf("1. Create\n2. Insert\n3. Delete\n4. Search\n5. Display\n6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("How many nodes to create? ");
                scanf("%d", &n);
                create(n);
                break;
            case 2:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                printf("Enter position to insert (0-based index): ");
                scanf("%d", &pos);
                insert(value, pos);
                break;
            case 3:
                printf("Enter position to delete (0-based index): ");
                scanf("%d", &pos);
                delete(pos);
                break;
            case 4:
                printf("Enter element to search: ");
                scanf("%d", &value);
                search(value);
                break;
            case 5:
                display();
                break;
            case 6:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice. Try again.\n");
        }
    }
    return 0;
}
