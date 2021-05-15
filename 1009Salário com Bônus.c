#include <stdio.h>
 
int main() {
 
   double fixo, vendas, total;
   char nome;

  scanf("%s %lf %lf", &nome, &fixo, &vendas);

  total = ((vendas * 15)/ 100) + fixo;
  printf("TOTAL = R$ %.2lf\n", total);

 
    return 0;
}
