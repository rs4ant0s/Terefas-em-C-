#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
Escreva um programa em C para uma empresa de aluguer de automóveis, que imprima o montante devido por cada cliente. 
O montante devido depende dos quilómetros efetuados, 
do número de dias que durou o aluguer e do tipo de carro alugado. Os Volkswagen custam 30? por dia e 1,20? 
por quilómetro. Os Toyota custam 35? por dia e 1,50? por quilómetro. Os Mercedes custam 60? por dia e 2,50? 
por quilómetro. Os primeiros 75 quilómetros são gratuitos, independentemente do tipo de carro alugado.
tipo      marca
1/V       Volkswagen
2/T       Toyota
3/M       Mercedes
*/
int main(){
    
    setlocale(LC_ALL,"");
    int dias=0;
    float kms=0, total=0;
    char repetir='S',tipo_carro ;
    do{
        system("cls");
        printf("Empresa Rent A Car, S.A.\n\n");
        printf("Digite o valor dos kms percorridos:");
        scanf("%f",&kms);

        printf("Digite o número de dias do aluguer:");
        scanf("%d",&dias);

        // validar a marca
        do{
           fflush(stdin);
           printf("Qual o tipo de carro alugado (V)olkswagen / (T)oyota / (M)ercedes:");
           scanf("%c",&tipo_carro);
        }while(tipo_carro!='V' && tipo_carro!='T' && tipo_carro!='M' && tipo_carro!='v' && tipo_carro!='t' && tipo_carro!='m');    
      

        if (kms>75){
            kms-=75;
            printf("\nBeneficiou dos primeiros 75 kms gratuitos!\n");
        } 

        switch(tipo_carro){
            case 'V':
            case 'v':
                printf("\nAlugou a marca Volkswagen.");
                total=(dias*30+kms*1.2);
                break;
            case 'T':
            case 't':
                printf("\nAlugou a marca Toyota.");
                total=(dias*35+kms*1.5);
                break;     
            case 'M':
            case 'm':
                printf("\nAlugou a marca Mercedes.");
                total=(dias*60+kms*2.5);
                break;   
            /*default:
                printf("\nTipo de carro inexistente !!!");*/                  
        }
        printf("\nO montante devido é %.2f Eur.",total);
        fflush(stdin);
        printf("\nDigite S/s para continuar ou outra tecla para sair:");
        scanf("%c",&repetir);
    }while(repetir=='S' || repetir=='s');
    return 0;
}    