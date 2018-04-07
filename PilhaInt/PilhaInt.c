//
// Created by leolindoso on 07/04/18.

#ifndef PILHAINT_C_INCLUDED
#define PILHAINT_C_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include "PilhaInt.h"

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

#endif

