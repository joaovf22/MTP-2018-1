//Joao Victor Oliveira Ferreira
//11721EAU006 

#include <stdio.h>

int main() 
{
  int cum=0, i;
  char numero[256];
  printf ("Digite um numero: ");
  scanf ("%s", &numero);
  getchar (); 
  for (i=0; numero[i] != '\0'; i++)
  {
    if (numero[i] >=48 && numero [i] <= 57)
   {
    numero[i] = numero[i] - '0';
    cum = cum*10 + numero[i];
   }
  }
  printf ("\nO numero digitado: %d", cum);
  return 0;
}
