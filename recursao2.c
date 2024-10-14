#include <stdio.h>

// Declaração da função multiplica
int multiplica(int num1, int num2);

int main(void) {
  // Parte de Fatorial
  int n = 0, a = 0, b = 1, c, i;
  printf("Digite o Número a ser Fatorado:\n");
  scanf("%d", &n);
  int l = n, m = n;
  printf("Fatorial: ");
  for (i = 0; i <= m; i++) {
    printf("%d ", l);
    if (l <= 0){
      break;
    }
    n = n -1;
    l = l * n;
  }
  printf("\nSaída do Último Termo: %d ", l);
  // Parte de Fibonacci
  printf("\nDigite o Número de Linhas da Sequência Fibonacci:\n");
  scanf("%d", &n);
  printf("Sequência Fibonacci: \n");
  for (i = 0; i <= n; i++) {
    printf("%d ", a);
    c = a + b;
    a = b;
    b = c;
  }
  int p = a - b;
  int z = p * -1;
  printf("\nSaída do Último Termo: %d ", z);
  // Parte da Multiplicação Recursiva:
  int num1 = 0, num2 = 0;
  char v[] = " vezes ";
  printf("\n\nDigite o Primeiro Número a ser Recursivo:\n");
  scanf("%d", &num1);
  printf("\nDigite o Segundo Número a ser Recursivo:\n");
  scanf("%d", &num2);
  printf("Componentes da Multiplicação Recursiva:\n");
  printf("%d", num1);
  printf("%s", v);
  printf("%d", num2);
  printf("\n");
  printf("\nSaída da Multiplicação Recursiva:\n");
  printf("%d\n", multiplica(num1, num2));
  // Parte da Soma Recursiva
  int rec, sum = 0;
  printf("\n\nDigite o Número a ser Recursivo:\n");
  scanf("%d", &rec);
  int rar = rec;
  printf("Componentes do Número Recursivo:\n");
  if (rar == 1) {
    sum = 1;
    printf("%d ", sum);
  } else if (rar == 0) {
    sum = 0;
    printf("%d ", sum);
  } else {
    for (i = 0; i <= rar; i++) {
      printf("%d ", rec);
      int res = 1 * rec - 1;
      sum += rec;
      rec = res;
      if (rec <= 0) {
        break;
      }
    }
  }
  printf("\nSaída da Soma Recursiva:\n");
  printf("%d", sum);

  return 0;
}
int multiplica(int num1, int num2) {
  // multiplicação por zero
  if (num1 == 0 || num2 == 0) {
    return 0;
  } // caso base, onde a recursão para já que o valor é 1 para 1 daqueles:
  else if (num2 == 1) {
    return num1;
  } // multiplicando através da soma com recursividade:
  else {
    return (num1 + multiplica(num1, num2 - 1));
  }
}
