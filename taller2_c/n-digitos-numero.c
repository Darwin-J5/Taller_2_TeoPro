#include <stdio.h>

int main() {
    int n;//variable del numero
    int cont = 0;//variable del contador de numeros

    printf("ingrese un numero: ");//presentara un mensaje para ingresar el numero
    scanf("%d", &n);//lee el numero
    while (n != 0) {//mientras que el numero sea diferente de 0 se repetira el bucle
        cont++;//se incrementa por 1 el valor del contador
        n /= 10;//se divide el valor del numero para 10
    }
    printf("el numero de digitos en el numero es de: %d", cont);//presenta la cantidad de numeros
    return 0;
}