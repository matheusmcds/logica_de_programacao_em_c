#include<stdio.h>
int main (void){
int idade [3];
int cont;

for(cont = 0 ; cont <3 ; cont++){
	printf("Informe a idade: ");
	scanf("%d", &idade[cont]);
}

for(cont = 0 ; cont <3 ; cont++){
	printf("\nidade: %d ", idade[cont]);
}


}
