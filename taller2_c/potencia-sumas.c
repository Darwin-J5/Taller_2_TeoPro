#include <stdio.h>

int main() {
    int base;//valor de la base
    int exponente;//valor del expxonente
    int resultado = 1;//valor resultado de la operacion
    int i = 1;//variable del bucle

    printf("ingrese la base de la operacion: ");//presenta un mensaje para ingresar la base
    scanf("%d", &base);//lee la base
    printf("ingrese el exponente de la operacion: ");//presenta un mensaje para ingresar el exponente
    scanf("%d", &exponente);//lee el exponente

    while (i <= exponente) {//mientras que i sea menor o igual a l exponente se repetira el siguiente bucle
        printf("%d", base);//se presenta la base
        if (i >= 1 && i < exponente) {//si el valor de i es mayor o igual a 1 y menor a la base presentara un "*"
            printf(" * ");
        }
        resultado *= base;//el resultado se multiplicara por el valor de la base
        i ++;//aumentara el valor de la variable i
    }
    printf(" = %d", resultado);//presenta el resultado
    return 0;
}