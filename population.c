#include <stdio.h>
#include <locale.h>

int main(void)
{
  setlocale(LC_ALL, "Portuguese_Brazil");

  int tamanhoInicial = 0;
  int tamanhoFinal = 0;
  int anos = 0;

  printf("Seja bem-vindo ao laborat�rio do m�dulo 1. O programa permite calcular quantos anos levariam para que uma popula��o atinja determinado tamanho levando em conta que a cada ano a popula��o cres�a um ter�o ( popula��o / 3 ) e decres�a um quarto ( popula��o / 4 )\n");
  printf("O tamanho m�nimo da popula��o inicial � 9, e a popula��o final deve ser no m�nimo igual ao tamanho inicial escolhido. Selecione-os abaixo:\n\n");

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