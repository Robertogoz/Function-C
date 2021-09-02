#include <stdio.h>

float square(int x){
    return (x*x); 
}

int main(void){
float x;

    scanf("%f", &x);

    printf("The square of %.0f is : %.2f\n",x ,square(x));
}
