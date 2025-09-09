// A simple menu-driven program to demonstrate stack operations in C
// using an array. The program allows users to push, pop, peek, and display
// stack elements until they choose to exit.

#include <stdio.h>
#include <stdlib.h>
#define MAX 5  

int stack[MAX];
int top = -1;

void push() {
    int val;
    if (top == MAX - 1) {
        printf("\nStack Overflow! Cannot push element.\n");
    } else {
        printf("Enter value to push: ");
        scanf("%d", &val);
        stack[++top] = val;
        printf("%d pushed to stack.\n", val);
    }
}

void pop() {
    if (top == -1) {
        printf("\nStack Underflow! Cannot pop element.\n");
    } else {
        printf("%d popped from stack.\n", stack[top--]);
    }
}

void peek() {
    if (top == -1) {
        printf("\nStack is empty.\n");
    } else {
        printf("Top element is: %d\n", stack[top]);
    }
}

void display() {
    if (top == -1) {
        printf("\nStack is empty.\n");
    } else {
        printf("Stack elements are: ");
        for (int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice;
    while (1) {
        printf("\n--- Stack Menu ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: peek(); break;
            case 4: display(); break;
            case 5: exit(0);
            default: printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}
