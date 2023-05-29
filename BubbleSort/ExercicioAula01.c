/*Faca um programa que leia o tamanho de um vetor, depois leia os valores 
digitados pelo usuário no vetor e ordene esses números. */

void bolha(int vetor[], int tamanho){
    
    int aux, i, j;

    for(j= tamanho-1; j>=1; j--){

        for(i=0; i<j; i++){

            if(vetor[i] > vetor[i+1]){

                aux = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = aux;
            }

        }
    }
}

int main(void){


    int tamanho_vetor, i, vet;

    printf("Digite o tamanho do vetor: ");
    scanf("%d",&tamanho_vetor);

    int vetor[tamanho_vetor-1];

    for(i=0; i<tamanho_vetor; i++){

        printf("Digite o valor do vetor na posicao %d: ",i);
        scanf("%d",&vetor[i]);
    }

    bolha(vetor, tamanho_vetor);

    printf("Valores ordenados: \n");


    for(vet=0; vet<tamanho_vetor; vet++){

        printf("%d ",vetor[vet]);

    }








}