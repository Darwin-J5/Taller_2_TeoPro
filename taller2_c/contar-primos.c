#include <stdio.h>

int primo(int numero) {//funcion que determina si el numero es primo
    if (numero <= 1) {//si el numero es menor o igual a 1, retornara a 0
        return 0;
    }
    int i = 2;//variable para el bucle
    while (i * i <= numero) {//mientras i por i sean menores o iguales al numero se repetira el bucle
        if (numero % i == 0) {//si el residuo del numero sobre i es 0, retornara a 0
            return 0;
        }
        i++;//aumenta el valor de la varaible del bucle
    }
    return 1;
}

int main() {
    int n;//variable del numero
    printf("ingresa el numero limite del conteo de primos: ");//presenta un mensaje que solicita ingresar el numero limite hasta donde contar los primos
    scanf("%d", &n);//lee el numero

    int i = 2;//variable para el bucle
    while (i <= n) {//mientras que i sea menor o igual que el numero se repetira el bucle
        if (primo(i)) {//si se cumple la funcion del numero primo con respecto a i, se presentara el valor de i
            printf("%d ", i);
        }
        i++;//aumenta el valor de la variable del bucle
    }
    return 0;
}