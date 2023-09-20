#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#include <locale.h>

int sorteio();
int nivel(int sorteio);
int tentativas(int sorteio);
int numero_misterio(int sorteio, int nivel);
void jogo();

int main()
{
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));
    jogo();
}

int sorteio(){
    int numero;
    do{
        printf("\nValores por sorteio(1) ou manuais(2):");
        scanf("%d",&numero);
        if (numero<1 || numero>2) printf("\nErro na introdução de dados.");
    }while(numero<1 || numero>2);
    return numero;
}

int nivel(int sorteio){
    int escolha_nivel;
    if(sorteio==1){
        escolha_nivel=(rand()%3)+1; // gerar um número entre 1 e 3
    }
    else{
        do{
            printf("\nQual o nível do jogo que pretende ? (1,2 ou 3):");
            scanf("%d",&escolha_nivel);
            if (escolha_nivel<1 || escolha_nivel>3) printf("\nErro na escolha do nível.");
        }while(escolha_nivel<1 || escolha_nivel>3);
    }
    return escolha_nivel;
}

int tentativas(int sorteio){
    int escolha_tentativa;
    if(sorteio==1){
        escolha_tentativa=(rand()%3)+1;
    }
    else{
        do{
            printf("\nQual o número de tentativas pretendidas? (1,2 ou 3):");
            scanf("%d",&escolha_tentativa);
            if (escolha_tentativa<1 || escolha_tentativa>3) printf("\nErro na escolha do número de tentativas.");
        }while(escolha_tentativa<1 || escolha_tentativa>3);
    }
}

int numero_misterio(int sorteio, int nivel){
    int numero_mist;
    if(sorteio==1){
        if(nivel==1){
            numero_mist=(rand()%100)+1;
        }
        else if (nivel==2){
            numero_mist=(rand()%1000)+1;
        }
        else{
            numero_mist=(rand()%10000)+1;
        }
    }
    else{
        if(nivel==1){
            do{
                printf("\nEscolha um número entre 1 e 100:");
                scanf("%d",&numero_mist);
                if(numero_mist<1 || numero_mist>100) printf("\nNúmero deve estar compreendido entre 1 e 100!");
            }while(numero_mist<1 || numero_mist>100);
        }
        else if(nivel==2){
            do{
                printf("\nEscolha um número entre 1 e 1000:");
                scanf("%d",&numero_mist);
                if(numero_mist<1 || numero_mist>1000) printf("\nNúmero deve estar compreendido entre 1 e 1000!");
            }while(numero_mist<1 || numero_mist>1000);
        } 
        else{
            do{
                printf("\nEscolha um número entre 1 e 10000:");
                scanf("%d",&numero_mist);
                if(numero_mist<1 || numero_mist>10000) printf("\nNúmero deve estar compreendido entre 1 e 10000!");
            }while(numero_mist<1 || numero_mist>10000);
        }               
    }
    return numero_mist;
}

void jogo(){
    // invocar a função sorteio para escolher o tipo de jogo
    int sorte, niv, tenta,num_mist, numero;
    char resposta;
    do{
        system("cls");
        printf("/********* JOGO DO SOBE E DESCE **************/");
        sorte=sorteio();
        niv=nivel(sorte);
        tenta=tentativas(sorte);
        num_mist=numero_misterio(sorte,niv);

        // verificar a opção 1,2 ou 3 do tipo de tentativa e atribuir o nº de vezes para cada tipo
        if (tenta==1){
            tenta=10;
        }
        else if (tenta==2){
            tenta=15;
        }
        else{
            tenta=20;
        }

        printf("\nEstamos a jogar o nível %d com o máximo de %d tentativas.\n",niv,tenta);

        // criar um ciclo para jogar em função do número de tentativas.

        for(int i=tenta;i>0;i--){
            printf("\nDigite um número:");
            scanf("%d",&numero);
            
            if(numero>num_mist){
                printf("O número mistério está abaixo.\nAinda dispõe de %d tentativas.",i-1);
            }
            else if (numero<num_mist){
                printf("O número mistério está acima.\nAinda dispõe de %d tentativas.",i-1);
            }
            else{
                printf("\nParabéns.\nAcertou ao fim de %d tentativas.",tenta-i);
                break;
            }
        }

        // apresentar o número mistério
        printf("\nO número mistério era: %d",num_mist);

        // solicitar ao utilizador jogar novamente
        fflush(stdin); // ou getchar()
        printf("\nQuer jogar novamente? Digite sS para continuar:");
        scanf("%c",&resposta);
        if (resposta!='s' && resposta!='S'){
            printf("\nFim do jogo.\n");
            return;
        }
    }while(resposta!='n');
}


