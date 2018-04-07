//
// Created by leolindoso on 07/04/18.

#ifndef PILHAINT_C_INCLUDED
#define PILHAINT_C_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include "PilhaInt.h"
#define TRUE 1
#define FALSE 0

stack *stkCreate(int max){
    stack *stk;
    if(max > 0){
        stk = (stack*)malloc(sizeof(stack));
        if(stk != NULL){
            stk->vet = (void**)malloc(sizeof(void*)*max);
            if(stk->vet != NULL){
                stk->max = max;
                stk->top =-1;
                return stk;
            }
            free(stk);
        }
    }
    return NULL;
}

int stkDestroy(stack *stk){
    if(stk != NULL){
        if(stk->top < 0){
            free(stk->vet);
            free(stk);
            return TRUE;
        }
    }
    return FALSE;
}

void *stkPop(stack *stk){
    void *top;
    if(stk != NULL){
        if(stk->top >= 0){
            top = stk->vet[stk->top];
            stk->top--;
            return top;
        }
    }
    return NULL;
}
void *stkTop(stack *stk){
    void *top;
    if(stk != NULL){
        if(stk->top >=0){
            top = stk->vet[stk->top];
            return top;
        }
    }
    return NULL;
}
int stkPush(stack *stk, void *elm){
    if(stk != NULL){
        if(stk->top < stk->max-1){
            stk->top++;
            stk->vet[stk->top] = elm;
            return TRUE;
        }
    }
    return FALSE;
}
#endif

