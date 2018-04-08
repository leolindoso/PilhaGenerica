//
// Created by leolindoso on 07/04/18.
//

#ifndef PILHAINT_PILHAINT_H
#define PILHAINT_PILHAINT_H

typedef struct _stack_{
    int max;
    int top;
    void **vet;
}stack;

stack *stkCreate(int max);
int stkDestroy(stack *stk);
void *stkPop(stack *stk);
void *stkTop(stack *stk);
int stkPush(stack *stk,void *elm);

int PushINaPilha(stack *stk,void *i);

#endif //PILHAINT_PILHAINT_H
