#include <stdio.h>
#include <stdlib.h>

#define max 10

// Creating Stack
typedef struct 
{
    int items[max];
    int top;

} stack;


void createStack(stack *s)
{
    s->top = -1;
}

// Checking if stack is empty or not (UnderFlow)
int isEmpty(stack *s)
{
    if (s->top == -1)
    {
        return 1;
    }

    else
    {
        return 0;
    }
    
}

// Chicking if stack is full or not (Overflow)
int isFull(stack *s)
{
    if (s->top == max-1)
    {
        return 1;
    }

    else
    {
        return 0;
    }
}

// Adding element into the stack
void push(stack *s, int item)
{
    if (isFull(s))
    {
        printf("Stack is full.");
        printf("\n");
    }

    else
    {
        s->top++;
        s->items[s->top] = item;
    }
}

// Removing an element from the stack
void pop(stack *s)
{
    if (isEmpty(s))
    {
        printf("Stack is Empty.");
        printf("\n");
    }

    else
    {
        printf("Popped item is: %d", s->items[s->top]);
        printf("\n");
        printf("\n");
        s->top--;
    }
}

// Printing stack
void displayStack(stack *s)
{
    int i;

    printf("Stack:");
    printf("\n");

    for (i= s->top; i>=0; i--)
    {
        printf("%d", s->items[i]);
        printf("\n");
    }
}


// Code starts from here
int main()
{
    stack *s1;

    s1 = (stack *) malloc(sizeof(s1));

    createStack(s1);

    push(s1, 1);
    push(s1, 2);
    push(s1, 3);
    push(s1, 4);
    push(s1, 5);
    push(s1, 6);
    push(s1, 7);

    displayStack(s1);

    pop(s1);

    displayStack(s1);

    return 0;
}