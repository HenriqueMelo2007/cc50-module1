#include <stdio.h>
#include <locale.h>

void calcularMoedas (float troco) {

  int trocoEmCentavos = troco * 100;

  int vinteECinco = 0;
  int dez = 0;
  int cinco = 0;
  int um = 0;

  while ( trocoEmCentavos > 0)
  {

    if ( trocoEmCentavos >= 25) {
      trocoEmCentavos -= 25;
      vinteECinco++;
    }

    else if ( trocoEmCentavos >= 10) {
      trocoEmCentavos -= 10;
      dez++;
    }

    else if ( trocoEmCentavos >= 5) {
      trocoEmCentavos -= 5;
      cinco++;
    }

    else if ( trocoEmCentavos >= 1) {
      trocoEmCentavos -= 1;
      um++;
    } else break;  

  }

  printf("A maneira mais eficiente de distribuir o troco é usando:\n\n");
  printf("%i moedas de 25 centavos\n", vinteECinco);
  printf("%i moedas de 10 centavos\n", dez);
  printf("%i moedas de 5 centavos\n", cinco);
  printf("%i moedas de 1 centavo\n", um);
}

int main (void) {
  setlocale(LC_ALL, "Portuguese_Brazil");

  float trocoEmCentavos;

  printf("Olá, seja bem-vindo(a) ao terceiro exercício da semana 1 do curso CC50, cujo objetivo é criar um algoritmo capaz de minimizar o número de moedas que está distribuindo para cada cliente ao fornecer um troco em centavos.\n");
  printf("O algoritmo conta com 4 moedas de valores distintos, são elas: 25¢, 10¢, 5¢ e 1¢.\n");
  printf("Forneça o valor do seu troco (em reais): ");
  scanf("%f", &trocoEmCentavos);

  calcularMoedas(trocoEmCentavos);


  return 0;
}