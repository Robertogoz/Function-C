#include <stdio.h>

int array_hnumber(){
    int i, h=0, n;

    printf("Input the number of elements to be stored in the array : ");
    scanf(" %d", &n);

    int A[n];

    for(i=0; i<n; i++){
        printf("element %d : ", i);
        scanf(" %d", &A[i]);
        if(A[i] > h)
            h = A[i];
    }
    
    return h;

}

int main(void){
    int valor = array_hnumber();

    printf("The largest element in the array is : %d\n", valor);

}
