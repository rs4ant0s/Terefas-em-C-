#include <stdio.h>
#include <locale.h>

int main(){
       /*
    Pretende-se calcular a idade em anos em fun��o do dia, m�s e ano de nascimento e dia, m�s e ano atual.
      Considere o seguinte:
      - Em condi��es normais a idade � a diferen�a entre o ano atual e ano de nascimento. No entanto se o m�s atual for inferior ao 
      m�s de nascimento ou o m�s atual igual ao m�s de nascimento e o dia atual inferior ao dia de nascimento a idade � o ano atual menos 
      o ano de nascimento menos um.
    */
    setlocale(LC_ALL,"");
    int dn=0,mn=0,an=0, da=0, ma=0, aa=0, idade=0;
    printf("Digite o dia de nascimento:");
    scanf("%d",&dn);
    printf("Digite o m�s de nascimento:");
    scanf("%d",&mn);
    printf("Digite o ano de nascimento:");
    scanf("%d",&an);
    printf("Digite o dia atual:");
    scanf("%d",&da);
    printf("Digite o m�s atual:");
    scanf("%d",&ma);
    printf("Digite o ano atual:");
    scanf("%d",&aa);
    idade=(aa-an);
    if ((ma<mn) || (ma==mn && da<dn))
    {
      idade--;
    }
    printf("\nA idade � %d anos.",idade);

   return 0;
}