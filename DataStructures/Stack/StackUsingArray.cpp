#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Stack {
    int size;
    int top;
    int *arrayPtr;
};

struct Stack *createStack(int size) {
    struct Stack *stack = (struct Stack *)malloc(sizeof(struct Stack));

    stack->top = -1;
    stack->size = size;
    stack->arrayPtr = (int *)malloc(stack->size * sizeof(struct Stack));

    return stack;
}

void push(struct Stack *stack, int data) {
    if (stack->top < stack->size - 1) {
        stack->top++;
        stack->arrayPtr[stack->top] = data;
    } else {
        printf("Error, struct is already full");
        return;
    }
}

int pop(struct Stack *stack) {
    int topValue = -1;

    if (stack->top == -1) {
        printf("Error, stack is empty");
    } else {
        topValue = stack->arrayPtr[stack->top];
        stack->top--;
    }

    return topValue;
}

int peek(struct Stack stack) {
    if (stack.top == -1) {
        printf("Error, stack is empty");
        return -1;
    }

    return stack.arrayPtr[stack.top];
}

int main() {
    struct Stack stack;
    stack.top = -1;
    stack.size = 5;
    stack.arrayPtr = (int *)malloc(stack.size * sizeof(int));

    push(&stack, 10);
    push(&stack, 20);
    printf("top: %d\n", peek(stack));
    push(&stack, 30);

    // printf("size: %d, top: %d, stackPtr: %p\n", stack->size, stack->top + 1,
    // stack->arrayPtr);

    for (int i = 0; i < stack.size; i++) {
        printf("%d ", stack.arrayPtr[i]);
    }

    return 0;
}
