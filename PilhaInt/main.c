#include <stdio.h>
#include <stdlib.h>
#include "PilhaInt.h"

int main(){

    stack *stk;
    int modo = 100,tam;

    while(modo == 100){
        printf("1-Cria Pilha\n2-Adiciona Elemento à Pilha\n3-Checkar Ultimo Elemento da Pilha"
                       "\n4-Retirar Ultimo Elemento da Pilha\n5-Destruir Pilha e Sair\n0-Sair\n");
        scanf("%i",&modo);
        if (modo == 1){
            if(stk != NULL){
                printf("Informe a quantidade de elementos que quer botar na pilha: \n");
                scanf("%i",&tam);
                stk = stkCreate(tam);
                if (stk != NULL){
                    printf("Pilha criada com Sucesso!\n");
                }else{
                    printf("Falha ao criar Pilha!\n");
                }
            }else{
                printf("Ja ta criado\n");
            }
            modo = 100;
        }
        if(modo == 2){
            int x;
            printf("Informe qual numero quer colocar na Pilha: \n");
            scanf("%i",&x);
            int flag = stkPush(stk,(void*)x);
            if (flag == 1){
                printf("Elemento Inserido com Sucesso!\n");
            }else{
                printf("Falha ao Inserir Elemento!\n");
            }
            modo = 100;
        }
        if(modo == 3){
            char *topaux;
            topaux = (char*)stkTop(stk);
            if(topaux != NULL){

            }else{
                printf("Falha ao Checar Ultimo Elemento!\n");
            }
            //printf("O Ultimo Numero da Pilha é %s",topaux);
        }
        modo = 100;
    }
}