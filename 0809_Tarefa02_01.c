#include <stdio.h>
#include <locale.h>

int main(){
    /*
    Uma empresa pretende atribuir um b�nus de Natal aos seus colaboradores, em fun��o da idade, antiguidade (n� de anos de servi�o)
    e n� de filhos calculado da seguinte forma:
    - 5 ? por cada ano acima dos 45 anos de idade.
    - 10 ? por ano de servi�o, at� 10 anos, e 20 ? por cada ano a mais.
    - 25 ? por filho, num m�ximo at� 3 filhos. Acima de 3 filhos receber� sempre 75 ?.
    */
    setlocale(LC_ALL,"");
    int idade=0, antiguidade=0, filhos=0, bonus=0;
    char repetir='S';
    do{
        printf("Digite a idade (em anos) do colaborador:");
        scanf("%d",&idade);
        printf("\nDigite a antiguidade do colaborador:");
        scanf("%d",&antiguidade);
        printf("\nDigite o n� de filhos do colaborador:");
        scanf("%d",&filhos);
        // b�nus da idade
        if (idade>45)
        {
            bonus=(idade-45)*5;
        }
        else
        {
            bonus=0;
        }
        // b�nus da antiguidade
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
        printf("O valor do b�nus � %d Eur.",bonus);

        // dar a possibilidade de repetir o programa
        fflush(stdin);
        printf("\nDigite S/s para repetir o programa ou outra tecla para Sair:");
        scanf("%c",&repetir);
    }while(repetir=='S' || repetir=='s');
    return 0;
}    