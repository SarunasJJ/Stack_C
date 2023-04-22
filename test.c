#include "stack.h"
#include <assert.h>
int main(){
    Stack *bottomOfStack = stackCreate(5);
    Stack *stackCloneBottom;

    stackPush(4,bottomOfStack);
    assert(stackPop(bottomOfStack)==4);
    stackPush(14, bottomOfStack);
    stackPush(555, bottomOfStack);
    assert(stackTop(bottomOfStack)==555);
    assert(stackBottom(bottomOfStack)==14);
    stackPush(13,bottomOfStack);
    assert(stackCount(bottomOfStack)==3);
    assert(stackIsEmpty(bottomOfStack)==FALSE);
    stackPush(123, bottomOfStack);
    stackPush(23, bottomOfStack);
    assert(stackIsFull(bottomOfStack)==TRUE);

    stackCloneBottom = stackClone(bottomOfStack);
    assert(stackCount(stackCloneBottom)==5);

    return 0;
}