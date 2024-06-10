#include <stdio.h>

int main() {
    int n;//variable del numero
    int triangular = 0;//variable del numero triangular
    printf("ingrese el numero triangular: ");//presenta un mensaje que solicita el numero
    scanf("%d", &n);//lee el numero
    int i = 1;//variable para el bucle
    while(i <= n) {//mientras i sea menor o igual a n se repetira el bucle
        printf("%d", i);//presenta el valor de i
        if (i >= 0 && i < n) {//si i es mayor o igual a 0 y menor al numero se presentara un "+"
            printf(" + ");
        }
        triangular += i;//el valor del numero triangular aumentara con respecto al valor de i
        i++;//aumenta el valor de la variable del bucle
    }
    printf(" = %d", triangular);//resenta el numero triangular
    return 0;
}