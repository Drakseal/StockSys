#include<stdio.h>
#include<math.h>
#include<string.h>

int main() {
	
	int x, y;
	char use[4];
	char nom [8];
	
	y = 1;
	
	printf("Escriba el nombre de su producto: ");
	scanf("%s", &nom);
	
	printf("Cuantas reservas tiene ?: ");
	scanf("%i", &x);
	
	if(x <= 0) {
		
		printf("Debe ser un numero mayor que 0\n");
	}
	
	else {
		
		printf("Ya puede usar sus reservas\n");
	}	
	while (x > 0) {
		
		printf("Escriba usar para usar\n");
		scanf("%s", &use, x - 1);	
		
		if (strcmp(use, "usar") == 0) {
  			x--;
  			printf("usado\n");
  			printf("Le quedan %i reservas de %s\n", x, nom);
		}
		
		if (x == 0) {
			
			printf("Se ha quedado sin reservas de %s\n", nom);
		}
		
	}
	
	return 0;
}
