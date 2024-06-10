#include <stdio.h>

int main() {
    int n;//variable para el numero
    int producto = 1;//variable para el producto final
    printf("ingrese la cantidad de numeros a multiplicar de la serie 1, 2, 3..., n: ");//presenta un mensaje para ingresar la cantidad de numeros a multiplicar
    scanf("%d", &n);//lee la cantidad de numeros

    int i = 1;//variable para el bucle
    while (i <= n) {//mientras que i sea menor o igual al numero se repetira el bucle
        printf("%d", i);//se presentara el valor de i
        if(i >= 1 && i < n) {//si i es mayor o igual a 1 y menor al numero se presentara un "*"
            printf(" * ");
        }
        producto *= i;//el valor del producto se multiplicara con el de i
        i++;//aumentara el valor de la variable del bucle
    }
    printf(" = %d", producto);//presenta el producto final
    return 0;
}