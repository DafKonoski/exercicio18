//Receber um nome no teclado e imprimir a seguinte saída - Nome
//todo: - Primeiro caracter: - Do primeiro até o terceiro caracter

#include <stdio.h>

int main() {

  char nome[20];
  
  printf("Digite um nome:\n");
  gets(nome);

  printf("Nome todo:%s\n", nome);
  printf("Primeiro caracter:%c\n", nome[0]);
  printf("Segundo caracter:%c\n", nome[1]);
  printf("Terceiro caracter:%c\n", nome[2]);
  
}