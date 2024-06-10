#include <stdio.h>

int main() {
    int numero1;//variable para el primer numero
    int numero2;//variable para el segundo numero
    int mcd = 1;//variable para el maximo comun divisor
    int minimo;//variable para el minimo entre los 2 numeros

    printf("ingrese el primer numero: ");//presenta un mensaje para ingresar el primer numero
    scanf("%d", &numero1);//lee el primer numero
    printf("ingrese el segundo numero: ");//presenta un mensaje para ingresar el segundo numero
    scanf("%d", &numero2);//lee el segundo numero

    if (numero1 < 0) {//si el primer numero es menor a 0 se multiplicara por -1
        numero1 *= (-1);
    }
    if (numero2 < 0) {//si el segundo numero es menor a 0 se multiplicara por -1
        numero2 *= (-1);
    }
    if (numero1 < numero2) {//si el primer numero es menor al segundo, el minimo sera el numero1
        minimo = numero1;
    } else {// de otro modo, el minimo sera el numero2
        minimo = numero2;
    }
    int i = 1;//variable para el bluce
    while (i <= minimo) {//mientras que i sea menor o igual al minimo se repetira el bucle
        if (numero1 % i == 0 && numero2 % i == 0) {//si el residuo tanto de numeo1 como de numero2 divididos para i es 0, el mcd tendra el valor de i
            mcd = i;
        }
        i++;//se aumenta el valor de la variable del bucle
    }
    printf("el maximo comun divisor entre %d y %d es: %d", numero1, numero2, mcd);//presenta el maximo comun divisor
    return 0;
}