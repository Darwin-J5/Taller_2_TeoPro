#include <stdio.h>
#include <math.h>//libreria para operaciones matematicas

int main() {
    int n;//variable del numero
    int suma = 0;//valor de la suma total

    printf("ingrese la cantidad de numeros a sumar: ");//presenta un mensaje que solicita la cantidad de numeros a sumar
    scanf("%d", &n);//lee el numero

    int i = 1;//variable para el bucle

    while (i <= n) {//mientras que i sea menor o igual al numero se repetira el bucle
        printf("%d^3", i);//presenta el valor de i mas un "^3"
        if (i >= 0 && i < n) {//si i es mayor o igual a 0 y menor que el numero, se presentara un "+"
            printf(" + ");
        }
        suma += pow(i, 3);//al valor de la suma se le aumentara el de la potencia de i al cubo
        i++;//se aumenta el valor de la variable del bucle
    }
    printf(" = %d", suma);//presenta la suma de la operacion
    return 0;
}