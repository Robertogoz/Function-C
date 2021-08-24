#include <stdio.h>

double maior(double x, double y){
    if(x > y)
        return x;
    else 
        return y;
}

double menor(double x, double y){
    if(x < y)
        return x;
    else
        return y;
}


int main(void){
    double x, y;

    scanf("%lf", &x);
    scanf("%lf", &y);

    printf("O maior entre os dois: %2.lf\n", maior(x,y));
    printf("O menor entre os dois: %2.lf\n", menor(x,y));
}