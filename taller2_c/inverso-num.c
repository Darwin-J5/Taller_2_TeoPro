#include <stdio.h>

int main() {
    int n;//variable para el numero
    int reverso = 0;//variable para el reverso
    int rev;//variable de apoyo para el reverso

    printf("Ingrese un numero: ");//presenta un mensaje para ingresar el numero
    scanf("%d", &n);//lee el numero

    while (n != 0) {//mientras que el numero sea diferente de 0 se repetira el siguiente bucle
        rev = n % 10;//el valor de rev equivaldra al residuo de la division del numero sobre 10
        reverso = reverso * 10 + rev;//el valor de reverso sera el del mismo por 10 mas el de rev
        n /= 10;//el valor del numero se dividira a si mismo para 10
    }
    printf("el reverso del numero es: %d ", reverso);//presenta el reverso del numero
    return 0;
}