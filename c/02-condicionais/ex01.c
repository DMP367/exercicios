#include <stdio.h>

int main(void) {
   char nome[20];
   printf("Digite seu nome: ");
   fflush(stdin);
   scanf("%s", nome);
   printf("Seja Bem vindo %s\n", nome);
   return 0;
}
