#include <stdio.h>
#include <locale.h>

int verificacaoDeValor (int *numeroFileiras) {

  while (*numeroFileiras < 1 || *numeroFileiras > 8)
  {
    printf("Valor inv�lido. Insira um valor entre 1 e 8: ");
    scanf("%i", numeroFileiras);
  }
  
  return 0;
}


int main(void)
{
  setlocale(LC_ALL, "Portuguese_Brazil");

  int numeroFileiras;

  printf("Ol�, seja bem-vindo(a) ao primeiro exerc�cio da semana 1 do curso CC50, cujo objetivo � 'recriar' uma pir�mide de blocos existente no jogo Super Mario Brothers da Nintendo. A pir�mide poder� ter de 1 a 8 fileiras de blocos, sendo eles representados pelo caractere '#'.\n");

  printf("E ent�o? Quantas fileiras voc� deseja que tenha sua pir�mide? Forne�a um valor de 1 a 8 a seguir: ");
  scanf("%i", &numeroFileiras);

  verificacaoDeValor(&numeroFileiras);

  printf("%i", numeroFileiras);


  return 0;
}