#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h>
//#include <windows.h>

#define NOTAS 10

void menu();
void recolha(float lista[]);
void mostra_notas(float lista[]);
void media_notas(float lista[]);
void alterar_notas(float lista[]);
void maior_nota(float lista[]);
void contagem_aprovados(float lista[]);
void contagem_reprovados(float lista[]);

int main(){
   setlocale(LC_ALL,""); 
   float alunos[NOTAS];
   int opcao=0;
   do{
        system("clear");
        menu(); 
        scanf("%d",&opcao);
        switch(opcao){
            case 1:
                recolha(alunos);
                break;
            case 2:
                mostra_notas(alunos);
                break;  
            case 3:
                media_notas(alunos);
                break;  
            case 4:
                alterar_notas(alunos);
                break;  
            case 5:
                maior_nota(alunos);
                break; 
            case 6:
                contagem_aprovados(alunos);
                break; 
            case 7:
                contagem_reprovados(alunos);
                break;    
            case 0:
                printf("Fim do prgrama !!!A aplica��o ir� fechar dentro de 3 segundos\n");
                sleep(3);
                break;
            default:
                printf("Op��o inv�lida !!!\n");
                sleep(3);   

        }

   }while(opcao!=0); 

   return 0;
}

void menu(){
    printf("\nGest�o de Notas\n");
    printf("\n1-Recolha de notas");
    printf("\n2-Mostra todas as notas");
    printf("\n3-Mostra a m�dia das notas");
    printf("\n4-Alterar uma nota (indicando a posi��o)");
    printf("\n5-Mostar a nota mais alta");
    printf("\n6-Mostar uma contagem dos aprovados (nota>=10)");
    printf("\n7-Mostar uma contagem do reporovados (nota<10)");
    printf("\n0-Sair");
    printf("\n\nDigite a sua op��o:");
}

void recolha(float lista[]){
    system("clear");
    printf("Recolha de notas\n");
    for(int i=0;i<NOTAS;i++){
        do{
           printf("Digite a %d� nota:",(i+1));
           scanf("%f",&lista[i]);
        }while(lista[i]<0 || lista[i]>20);
    }
    printf("\nRegisto de notas efetuado\n");
    sleep(2);
}

void mostra_notas(float lista[]){
    system("clear");
    printf("Listagem de notas\n");
    for(int i=0;i<NOTAS;i++){
        printf("\n%d� nota: %.2f",(i+1),lista[i]);
    }
    printf("\nFim de listagem\n");
    sleep(3);
}
void media_notas(float lista[]){
    float soma=0;
    system("clear");
    printf("M�dia de notas\n");
    for(int i=0;i<NOTAS;i++){
        soma+=lista[i];
    }
    printf("\nA m�dia das notas � %.2f\n",(soma/NOTAS));
    sleep(3);
}
void alterar_notas(float lista[]){
    int posicao=0;
    system("clear");
    printf("Alterar nota\n");
    do{
        printf("Qual a nota que pretende alterar (de 1 a 10):");
        scanf("%d",&posicao);
    }while(posicao<1 || posicao>10);
    printf("\nA nota atual � %.2f",lista[posicao-1]);
    do{
        printf("\nDigite a nova nota:");
        scanf("%f",&lista[posicao-1]);
    }while(lista[posicao-1]<0 || lista[posicao-1]>20);    
    printf("\nNota alterada com sucesso\n");
    sleep(3);    
}
void maior_nota(float lista[]){
    float maior=lista[0];
    system("clear");
    printf("Maior nota\n");
    for(int i=0;i<NOTAS;i++){
       if(lista[i]>maior) maior=lista[i]; 
    }
    printf("\nA maior nota � %.2f\n",maior);
    sleep(3);
}
void contagem_aprovados(float lista[]){
    int aprovados=0;
    system("clear");
    printf("# de alunos aprovados\n");
    for(int i=0;i<NOTAS;i++){
       if(lista[i]>=10) aprovados++; 
    }
    printf("\nForam aprovados %d alunos.",aprovados);
    sleep(3);
}
void contagem_reprovados(float lista[]){
    int reprovados=0;
    system("clear");
    printf("# de alunos reprovados\n");
    for(int i=0;i<NOTAS;i++){
       if(lista[i]<10) reprovados++; 
    }
    printf("\nForam reprovados %d alunos.",reprovados);
    sleep(3);
}