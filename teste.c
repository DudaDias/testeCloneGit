#include <stdlib.h>
#include <stdio.h>

int main(){

    int id=0, iddf;

    printf("\nInforme sua idade: ");
    scanf("%i", &id);

    iddf = id-1;

    printf("\n%i", iddf);
    
    iddf = id+1;
    
    printf("\nSua idade original é: %i", iddf);

    printf("\n");


    return 0;
}
