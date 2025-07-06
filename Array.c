#include <stdio.h>
#define SIZE 100

int array[SIZE];
int count = 0;

void create(int n)
{
    if (n > SIZE)
    {
        printf("Size exceeds the maximum limit!\n");
        return;
    }
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    count = n;
}

void insert(int element, int position)
{
    if (count >= SIZE)
    {
        printf("Array is full. Insertion not possible.\n");
        return;
    }
    if (position < 0 || position > count)
    {
        printf("Invalid position!\n");
        return;
    }
    for (int i = count; i > position; i--)
    {
        array[i] = array[i - 1];
    }
    array[position] = element;
    count++;
}

void delete(int position)
{
    if (position < 0 || position >= count)
    {
        printf("Invalid position!\n");
        return;
    }
    for (int i = position; i < count - 1; i++)
    {
        array[i] = array[i + 1];
    }
    count--;
    printf("Element deleted successfully.\n");
}

void search(int element)
{
    for (int i = 0; i < count; i++)
    {
        if (array[i] == element)
        {
            printf("Element %d found at position %d.\n", element, i);
            return;
        }
    }
    printf("Element %d not found.\n", element);
}

void display()
{
    if (count == 0)
    {
        printf("Array is empty.\n");
        return;
    }
    printf("Array elements are:");
    for (int i = 0; i < count; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main()
{
    int choice, n, element, position;
    while (1)
    {
        printf("\n----- Menu -----\n");
        printf("1. Create\n2. Insert\n3. Delete\n4. Search\n5. Display\n6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("How many elements do you want to create? ");
            scanf("%d", &n);
            create(n);
            break;
        case 2:
            printf("Enter element to insert: ");
            scanf("%d", &element);
            printf("Enter position to insert (0-based index): ");
            scanf("%d", &position);
            insert(element, position);
            break;
        case 3:
            printf("Enter position to delete (0-based index): ");
            scanf("%d", &position);
            delete(position);
            break;
        case 4:
            printf("Enter element to search: ");
            scanf("%d", &element);
            search(element);
            break;
        case 5:
            display();
            break;
        case 6:
            printf("Exiting the program.\n");
            return 0;
        default:
            printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}
