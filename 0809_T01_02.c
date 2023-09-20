#include <stdio.h>
#include <locale.h>

int main(){
     /*
    Sabendo que o IMC (�ndice de massa corporal) � obtido em fun��o da altura e do peso (imc=peso/ (altura*altura)). Crie um algoritmo que leia os valores do peso e da altura, apresente o valor do imc e a respetiva situa��o sabendo que:
    IMC             Situa��o
    Abaixo de 20    Abaixo do peso
    >= 20 e <25     Peso Normal
    >= 25 e <30     Acima do Peso
    >= 30 e <=35    Obesidade
    > 35            Grande Obesidade
    */

    setlocale(LC_ALL,"");
    float peso=0, altura=0, imc=0;

    printf("Digite o valor do peso (em Kg):");
    scanf("%f",&peso);
    printf("Digite o valor da altura (em metros):");
    scanf("%f",&altura);
    imc=(peso/(altura*altura));
    printf("O valor do IMC � %.2f",imc);
    if (imc<20)
    {
      printf("\nAbaixo do peso.");
    }
    else if (imc<25)
    {
      printf("\nPeso normal.");
    }
    else if (imc<30)
    {
      printf("\nAcima do peso.");
    }    
    else if (imc<=35)
    {
      printf("\nObesidade.");
    }    
    else
    {
      printf("\nGrande Obesidade.");
    }

   return 0;
}