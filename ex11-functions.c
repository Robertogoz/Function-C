#include <stdio.h>

void triangular(int x) {
	int soma=0, i;
	
	for(i=0;i<x;i++) {
		soma = soma + i;
		
		if(soma >= x) {
			break;
		}
	}
	if(soma == x) {
		printf("The number is triangular\n");
	} else {
		printf("The number is not triangular\n");
	}
}

int main(void) {
	int x;
	
	printf("Enter a integer:");
	scanf("%d", &x);
	
	triangular(x);
}
