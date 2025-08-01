#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head;
struct node *create(int);
void insert_at_begin(int);
void insert_at_end(int);
void insert_at_position(int, int);
void delete_at_begin();
void delete_at_end();
void delete_at_position(int);
void search(int);
void update(int, int);
void print_list();
void print_list_reverse();
int size_of_list();
int getData();
int getPosition();
 int main()
{
    char user_active = 'Y';
    int user_choice;
    int data, position;
    while(user_active == 'Y' || user_active == 'y')
    {
        printf("\n\n------ Circular Singly Linked List -------\n");
        printf("\n1. Insert a node at beginning");
        printf("\n2. Insert a node at end");
        printf("\n3. Insert a node at given position");
        printf("\n\n4. Delete a node from beginning");
        printf("\n5. Delete a node from end");
        printf("\n6. Delete a node from given position");
        printf("\n\n7. Print list from beginning");
        printf("\n8. Print list from end");
        printf("\n9. Search a node data");
        printf("\n10. Update a node data");
        printf("\n11. Exit");
        printf("\n\n------------------------------\n");
        printf("\nEnter your choice: ");
        scanf("%d", &user_choice);
        printf("\n------------------------------\n");
        switch(user_choice)
        {
            case 1:
                printf("\nInserting a node at beginning");
                data = getData();
                insert_at_begin(data);
                break;
            case 2:
                printf("\nInserting a node at end");
                data = getData();
                insert_at_end(data);
                break;
            case 3:
                printf("\nInserting a node at the given position");
                data = getData();
                position = getPosition();
                insert_at_position(data, position);
                break;
            case 4:
                printf("\nDeleting a node from beginning\n");
                delete_at_begin();
                break;
            case 5:
                printf("\nDeleting a node from end\n");
                delete_at_end();
                break;
            case 6:
                printf("\nDelete a node from given position\n");
                position = getPosition();
                delete_at_position(position);
                break;
            case 7:
                printf("\nPrinting the list from beginning\n\n");
                print_list();
                break;
            case 8:
                printf("\nPrinting the list from end\n\n");
                if (head == NULL) {
                    printf("\n\tList is Empty!\n");
                }
                else
                {
                    print_list_reverse(head);
                }
                break;
            case 9:
                printf("\nSearching the node data");
                data = getData();
                search(data);
                break;
            case 10:
                printf("\nUpdating the node data");
                data = getData();
                position = getPosition();
                update(position, data);
                break;
            case 11:
                printf("\nProgram was terminated\n\n");
                return 0;
            default:
                printf("\n\t Invalid Choice\n");
        }
        printf("\n...............................\n");
        printf("\nDo you want to continue? (Y/N) : ");
        fflush(stdin);
        scanf(" %c", &user_active);
    }
    return 0;
}
struct node *create(int data)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));

    if (new_node == NULL)
    {
        printf("\nMemory can't be allocated.\n");
        return NULL;
    }

    new_node->data = data;
    new_node->next = NULL;

    return new_node;
}
void insert_at_begin(int data)
{
    struct node *new_node = create(data);
    if (new_node != NULL)
    {
        struct node *last = head;
        if (head == NULL)
        {
            head = new_node;
            new_node->next = head;
            return;
        }
        while (last->next != head)
        {
            last = last->next;
        }
        last->next = new_node;
        new_node->next = head;
        head = new_node;
    }
}
void insert_at_end(int data)
{
    struct node *new_node = create(data);
    if (new_node != NULL)
    {
        if (head == NULL)
        {
            head = new_node;
            new_node->next = head;
            return;
        }
        struct node *last = head;
        while (last->next != head)
        {
            last = last->next;
        }
        last->next = new_node;
        new_node->next = head;
    }
}
void insert_at_position(int position, int data)
{
    if (position <= 0)
    {
        printf("\nInvalid Position\n");
    }
    else if (head == NULL && position > 1)
    {
        printf("\nInvalid Position\n");
    }
    else if (head != NULL && position > size_of_list())
    {
        printf("\nInvalid Position\n");
    }
    else if (position == 1)
    {
        insert_at_begin(data);
    }
    else
    {
        struct node *new_node = create(data);
        if (new_node != NULL)
        {
            struct node *temp = head, *prev = NULL;
            int i = 1;
            while (++i <= position)
            {
                prev = temp;
                temp = temp->next;
            }
            prev->next = new_node;
            new_node->next = temp;
        }
    }
}
void delete_at_begin()
{
    if (head == NULL)
    {
        printf("\n List is Empty! \n");
        return;
    }
    struct node *last = head;
    struct node *temp = head;
    if (last->next == head)
    {
        free(last);
        head = NULL;
        return;
    }
    while (last->next != head)
    {
        last = last->next;
    }
    head = head->next;
    last->next = head;
    free(temp);
    temp = NULL;
}
void delete_at_end()
{
    if (head == NULL)
    {
        printf("\n List is Empty! \n");
        return;
    }
    struct node *prev = head;
    struct node *temp = head->next;
     if (prev->next == head)
    {
        free(prev);
        head = NULL;
        return;
    }
    while (temp->next != head)
    {
        prev = temp;
        temp = temp->next;
    }
    prev->next = head;
    free(temp);
    temp = NULL;
}
void delete_at_position(int position)
{
    if (position <= 0)
    {
        printf("\n Invalid Position \n");
    }
    else if (position > size_of_list())
    {
        printf("\n Invalid position \n");
    }
    else if (position == 1)
    {
        delete_at_begin();
    }
    else if (position == size_of_list())
    {
        delete_at_end();
    }
    else
    {
        struct node *temp = head;
        struct node *prev = NULL;
        int i = 1;
        while (i < position)
        {
            prev = temp;
            temp = temp->next;
            i += 1;
        }
        prev->next = temp->next;
        free(temp);
        temp = NULL;
    }
}
void print_list()
{
    struct node *temp = head;
    if (head == NULL)
    {
        printf("\n List is Empty! \n");
        return;
    }
    printf("\n");
    do
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    while (temp != head);
     printf("\n");
}
void print_list_reverse(struct node* temp)
{
    if (temp->next == head)
    {
        printf("%d ", temp->data);
        return;
    }
    print_list_reverse(temp->next);
    printf("%d ", temp->data);
}
void search(int key)
{
    struct node* temp = head;
    do
    {
        if (temp->data == key)
        {
            printf("\n\t Data Found\n");
            return;
        }
        temp = temp->next;
    }while (temp->next != head);
    printf("\n\tData not Found\n");
}
void update(int position, int new_data)
{
    if (position <= 0 || position > size_of_list())
    {
        printf("\n Invalid position\n");
        return;
    }
    struct node* temp = head;
    int i = 0;
    while (i <= position)
    {
        temp = temp->next;
        i += 1;
    }
    temp->data = new_data;
}
int size_of_list()
{
    if (head == NULL)
    {
        return 0;
    }
    struct node *temp = head;
    int count = 1;
    while (temp->next != head)
    {
        count += 1;
        temp = temp->next;
    }
    return count;
}
int getData()
{
    int data;
    printf("\n\nEnter Data: ");
    scanf("%d", &data);

    return data;
}
int getPosition()
{
    int pos;
    printf("\n\nEnter Position: ");
    scanf("%d", &pos);
    return pos;
}
