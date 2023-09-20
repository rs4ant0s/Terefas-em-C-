#include <stdio.h>
#include <locale.h>

int main(){
      /*
    Elabore um programa que permite efetuar opera��es de cr�dito ou d�bito numa conta banc�ria. O programa dever� perguntar qual o saldo inicial da conta e qual a opera��o que o utilizador pretende efetuar (d�bito ou cr�dito), assim como o montante a debitar, atualizando o saldo da conta sempre que se efetue uma opera��o. No final dever� devolver o saldo da conta.
    Opc�o   Menu      C�lculo
    D       D�bito    saldo-montante
    C       Cr�dito   saldo+ montante
    S       Sair
    */
    setlocale(LC_ALL,"");
    char opcao;
    float saldo=0, montante=0;

    printf("Digite o valor do saldo inicial:");
    scanf("%f",&saldo);

    do{
      fflush(stdin);  
      printf("\nDigite (D) para levantamento, (C) para dep�sito ou (S) para Sair:");
      scanf("%c",&opcao);
      
      switch(opcao){
      case 'D':
      case 'd':
        printf("\nQual o valor a levantar:");
        scanf("%f",&montante);
        saldo-=montante;
        printf("\nO valor do saldo atual � %.2f Eur.",saldo);
        break;
      case 'C':
      case 'c':
        printf("\nQual o valor a depositar:");
        scanf("%f",&montante);
        saldo+=montante;     
        printf("\nO valor do saldo atual � %.2f Eur.",saldo);   
        break;
      case 'S':
      case 's':
        printf("\nFim da opera��o...");
        break;
      default:
        printf("\nA op��o n�o � v�lida...");
      }

    }while(opcao!='S' && opcao!='s');
    printf("\nO valor do saldo atual � %.2f Eur.",saldo);
   return 0;
}