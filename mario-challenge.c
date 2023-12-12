#include <stdio.h>
#include <locale.h>

int verificacaoDeValor (int *numeroFileiras) {

  while (*numeroFileiras < 1 || *numeroFileiras > 4)
  {
    printf("Valor inv�lido. Insira um valor entre 1 e 4: ");
    scanf("%i", numeroFileiras);
  }
  
  return 0;
}

int construtorPiramidesAdjacentes (int numeroFileiras) {

  for (int fileira = 0; fileira < numeroFileiras; fileira++) {

    for (int i = 2; i <= numeroFileiras - fileira; i++) {
      printf(" ");
    }

    for (int i = fileira; i >= 0; i--) {
    printf("#");
    }

    printf(" ");

    for (int i = fileira; i >= 0; i--) {
    printf("#");
    }

    printf("\n");

  }


  return 0;
};


int main(void)
{
  setlocale(LC_ALL, "Portuguese_Brazil");

  int numeroFileiras;

  printf("Ol�, seja bem-vindo(a) ao segundo exerc�cio da semana 1 do curso CC50, cujo objetivo � 'recriar' pir�mides de blocos adjacentes no jogo Super Mario Brothers da Nintendo. As pir�mides poder�o ter de 1 a 4 fileiras de blocos, sendo eles representados pelo caractere '#'.\n");

  printf("E ent�o? Quantas fileiras voc� deseja que tenha sua pir�mide? Forne�a um valor de 1 a 4 a seguir: ");
  scanf("%i", &numeroFileiras);

  verificacaoDeValor(&numeroFileiras);

  construtorPiramidesAdjacentes(numeroFileiras);


  return 0;
}