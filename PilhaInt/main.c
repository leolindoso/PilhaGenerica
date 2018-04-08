#include <stdio.h>
#include <stdlib.h>
#include "PilhaInt.h"

int main(){

    stack *stk;
    int modo = 100,tam,i,n;


    while(modo == 100){
        printf("1-Cria Pilha\n2-Adiciona Elemento à Pilha\n3-Checkar Ultimo Elemento da Pilha"
                       "\n4-Retirar Ultimo Elemento da Pilha\n5-Destruir Pilha e Sair\n6-Inserir Elemento em tal posição"
                       "\n7-Inserir Elemento na Pilha em tal posição mantendo os elementos do topo\n8-Checkar Pilha\n0-Sair\n");
        scanf("%i",&modo);
        if (modo == 1){
            if(stk == NULL){
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
            printf("olá\n");
            topaux = (char*)stkTop(stk);
            if(topaux != NULL){

            }else{
                printf("Falha ao Checar Ultimo Elemento!\n");
            }
            //printf("O Ultimo Numero da Pilha é %s",topaux);
            modo = 100;
        }

        if(modo == 6){
            printf("Informe um numero para pôr na Pilha: \n");
            scanf("%i",&i);
            printf("Informe em qual posição quer por a partir do ultimo: \n");
            scanf("%i",&n);

            for(int j = 0;j < n;j++){
                stkPop(stk);
            }
            stkPush(stk,(void*)i);
            modo = 100;
        }
        if(modo == 7){
            stack *aux;
            void *elm;
            aux = stkCreate(1000);

            printf("Informe um numero para pôr na Pilha: \n");
            scanf("%i",&i);
            printf("Informe em qual posição quer por a partir do ultimo: \n");
            scanf("%i",&n);
            if(aux != NULL){
                for(int j = 0;j < n;j++){
                    elm = stkPop(stk);
                    printf("Tirando %i\n",(int)elm);
                    stkPush(aux,elm);
                }
                stkPush(stk,(void*)i);
                stk->max++;
                printf("Botando %i\n",i);

                for(int j = 0;j < n;j++){
                    elm = stkPop(aux);
                    printf("Botando %i\n",(int)elm);
                    stkPush(stk,elm);
                }

                

            }

            modo = 100;
        }
        if(modo == 8){
            printf("stk->top: %i\n",stk->top);
            for(int k = 0;k <= stk->top;k++){
                printf("%i\n",(int)stk->vet[k]);
            }
            modo = 100;
        }

    }

}