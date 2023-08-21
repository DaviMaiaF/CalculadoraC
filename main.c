#include <stdio.h>
#include <stdlib.h>

void menos(){
  float valor1, valor2, resultado;
  printf("Digite o valor do primeiro numero: \n");
  scanf("%f", &valor1); //armazena o valor
  printf("Digite o valor do segundo numero: \n");
  scanf("%f", &valor2);
  resultado = valor1 - valor2;
  printf("\n Resultado: %.2f\n\nA seguir teremos multiplicacao\n\n", resultado);
}

void multiplicar(){
  float valor1, valor2, resultado;
  printf("Digite o valor do primeiro numero: \n");
  scanf("%f", &valor1);
  printf("Digite o valor do segundo numero: \n");
  scanf("%f", &valor2);
  resultado = valor1 * valor2;
  printf("\n Resultado: %.2f\n\nA seguir teremos divisao\n\n", resultado); //realizei quebra de linha
}

void divide(){
  float valor1, valor2, resultado;
  printf("Digite o valor do primeiro numero: \n");
  scanf("%f", &valor1);
  printf("Digite o valor do segundo numero: \n");
  scanf("%f", &valor2);
  resultado = valor1 / valor2;
  printf("\n Resultado: %.2f\n\n", resultado);
}

int main(void) {
  float valor1, valor2, resultado;
  printf("Digite o valor do primeiro numero para somar: \n");
  scanf("%f", &valor1);
  printf("Digite o valor do segundo numero: \n");
  scanf("%f", &valor2);
  resultado = valor1 + valor2;
  printf("\n Resultado: %.2f\n\nA seguir teremos subtracao\n\n", resultado);
  menos();
  multiplicar();
  return 0;
}

  