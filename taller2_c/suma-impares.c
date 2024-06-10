#include <stdio.h>

int main() {
    int n;//valor del numero
    int impar = 1;//valor de los impares
    int suma = 0;//valor de la suma total
    printf("ingrese la cantidad de impares que desea sumar: ");//presenta un mensaje para ingresar la cantidad de numero a sumar
    scanf("%d", &n);//lee el numero

    int i = 1;//variable para el bucle
    while (i <= n) {//mientras i sea menor o igual al numero se repetira el bucle
        printf("%d ",impar);//presentara el valor del impar
        if (i >= 0 && i < n) {//si i es mayor o igual a 0 y menor al numero, sepresentara un "+"
            printf(" + ");
        }
        suma += impar;//al valor de la suma se le añade el impar
        impar += 2;//el impar incrementa en 2
        i++;//incrementa el valor de la variable del bucle
    }
    printf(" = %d", suma);//presenta la suma total
    return 0;
}