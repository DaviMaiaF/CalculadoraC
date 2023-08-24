#include <stdio.h>
#include <string.h>

void menos(){
  float valor1, valor2, resultado;
  printf("Digite o valor do primeiro numero: \n");
  scanf("%f", &valor1); //armazena o valor
  printf("Digite o valor do segundo numero: \n");
  scanf("%f", &valor2);
  resultado = valor1 - valor2;
  printf("\n Resultado: %.2f\n\n", resultado);
}

void soma(){ 
    float valor1, valor2, resultado; 
    printf("\nDigite o 1 valor: "); 
    scanf ("%f", &valor1); 
    printf("Digite o 2 valor: "); 
    scanf ("%f", &valor2); 
    resultado = valor1 + valor2; 
    printf("\nResultado: %.2f\n\n ", resultado); 
}

void multiplicar(){
  float valor1, valor2, resultado;
  printf("Digite o valor do primeiro numero: \n");
  scanf("%f", &valor1);
  printf("Digite o valor do segundo numero: \n");
  scanf("%f", &valor2);
  resultado = valor1 * valor2;
  printf("\n Resultado: %.2f\n\n", resultado); //realizei quebra de linha
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
  char entrada[15];
  printf("Insira uma operacao:\n");
  scanf("%s", entrada);

  if (strcmp(entrada, "soma") == 0) {
        soma();
    } else if (strcmp(entrada, "subtracao") == 0) {
        menos();
    }if (strcmp(entrada, "multiplicacao") == 0) {
        multiplicar();
    } else if (strcmp(entrada, "divisao") == 0) {
        divide();
    } else {
        printf("Entrada inválida.\n");
    }
  return 0;
}

  