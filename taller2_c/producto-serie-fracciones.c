#include <stdio.h>

int main() {
    int n;//variable para el numero
    int producto = 1;//variable para el producto total
    printf("ingrese la cantidad de numeros fraccionarios a multiplicar: ");//presenta un mensaje para ingresar la cantidad de numeros a multiplicar
    scanf("%d", &n);//lee el valor del numero

    int i = 1;//variable para el bucle
    while (i <= n) {//mientras i sea menor o igual al numero se repetira el bucle
        printf("1/%d", i);//presenta el valor de i bajo el valor "1/"
        if (i >= 0 && i < n) {//si i es mayor o igual a 0 y menor al numero se presentara un "*"
            printf(" * ");
        }
        producto *= i;//el valor del producto se multiplica por el valor de i
        i++;//ingrementa el valor de la variable del bucle
    }
    printf(" = 1/%d", producto);//presenta el producto final de la multiplicacion
    return 0;
}