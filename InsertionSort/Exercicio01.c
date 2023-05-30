/*Faça um programa que dado o vetor [2,4,35,50,23,17,9,12,27,5] e mostre:
a) O maior valor;
b) Média dos valores;
c) Os valores dispostos em ordem crescente;
d) Sub conjunto dos números primos que está no vetor.*/

#include <stdio.h>
#include <conio.h>

void ordenar(int vetor[], int n){

    int i, j, x;

    for(i=1; i<n; i++){

        x= vetor[i];
        j= i-1;

        while(j>=0 && vetor[j] > x){

            vetor[j+1] = vetor[j];
            j= j-1;
        }
        vetor[j+1] = x;
    }
}

int main(void){

    int i, maior, media;
    int vet[10]= {2,4,35,50,23,17,9,12,27,5};

    ordenar(vet, 9);

    for(i=0; i<10; i++){
        printf("Valores em ordem crescente: %d ",vet[i]);
    }

    printf("ola");



}