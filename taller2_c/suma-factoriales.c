#include <stdio.h>

int main() {
    int n;//valor del numero
    int factorial;//numero en factorial
    int suma_factoriales;//valor de la suma de los factoriales
    int multiplo;//valor de multiplicacion

    printf("escriba el numero de factoriales a sumar: ");//presenta un mensaje que pide un numero
    scanf("%d", &n);//lee el numero
    int i = 1;//variable para el bucle
    while (i <= n) {//mientras que i sea menor o igual a n se repetira el bucle
        printf("%d!", i);//se imprimira el valor de i con un "!"
        factorial = 1;//factorial tomara el valor de 1
        multiplo = 1;//multiplo tomara el valor de 1
        int j = 1;//variable para el segundo bucle
        while (j <= i) {//mientras j sea menor o igual a i se repetira el bucle
            factorial *= multiplo;//factorial se multiplicara por el multiplo
            multiplo++;//aumenta el valor de multiplo
            j++;//aumenta el valor de la variable del segundo bucle
        }
        if (i >= 0 && i < n) {//si i es menor o igual a 0 y menor al numero se presentara un "+"
            printf(" + ");
        }
        suma_factoriales += factorial;//al valor de la suma de los factoriales se le suma el valor del factorial
        i++;//aumenta el valor de la variable del bucle
    }
    printf(" = ");//presenta un igual
    factorial = 1;//factorial toma el valor de 1
    multiplo = 1;//multiplo toma el valor de 1
    int k = 1;//varialble para un tercer bucle
    while (k <= n) {//mientras k sea menor o igual al numero se repetira el bucle
        factorial *= multiplo;//el valor de factorial se multiplica por el del multiplo
        multiplo++;//aumenta el valor del multiplo
        printf("%d", factorial);//presenta el valor del factorial
        if (k >= 0 && k < n) {//si k es mayor o igual a 0 y menor al numero se presentara un "+"
            printf(" + ");
        }
        k++;//aumenta el valor de la variable del tercer bucle
    }
    printf(" = %d", suma_factoriales);//presenta el valor de la suma de los factoriales
    return 0;
}