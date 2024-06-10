#include <stdio.h>

int main() {
    int n;//valor del numero
    int cont = 0;//valor del contador
    printf("ingrese un numero: ");//presenta un mensaje para ingresar el numero
    scanf("%d", &n);//lee el numero

    int i = 1;//variable para el bucle
    while (i <= n) {//mientras i sea menor o igual a n se repetira el bucle
        if (n % i == 0) {//si el residuo de n sobre i es 0 el contador aumentara en 1
            cont++;
        }
        i++;//aumenta el valor de la variable del bucle
    }
    if (cont == 2) {//si el valor de cont equivale a 2 presentara que el numero es primo
        printf("el numero es primo");
    } else {//de otro modo presentara que el numero no es primo
        printf("el numero no es primo");
    }
    return 0;
}