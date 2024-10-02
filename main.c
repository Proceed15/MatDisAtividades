#include <stdio.h>

int main(void) {
  int n, a = 0, b = 1, c, i;
  printf("Digite o Número de Linhas da Sequência Fibonacci:\n");
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
}
