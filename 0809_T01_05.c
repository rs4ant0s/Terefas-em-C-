#include <stdio.h>
#include <locale.h>

int main(){
    /*
    Crie um programa que escreva no ecr� os n�meros de 1 a 100 e os respetivos quadrados. O resultado do programa deve ser:
    Sa�da:
    1 1
    2 4
    3 9
    4 16
    5 ?
    ...
    100 10000
   */ 
    for(int contador=1;contador<=100;contador++){
      printf("\n%d %d",contador,(contador*contador)); 
    }

   return 0;
}