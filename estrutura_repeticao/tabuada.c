#include <stdio.h>

int main(){

    int tabuada=0;
    int resultado=0;

    printf("qual tabuda voce deseja");
    scanf("%i",&tabuada);

    for(int i =1; i <=10; i++)
    {
        resultado = tabuada * i;
        printf("\n %i x %i = %i", tabuada, i, resultado);
   
    }

return 0;
        
}