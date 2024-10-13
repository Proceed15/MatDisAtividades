#include <stdio.h>

// Declaração da função multiplica
int multiplica(int num1, int num2, int mul);

int main(void) {
// Parte da Multiplicação Recursiva:
  int num1 = 0, num2 = 0;
  printf("\n\nDigite o Primeiro Número a ser Recursivo:\n");
  scanf("%d", &num1);
  printf("\nDigite o Segundo Número a ser Recursivo:\n");
  scanf("%d", &num2);
  printf("\nComponentes da Multiplicação Recursiva:\n");
  printf("%d", num1);
  printf("%d vezes", num2);
  printf("\nSaída da Multiplicação Recursiva:\n");
  printf("%d\n", multiplica(num1, num2));

  return 0;
}
int multiplica(int num1, int num2) {
  int i, mul;
  // multiplicação por zero
  if (num1 == 0 || num2 == 0) {
    return 0;
  } // caso base, onde a recursão para já que o valor é 1 para 1 daqueles:
  else if (num2 == 1) {
    return num1;
  } // multiplicando através da soma com recursividade:
  else {
    for (i = 0; i <= num1; i++) {
      printf("%d +", num2);
      int num1 = 1 * num2 - 1;
      mul += num2;
      num2 = num1;
      if (num2 <= 0) {
        break;
      }
    }
      return (mul + multiplica(num1, num2 - 1));
    }
  }
