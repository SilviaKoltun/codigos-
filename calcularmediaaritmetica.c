# include <stdio.h>

//Ler 5 notas reais e calcular a média aritmética. Dica: Some as notas e divida pelo número de elementos.
    int main() {
    float notas[5];
    float soma = 0.0;
    float media;
    int i;

    printf("Digite as 5 notas reais:\n");

    for (i = 0; i < 5; i++) {
    printf("Nota %d: ", i + 1);
    scanf("%f", &notas[i]);
    soma += notas[i]; // Soma as notas no loop
  }

  // Cálculo da média
  media = soma / 5;

  // Exibição da média
  printf("\n A media aritmetica eh: %f\n", media);

  return 0;

}
