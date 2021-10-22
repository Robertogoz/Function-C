#include <stdio.h>

int i,j;

void inverter(int *vetor, int n) {
	int vetorInvertido[n];
	for(i=0;i<n;i++) {
		vetorInvertido[i] = vetor[(n-1)-i];
	}
	for(i=0;i<n;i++) {
		vetor[i] = vetorInvertido[i];
	}
}

void printVetor(int *vetor, int n) {
	for(i=0;i<n;i++) {
		printf("%d ", vetor[i]);
	}
}


int main(void) {
	int n;
	scanf("%d", &n);
	int vetor[n];
		
	for (i=0; i<n; i++){
	    scanf("%d", &vetor[i]);
	}
	inverter(vetor, n);
	printVetor(vetor, n);
}
