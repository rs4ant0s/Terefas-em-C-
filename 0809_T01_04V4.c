#include <stdio.h>
#include <locale.h>

int main(){
      /*
    Elabore um programa que permite efetuar operações de crédito ou débito numa conta bancária. O programa deverá perguntar qual o saldo inicial da conta e qual a operação que o utilizador pretende efetuar (débito ou crédito), assim como o montante a debitar, atualizando o saldo da conta sempre que se efetue uma operação. No final deverá devolver o saldo da conta.
    Opcão   Menu      Cálculo
    D       Débito    saldo-montante
    C       Crédito   saldo+ montante
    S       Sair
    */
    setlocale(LC_ALL,"");
    char opcao;
    float saldo=0, montante=0;

    printf("Digite o valor do saldo inicial:");
    scanf("%f",&saldo);

    do{
      fflush(stdin);  
      printf("\nDigite (D) para levantamento, (C) para depósito ou (S) para Sair:");
      scanf("%c",&opcao);
      
      switch(opcao){
      case 'D':
      case 'd':
        printf("\nQual o valor a levantar:");
        scanf("%f",&montante);
        saldo-=montante;
        printf("\nO valor do saldo atual é %.2f Eur.",saldo);
        break;
      case 'C':
      case 'c':
        printf("\nQual o valor a depositar:");
        scanf("%f",&montante);
        saldo+=montante;     
        printf("\nO valor do saldo atual é %.2f Eur.",saldo);   
        break;
      case 'S':
      case 's':
        printf("\nFim da operação...");
        break;
      default:
        printf("\nA opção não é válida...");
      }

    }while(opcao!='S' && opcao!='s');
    printf("\nO valor do saldo atual é %.2f Eur.",saldo);
   return 0;
}