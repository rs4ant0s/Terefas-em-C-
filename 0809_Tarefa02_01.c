#include <stdio.h>
#include <locale.h>

int main(){
    /*
    Uma empresa pretende atribuir um bónus de Natal aos seus colaboradores, em função da idade, antiguidade (nº de anos de serviço)
    e nº de filhos calculado da seguinte forma:
    - 5 ? por cada ano acima dos 45 anos de idade.
    - 10 ? por ano de serviço, até 10 anos, e 20 ? por cada ano a mais.
    - 25 ? por filho, num máximo até 3 filhos. Acima de 3 filhos receberá sempre 75 ?.
    */
    setlocale(LC_ALL,"");
    int idade=0, antiguidade=0, filhos=0, bonus=0;
    char repetir='S';
    do{
        printf("Digite a idade (em anos) do colaborador:");
        scanf("%d",&idade);
        printf("\nDigite a antiguidade do colaborador:");
        scanf("%d",&antiguidade);
        printf("\nDigite o nº de filhos do colaborador:");
        scanf("%d",&filhos);
        // bónus da idade
        if (idade>45)
        {
            bonus=(idade-45)*5;
        }
        else
        {
            bonus=0;
        }
        // bónus da antiguidade
        if (antiguidade<=10)
        {
            bonus+=(antiguidade*10);
        }
        else
        {
            bonus+=100+(antiguidade-10)*20;
        }
        // bonus dos filhos
        if (filhos<=3)
        {
        bonus+=(filhos*25);
        }
        else
        {
            bonus+=75;
        }
        printf("O valor do bónus é %d Eur.",bonus);

        // dar a possibilidade de repetir o programa
        fflush(stdin);
        printf("\nDigite S/s para repetir o programa ou outra tecla para Sair:");
        scanf("%c",&repetir);
    }while(repetir=='S' || repetir=='s');
    return 0;
}    