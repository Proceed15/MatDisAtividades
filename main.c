#include <stdio.h>

int main(void) {
  //Parte de Fibonacci
  int n, a = 0, b = 1, l = -1, c, i;
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
  //Parte de Recursividade
  int rec;
  printf("\n\nDigite o Número a ser Recursivo:\n");
  scanf("%d", &rec);
  int rar = rec;
  printf("Saída do Número Recursivo:\n");
  for (i = 0; i <= rar; i++) {
    printf("%d ", rec);
    int res = 1 * rec - 1;
    rec = res;
    if (rec <= 0) {
      break;
    }
  }
}
