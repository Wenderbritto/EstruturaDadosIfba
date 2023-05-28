/*Faca um programa que leia um vetor de 10 numeros, ordene-os,
exiba-os, depois exiba o menor e omaior valor ue estao contidos
no vetor.*/

#include <stdio.h>
#include <conio.h>

void ordenar_insertion(int v[], int n){
    
    int j,x,i;

    for(i=1; i<n; i++){

        x= v[i];
        j= i-1;

        while(j>=0 && v[j]>x){

            v[j+1] = v[j];
            j= j-1;
        }
        v[j+1]= x;
    }
}

int main(void){

    int i;

    int vetor[10] = {2,8,7,9,4,0,1,5,6,3};

    ordenar_insertion(vetor, 10);

    printf("Valores ordenados: \n");

    for(i=0; i<10; i++){

        printf("%d ",vetor[i]);
    }

    printf("\nMenor: %d",vetor[0]);
    printf("\nMaior: %d",vetor[9]);
}