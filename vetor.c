#include<stdio.h>
#include<stdlib.h>

void main(){
	int tamanho=10;
     int i;
     int posicao[tamanho];

     for(i=0;i<tamanho;i++){
          printf("Digite o valor desejado %d: ",i+1);
          scanf("%d", &posicao[i]);
                           }
     for(i=0;i<tamanho;i++){
          posicao[i] = posicao[i]*2;
                            }
     for (i=0;i<tamanho;i++){
	printf("numeros na posicao %d tem o valor %d\n",i,posicao[i]);
                            }
}
