#include <stdio.h>

int fibonacci(int n) {//funcion
    if (n <= 1){//si n es menor o igual a 1 solo retornara a n
        return n;
    } else {//de otro modo retornara a la funcion del numero menos 1 mas la funcion del numero menos 2
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;//variable para el numero
    printf("ingrese la cantidad de numeros de la serie fibonacci a presentar: ");//presenta un mensaje para la cantidad de numero a presentar
    scanf("%d", &n);//lee la cantidad de numeros a presentar
    int i = 0;//variable para el bucle
    while (i < n) {//mientras que i sea menor que el numero se repetira el bucle
        printf("%d", fibonacci(i));//presentara el valor de la funcion a la que se le asigna el valor de i
        printf(" ");//presenta un espacio
        i++;//incrementa el valor de la variable del bucle
    }
    return 0;
}