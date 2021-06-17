#include <stdio.h>


int main() {
   	
   	int n1 = 0, n2 = 0;

   	printf("Digite primeiro numero: ");
   	scanf("%d", &n1);
   	printf("Digite segundo numero: ");
   	scanf("%d", &n2);


   	if(n1 > n2) printf("Numero 1 : %d é maior que Numero 2: %d\n", n1, n2);
   	else if(n1 < n2) printf("Numero 2: %d é maior que Numero 1: %d\n", n2, n1);
   	else printf("Numero 1 : %d é igual ao Numero 2: %d\n", n1, n2);

   	
	return 0;
}