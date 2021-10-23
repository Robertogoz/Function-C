#include <stdio.h>

int pot(int bas, int exp) {
	int i;
	if(exp==0) {
		return 1;
	} else {
		int pot=1;
		
		for(i=1;i<=exp;i++) {
			pot = pot * bas;
		}
		return pot;
	}
}

void potvetor(int tam, int vetor[], int exp) {
	int i;
	for(i=0;i<tam;i++) {
		vetor[i] = pot(vetor[i], exp);
	}
}

void printvetor(int tam, int V[tam]) {
	int i;
	for(i=0;i<tam;i++) {
		printf("%d ", V[i]);
	}
}

int main(void) {
	int i;
	int tam=5, V[tam], y;
	
	printf("Insert a exponent:");
	scanf("%d", &y);
	
	printf("Insert a integer array:\n");
	
	for(i=0;i<tam;i++) {
		scanf(" %d", &V[i]);
	}
	
	potvetor(tam, V, y);
	
	printvetor(tam, V);
	
	return 0;
}
