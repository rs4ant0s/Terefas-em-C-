#include <stdio.h>
#include <locale.h>

int main(){
      /*
    Uma institui��o de ensino realizou uma pesquisa sobre os eleitores de um munic�pio que participaram 
    numa dada elei��o. Crie um programa que leia o total de votos brancos, nulos e v�lidos. Calcule e 
    escreva a percentagem que cada um representa em rela��o ao total de eleitores.
    */
    setlocale(LC_ALL,"");
    float brancos, nulos, validos, total;
    printf("Digite o n� de votos em branco:");
    scanf("%f",&brancos);
    printf("Digite o n� de votos nulos:");
    scanf("%f",&nulos);
    printf("Digite o n� de votos v�lidos:");
    scanf("%f",&validos);
    total=(brancos+nulos+validos);
    printf("A percentagem de votos em branco foi %.2f%%",(brancos/total)*100);
    printf("\nA percentagem de votos nulos foi %.2f%%",(nulos/total)*100);
    printf("\nA percentagem  de votos validos foi %.2f%%",(validos/total)*100);
 

   return 0;
}