#ifndef STACK_H_
#define STACK_H_
#include <stdio.h>
#include <stdlib.h>

#define TRUE 1==1
#define FALSE !(TRUE)

typedef struct Stack{
    int data;
    struct Stack *next;
    struct Stack *previous;
} Stack;

Stack *stackCreate(int size);
int stackDone(Stack **bottom);
int stackIsEmpty(Stack *bottom);
int stackIsFull(Stack *bottom);
int stackPush(int data, Stack *bottom);
int stackPop(Stack *bottom);
int stackBottom(Stack *bottom);
int stackTop(Stack *bottom);
int stackCount(Stack *bottom);
int stackMakeEmpty(Stack **bottom);
Stack *stackClone(Stack *bottom);
int stackSize(Stack *bottom);

#endif