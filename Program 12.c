/* Program 12 - Stack Operations using Array- push(),pop() and peek()@Treesa Jose
Completed on: 11-07-2025 */
#include <stdio.h>

#define SIZE 5

void push(int stack[], int *top, int value)
{
    if (*top + 1 == SIZE)
        printf("Error: Stack is full\n");
    
    else
    {
        stack[++(*top)] = value;
        printf("Pushed: %d\n", value);
    }
}

void pop(int stack[], int *top)
{
    if (*top == -1)
        printf("Error: Stack is empty\n");
    
    else
        printf("Popped: %d\n", stack[(*top)--]);
    
}

void peek(int stack[], int top)
{
    if (top == -1)
        printf("Error: Stack is empty\n");
    
    else
        printf("Top element: %d\n", stack[top]);
}

void display(int stack[], int top)
{
    if (top == -1)
        printf("Stack is empty\n");

    else
    {
        printf("Stack elements: ");
        int i;
        for (i = top; i >= 0; i--)
            printf("\n%d ", stack[i]);
            
        printf("\n");
    }
}

int menu()
{
    int choice;
    printf("\nMENU\nPUSH-1\nPOP-2\nPEEK-3\nDISPLAY-4\nEXIT-5\nEnter your choice: ");
    scanf("%d", &choice);
    return choice;
}

void stackOperations()
{
    int stack[SIZE];
    int top = -1;
    int value, choice;

    while ((choice = menu()) != 5)
    {
        switch (choice)
        {
        case 1:
            printf("Enter value to push: ");
            scanf("%d", &value);
            push(stack, &top, value);
            break;
        case 2:
            pop(stack, &top);
            break;
        case 3:
            peek(stack, top);
            break;
        case 4:
            display(stack, top);
            break;
        default:
            printf("Invalid choice. Try again.\n");
        }
    }
}

int main()
{
    stackOperations();
    return 0;
}
