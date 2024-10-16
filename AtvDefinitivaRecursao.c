#include <stdio.h>

// Declaração das funções recursivas, fiz a de soma com a própria Main
//Multiplica
int multiplica(int num1, int num2);
//Fatorial
void fatorial(int n, int resultado);
//Fibonacci
void fibonacci(int n, int a, int b, int c, int p, int z);

int main(void) {
  // Parte de Fatorial
  int n = 0, a = 0, b = 1, p = 0, z = 0, c, i;
  char resposta;
  int num1 = 0, num2 = 0;
  char v[] = " vezes ";
  do {
    do {
      printf("Digite o Número a ser Fatorado:\n");
      scanf("%d", &n);
      if (n < 0) {
        printf("\nEsse Fatorial só é valido para números reais maiores que zero\n");
      } else {
        fatorial(n, 1);
      }
    } while (n < 0);
    // Parte de Fibonacci
    do {
      printf("\n\nDigite o Número de Linhas da Sequência Fibonacci:\n");
      scanf("%d", &n);
      if (n < 0) {
        printf("\nEssa Fibonacci só é valida para números reais maiores que "zero\n");
      } else {
        fibonacci(n - 1, a = 1, b = 1, c = 0, p = 0, z = 0);
        // n - 1 pois o primeiro número da sequência era 0, com a = 1 se torna 1 e incrementa 1 na sequência, que retiramos do resultado com -1
        // Para imprimir o Zero: fibonacci(n, a = 0, b = 1, c = 0, p = 0, z = 0);
      }
    } while(n < 0);
    // Parte da Multiplicação Recursiva:
  do{
    printf("\n\nDigite o Primeiro Número a ser Recursivo:\n");
    scanf("%d", &num1);
    printf("\nDigite o Segundo Número a ser Recursivo:\n");
    scanf("%d", &num2);
  } while(num1 < 0 || num2 < 0);
    printf("Componentes da Multiplicação Recursiva:\n");
    printf("%d", num1);
    printf("%s", v);
    printf("%d", num2);
    printf("\n");
    printf("\nSaída da Multiplicação Recursiva:\n");
    printf("%d\n", multiplica(num1, num2));
    // Parte da Soma Recursiva Usando For
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

    printf("\nDeseja Continuar? (S/N)\n");
    scanf(" %c", &resposta);
  } while (resposta == 'S' || resposta == 's' || resposta == 'Y' ||
           resposta == 'y' || resposta == '1');
}
void fatorial(int n, int resultado) {
  resultado = 1;
  // Se 0 ou 1, 1
  if (n == 0 || n == 1) {
    printf("Fatorial: %d\n", resultado);
    return;
  }
  for (int i = 1; i <= n; i++) {
    resultado *= i;
    printf("%d! = %d\n", i, resultado);
  }
  printf("\nSaída do Último Termo: %d ", resultado);
  // fatorial(n - 1, resultado * n);
}
void fibonacci(int n, int a, int b, int c, int p, int z) {
  // Se 0 ou 1, 1
  if (n == 0 || n == 1) {
    printf("Fibonacci: %d\n", b);
    return;
  } else {
    printf("Sequência Fibonacci: \n");
    for (int i = 0; i <= n; i++) {
      printf("%d ", a);
      c = a + b;
      a = b;
      b = c;
    }
    int p = a - b;
    int z = p * -1;
    printf("\nSaída do Último Termo: %d ", z);
  }
}
int multiplica(int num1, int num2) {
  // multiplicação por zero é zero
  if (num1 == 0 || num2 == 0) {
    return 0;
  } else if (num1 == 1) {
    return num2;
  } else if (num2 == 1) {
    return num1;
  } else {
    return (num1 + multiplica(num1, num2 - 1));
  }
}
