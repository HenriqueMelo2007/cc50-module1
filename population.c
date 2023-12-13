#include <stdio.h>
#include <locale.h>

int main(void)
{
  setlocale(LC_ALL, "Portuguese_Brazil");

  int tamanhoInicial = 0;
  int tamanhoFinal = 0;
  int anos = 0;

  printf("Seja bem-vindo ao laboratório do módulo 1. O programa permite calcular quantos anos levariam para que uma população atinja determinado tamanho levando em conta que a cada ano a população cresça um terço ( população / 3 ) e decresça um quarto ( população / 4 )\n");
  printf("O tamanho mínimo da população inicial é 9, e a população final deve ser no mínimo igual ao tamanho inicial escolhido. Selecione-os abaixo:\n\n");

  do {
    printf("Tamanho inicial: \n");
    scanf("%i", &tamanhoInicial);
  } while ( tamanhoInicial < 9);

  do {
    printf("Tamanho final: \n");
    scanf("%i", &tamanhoFinal);
  } while ( tamanhoFinal < tamanhoInicial );

  if ( tamanhoInicial == tamanhoFinal ) {
    printf("Anos: %i", anos);
  } else {
    do {
      int terco = tamanhoInicial / 3;
      int quarto = tamanhoInicial / 4;

      tamanhoInicial += terco;
      tamanhoInicial -= quarto;

      anos++;

    } while ( tamanhoInicial < tamanhoFinal );

    printf("Anos:\n%i", anos);   
  }


  return 0;
}