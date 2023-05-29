#include <stdio.h>

void selection (int vet[], int n){

    int menor, aux;

    for(int i=0; i<n-1; i ++){

        menor= i;

        for(int j= i+1; j<n; j++){

            if(vet[menor] > vet[j]){

                menor=j;
            }

            aux= vet[i];
            vet[i]= vet[menor];
            vet[menor]= aux;
        }
    }

}

int main(){

    int vetor[10] = {3,6,4,8,9,7,0,1,2,5};

    selection(vetor, 10);
     
    for(int i=0; i<10; i++){

        printf("%d ",vetor[i]);
    }



}