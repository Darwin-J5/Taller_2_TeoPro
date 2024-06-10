#include <stdio.h>

int main() {
    int n;//variable del numero
    int suma = 0;//variable del resultado de la suma
    printf("ingrese la cantidad de numeros a sumar de la serie 1, 2, 3..., n: ");//presenta un mensaje que pide la cantidad de numeros a sumar
    scanf("%d", &n);//lee el numero
    
    int i = 1;//variable para el bucle
    while (i <= n) {//mientras que i sea menor o igual al numero se repetira el bucle
        printf("%d", i);//presenta el valor de i
        if (i >= 1 && i < n) {//si i es mayor o igual a 1 y menor que el numero se presentara un "+"
            printf(" + ");
        }
        suma += i;//suma el valor actual de i al resultado
        i++;//aumenta el valor de la variable del bucle
    }
    printf(" = %d", suma);//presenta el resultado
    return 0;
}