#include <stdio.h>
#include <math.h>//libreria para operaciones matematicas

int main() {
    int base;//valor para la base
    int radical;//valor para el radical
    int i = 1;//variable para el bucle

    printf("ingrese la base: ");//presenta un mensaje para ingresar la base
    scanf("%d", &base);//lee la base
    printf("ingrese el radical: ");//presenta un mensaje para ingresar el radical
    scanf("%d", &radical);//le el radical

    float valor = pow(base, 1.0 / radical);//valor que equivaldra al resultado de la radicacion

    printf("%d", base);//presenta el numero base
    while (i < radical) {//mientras que i sea menor que el radical se realizara el siguiente bucle
        if (i >= 0 && i < radical) {//si i es mayor o igual a 0 y menor que radical, presentara un "/"
            printf(" / ");
        }
        printf("%.2f", valor);//presenta el resultado de la radicacion
        i ++;//aunemta el valor de la variable del bucle
    }
    printf(" = %.2f\n", valor);//presenta el resultado
    printf("%d(1/%d) = %.2f", base, radical, valor);//presenta la simplificacion de la operacion
    return 0;
}