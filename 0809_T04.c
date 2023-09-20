#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
  
void avaliacao(int nota);
void desconto(float valor, float percentagem);
void parouimpar(int numero);
void maior(int numero1, int numero2, int numero3);
void genero(char genero);

int main(){
    setlocale(LC_ALL,"");
    int nota=0, opcao=0, numero=0,n1=0,n2=0,n3=0;
    float valor=0, percentagem=0;
    char gen;
    do{
        system("cls");
        printf("\n1-Avaliação");
        printf("\n2-Desconto");
        printf("\n3-Par ou ímpar");
        printf("\n4-Maior");
        printf("\n5-Género");
        printf("\n0-Sair");
        printf("\n\nSelecione a sua opção:");
        scanf("%d",&opcao);
        switch(opcao){
            case 1:
                do{
                    printf("\nDigite uma nota entre 0 e 20:");
                    scanf("%d",&nota);
                }while(nota<0 || nota>20);
                avaliacao(nota);
                Sleep(3000);
                break;
            case 2:
                printf("Digite um valor:");
                scanf("%f",&valor);
                printf("\nDigite o valor da percentagem:");
                scanf("%f",&percentagem);
                desconto(valor,percentagem);
                Sleep(3000);
                break;
            case 3:
                do{
                    printf("\nDigite um número entre 0 e 50:");
                    scanf("%d",&numero);
                }while(numero<0 || numero>50);
                parouimpar(numero);
                Sleep(3000);
                break;   
            case 4:
                printf("Digite um número:");
                scanf("%d",&n1);
                printf("Digite outro número:");
                scanf("%d",&n2);
                printf("Digite mais um número:");
                scanf("%d",&n3); 
                maior(n1,n2,n3);                        
                Sleep(3000);
                break;      
            case 5:    
                do{
                    fflush(stdin);
                    printf("\nDigite Ff ou Mm:");
                    scanf("%c",&gen);
                }while(gen!='F' && gen!='f' && gen!='M' && gen!='m');
                genero(gen);
                Sleep(3000);
                break;                                       
        }
    }while(opcao!=0);
  

}

void avaliacao(int nota){
    if(nota<10){
        printf("\nReprovado\n");
    }
    else if (nota<=13){
        printf("\nExame\n");
    }
    else{
        printf("\nAprovado\n");
    }
}
void desconto(float valor, float percentagem){
    printf("\nO valor do desconto é %.2f",(valor*(percentagem/100)));
}
void parouimpar(int numero){
    if(numero%2==0){
        printf("O número %d é par.\n",numero);
    }
    else{
        printf("O número %d é ímpar.\n",numero);
    }
}
void maior(int numero1, int numero2, int numero3){
    int maior=numero1;
    if (numero2>maior) maior=numero2;
    if (numero3>maior) maior=numero3;
    printf("\nO maior número é %d.\n",maior);
}
void genero(char genero){
    switch(genero){
        case 'F':
        case 'f':
            printf("Feminino\n");
            break;
        case 'M':
        case 'm':
            printf("Masculino\n");
            break;
        default:
             printf("ERRO\n");   
    }
}