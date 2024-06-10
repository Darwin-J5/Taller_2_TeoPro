#include <stdio.h>

int mcd(int a, int b) {//funcion que calcula el maximo comun divisor
    if (b == 0) {
        return a;
    } return mcd(b, a % b);
}

int main() {
    int n;//variable del numero
    int numerador = 0;//variable del numerador
    int denominador = 1;//variable del denominador

    printf("ingrese la cantidad de fracciones a sumar: ");//presenta un mensaje para ingresar la cantidad a sumar
    scanf("%d", &n);//lee el numero

    int i = 1;//variable para el bucle
    while (i <= n) {//mientras que i sea menor o igual a n se repetira el bucle
        printf("1/%d", i);//presenta el valor de i bajo el "1/"
        if (i >= 0 && i < n) {//si i es mayor o igual a 0 y menor al numero, se presentara un "+"
            printf(" + ");
        }
        numerador = numerador * i + denominador;//se multiplica el numerador por i y se le suma el denominador
        denominador *= i;//se multiplica el denominador por i
        int divisor = mcd(numerador, denominador);//variable que equivaldra al maximo comun divisor entre el numerador y el denominador
        numerador /= divisor;//el numerador se lo divide para el divisor
        denominador /= divisor;//el denominador se lo divide para el divisor
        i++;//se aumenta el valor de la variable del bucle
    }
    printf(" = %d/%d", numerador, denominador);//se presenta el resultado de la operacion
    return 0;
}