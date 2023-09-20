#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <conio.h>
#include <time.h>

char *quiz[5][4];
char *respostas_utilizador[3];
int respostas_certas[5]={3,2,1,2,1};
int ru[3]={0,0,0};
int aleatorio_perguntas[3]={0,0,0};

void aleatorioPerguntas();

int main(){
   int escolha,respostas=0;
   char continuar;
   // carregar a matriz com as perguntas e respostas 
   setlocale(LC_ALL,""); 
   // 1ª pergunta
   quiz[0][0]="Quem foi o 1º Rei de Portugal?";
   quiz[0][1]="D. Sancho I";
   quiz[0][2]="D.Dinis";
   quiz[0][3]="D. Afonso Henriques";
   // 2ª pergunta
   quiz[1][0]="Quem escreveu os Lusiadas?";
   quiz[1][1]="José Saramago";
   quiz[1][2]="Luis de Camões";
   quiz[1][3]="Egas Moniz";  
   // 3ª pergunta
   quiz[2][0]="Quem descobriu o Brasil?";
   quiz[2][1]="Pedro Alvares Cabral";
   quiz[2][2]="Vasco da Gama";
   quiz[2][3]="Cristóvão Colombo";  
   // 4ª pergunta
   quiz[3][0]="Qual o cognome do rei D. Sebastião?";
   quiz[3][1]="O semeador";
   quiz[3][2]="O desejado";
   quiz[3][3]="O conquistador";
   // 5ª pergunta
   quiz[4][0]="Quem foi o lavrador?";
   quiz[4][1]="D. Dinis";
   quiz[4][2]="D. João I";
   quiz[4][3]="D. Manuel I";   
   do{
        system("cls");
        respostas=0;
        printf("\n**** Quiz História de Portugal ***\n\n");

        // sortear as perguntas
        aleatorioPerguntas(); // invocar a funçãor

        for(int i=0;i<3;i++){
                printf("%dª Pergunta:",(i+1));
                printf("\n%s",quiz[aleatorio_perguntas[i]][0]);
                // apresentar as alternativas de resposta
                for(int j=1;j<4;j++){
                    printf("\n[%d]-%s",j,quiz[aleatorio_perguntas[i]][j]);
                }
                do{ 
                    printf("\nDigite a sua esolha:");
                    scanf("%d",&escolha);
                    if(escolha<1 || escolha>3) printf("\nEscolha 1, 2 ou 3.");
                }while(escolha<1 || escolha>3);  
                // verificar a resposta do utilizador
                if(escolha==respostas_certas[aleatorio_perguntas[i]]){
                    respostas++;
                }  
                // atualizar vetor das respostas do utilizador
                respostas_utilizador[i]=quiz[aleatorio_perguntas[i]][escolha];
                ru[i]=escolha;
        } 

        // apresentar os resultados
        printf("\nAs suas respostas foram:\n");
        for(int i=0;i<3;i++){
            printf("\n%s",respostas_utilizador[i]);
            if(ru[i]==respostas_certas[aleatorio_perguntas[i]]){
               printf("- Ok."); 
            }  
            else{
               printf("- X.");                 
            }
        }
        fflush(stdin);
        printf("\n\nAcertou em %d resposta(s).",respostas);
        printf("\nDigite sS para continuar, outra tecla para Sair:");
        scanf("%c",&continuar);
   }while(continuar=='S' || continuar=='s'); 
   return 0;

}

void aleatorioPerguntas(){
    srand(time(NULL));
    int numero=0,posicao=0,existe=0;
    for(int i=0;i<3;i++){
        numero=rand()%5; // gerar entre 0 e 4
        aleatorio_perguntas[i]=numero;
        posicao=(i-1);
        while(posicao>=0){
            existe=0;
            if(aleatorio_perguntas[posicao]==numero){
                numero=rand()%5; // gerar entre 0 e 4
                aleatorio_perguntas[i]=numero; 
                existe=1;                  
            }
            if(existe==1){
                posicao=i-1;
            }
            else{
                posicao--;
            }
        }   
    }
}