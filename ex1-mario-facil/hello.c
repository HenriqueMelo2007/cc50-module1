#include <stdio.h>
#include <locale.h>

int verificacaoDeValor (int *numeroFileiras) {

  while (*numeroFileiras < 1 || *numeroFileiras > 8)
  {
    printf("Valor inválido. Insira um valor entre 1 e 8: ");
    scanf("%i", numeroFileiras);
  }
  
  return 0;
}


int main(void)
{
  setlocale(LC_ALL, "Portuguese_Brazil");

  int numeroFileiras;

  printf("Olá, seja bem-vindo(a) ao primeiro exercício da semana 1 do curso CC50, cujo objetivo é 'recriar' uma pirâmide de blocos existente no jogo Super Mario Brothers da Nintendo. A pirâmide poderá ter de 1 a 8 fileiras de blocos, sendo eles representados pelo caractere '#'.\n");

  printf("E então? Quantas fileiras você deseja que tenha sua pirâmide? Forneça um valor de 1 a 8 a seguir: ");
  scanf("%i", &numeroFileiras);

  verificacaoDeValor(&numeroFileiras);

  printf("%i", numeroFileiras);


  return 0;
}