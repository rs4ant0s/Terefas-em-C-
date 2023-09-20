#include <stdio.h>
#include <locale.h>

int main(){
       /*
    Pretende-se calcular a idade em anos em função do dia, mês e ano de nascimento e dia, mês e ano atual.
      Considere o seguinte:
      - Em condições normais a idade é a diferença entre o ano atual e ano de nascimento. No entanto se o mês atual for inferior ao 
      mês de nascimento ou o mês atual igual ao mês de nascimento e o dia atual inferior ao dia de nascimento a idade é o ano atual menos 
      o ano de nascimento menos um.
    */
    setlocale(LC_ALL,"");
    int dn=0,mn=0,an=0, da=0, ma=0, aa=0, idade=0;
    printf("Digite o dia de nascimento:");
    scanf("%d",&dn);
    printf("Digite o mês de nascimento:");
    scanf("%d",&mn);
    printf("Digite o ano de nascimento:");
    scanf("%d",&an);
    printf("Digite o dia atual:");
    scanf("%d",&da);
    printf("Digite o mês atual:");
    scanf("%d",&ma);
    printf("Digite o ano atual:");
    scanf("%d",&aa);
    idade=(aa-an);
    if ((ma<mn) || (ma==mn && da<dn))
    {
      idade--;
    }
    printf("\nA idade é %d anos.",idade);

   return 0;
}