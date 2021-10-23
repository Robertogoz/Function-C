#include <stdio.h>

int i, j;

void retangulo(int x, int y) {
	for(i=0;i<x;i++) {
		for(j=0;j<y;j++) {
			printf("*");
		}
		printf("\n");
	}
}

int main(void) {
	int x, y;
	
	do {
		printf("Enter the first value: ");
		scanf("%d", &x);
	} while(x<= 0);
	
	do {
		printf("Enter the second value: ");
		scanf("%d", &y);
	} while(y<= 0);
	
	retangulo(x,y);
}
