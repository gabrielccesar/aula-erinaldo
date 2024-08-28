#include <stdio.h>

float desconto(float sal);
  float perc, valor;

printf("informe o percentual de aumento: ");
scanf("%f", &perc);

valor = sal * (perc/100);

  return valor;
}
int main(void){
  float sal, aum, novo_sal;

printf("informe o salario: R$");
scanf("%f" ,&sal);
aum = calculo(sal);
novo_sal = sal + aum;
printf("o aumento foi de R$%.2f e o novo salario é de R$%.2f", aum, novo_sal);
return 0;
}  