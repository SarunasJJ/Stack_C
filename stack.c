#include "stack.h"

Stack *stackCreate(int size){
    Stack *bottom = (Stack*)malloc(sizeof(Stack));
    Stack *previous;
    bottom->previous = NULL;
    bottom->data = 0;
    bottom->next = NULL;
    previous = bottom;
    for(int i=1; i<size; ++i){
        Stack *current = (Stack*)malloc(sizeof(Stack));
        current->previous = previous;
        previous->next = current;
        current->next = NULL;
        current->data = 0;
        previous = current;
    }
    return bottom;
}
int stackDone(Stack **bottom){
    if(stackIsEmpty(*bottom)!=TRUE){
        int size = stackSize(*bottom);
        Stack *current = (*bottom);
        for(int i=0; i<size-1; ++i){
            current = current->next;
            current->previous->next = NULL;
            current->previous->previous = NULL;
            free(current->previous);
        }
        free(current);
        return TRUE;
    } else return FALSE;
}

int stackIsEmpty(Stack *bottom){
    if(bottom->data == 0){
        return TRUE;
    } else {
        return FALSE;
    }
}
int stackIsFull(Stack *bottom){
    if(stackSize(bottom) == stackCount(bottom)){
        return TRUE;
    }
    else return FALSE;
}
int stackPush(int data, Stack *bottom){
    Stack *current = bottom;
    if(stackIsFull(bottom)!=TRUE){
        if(stackIsEmpty(bottom)==TRUE){
            bottom->data = data;
            return TRUE;
        } else{
            while(current->data != 0){
                current = current->next;
            }
            current->data = data;
            return TRUE;
        }
    } else {
        while(current->next!=NULL){
            current = current->next;
        }
        Stack *new = (Stack*)malloc(sizeof(Stack));
        current->next = new;
        new->previous = current;
        new->next = NULL;
        new->data = data;
        return TRUE;
    }
    return FALSE;
}
int stackPop(Stack *bottom){
    if(stackIsEmpty(bottom)!=TRUE){
        Stack *current = bottom;
        int data;
        while(current->next->data != 0){
            current = current->next;
        }
        data = current->data;
        current->data = 0;
        return data;
    }
    else return FALSE;
}
int stackBottom(Stack *bottom){
    if(stackIsEmpty(bottom)!=TRUE)
    {
        return bottom->data;
    } else return FALSE;
}
int stackTop(Stack *bottom){
    if(stackIsEmpty(bottom)!=TRUE){
        Stack *current = bottom;
        while(current->next->data!=0){
            current = current->next;
        }
        return current->data;
    }
    else return FALSE;
}
int stackCount(Stack *bottom){
    int counter=0;
    if(stackIsEmpty(bottom)!=TRUE){
        Stack *current = bottom;
        while(current->data!=0){
            ++counter;
            current = current->next;
        }
        return counter;
    } else return counter;
}
int stackMakeEmpty(Stack **bottom){
    if(stackIsEmpty(*bottom)!=TRUE){
        Stack *current = (*bottom);
        while(current->data!=0){
            current->data = 0;
            current = current->next;
        }
    }
    else return FALSE;
    return TRUE;
}
Stack *stackClone(Stack *bottom){
    int size = stackSize(bottom);
    Stack *newStack = stackCreate(size);
    newStack->data = bottom->data;
    newStack->next = bottom->next;
    newStack->previous = bottom->previous;
    Stack *current = bottom;
    Stack *currentNew = newStack;
    for(int i=1; i<size; ++i){
        current = current->next;
        currentNew = currentNew->next;
        currentNew->data = current->data;
        currentNew->next = current->next;
        currentNew->previous = current->previous;
    }
    return newStack;
}
int stackSize(Stack *bottom){
    int size=0;
    Stack *current = bottom;
    if(stackIsEmpty(bottom)!=TRUE){
        ++size;
    }
    while(current->next != NULL){
        ++size;
        current = current->next;
    }
    return size;
}