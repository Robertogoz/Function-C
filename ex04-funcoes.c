#include <stdio.h>

char even_or_odd(int x){
    if(x % 2 == 0){
        return 'S';
    } else {
        return 'N';
    }
}

int main(void){
    int number;
    char answear;

    printf("Input any number:");
    scanf("%d", &number);

    answear = even_or_odd(number);

    if(answear == 'S'){
        if(number > 0)
            printf("The entered number is even positive.\n");
        else if(number == 0)
            printf("The entered number is zero.\n");
        else 
            printf("The entered number is even negative.\n");
    } else {
        if(number > 0)
            printf("The entered number is odd positive.\n");
        else if(number == 0)
            printf("The entered number is zero.\n");
        else 
            printf("The entered number is odd negative.\n");
    }
}
