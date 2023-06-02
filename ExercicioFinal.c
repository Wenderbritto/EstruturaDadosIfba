/*A fabrica WK produz uma quantidade de automoveis por dia e deseja fazer um 
levantamento sobre essa producao. Escreva um programa que leia a quantidade
de automoveis produzidas diariamente, enquanto nao for digitado um numero 
negativo. Ao final o programa deve mostrar na tela a qantidade total de 
automoveis produzida, a quantidade de dias que foi considerada (ou seja, e
a quantidade de numeros digitados) e a quantidade media de carros produzida 
por dia.*/

#include <stdio.h>

int main() {


  int automoveis=0;
  int total=0,dias=0;

  
  for(int i=1; i!=0; i++){
  printf("Digite a quantidade de automoveis no dia %d: ",i);
  scanf("%d",&automoveis);

    if(automoveis <0){
      break;
    }

    total+=automoveis;
    dias++;

  }

  int media= total/dias;

  printf("\nQuantidade total de automoveis produzidos: %d\n",total);
  printf("Quantidade de dias: %d\n",dias);
  printf("Quantidade media de carros: %d\n",media);

}

