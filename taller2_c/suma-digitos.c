#include <stdio.h>

int main() {
    int n;//variable del numero
    int suma = 0;//variable de la suma de los digitos
    int sobrante;//variable de reserva

    printf("Ingrese un numero: ");//presenta un mensaje que pide ingresar el numero
    scanf("%d", &n);//lee el numero

    while(n != 0) {//mientras que el numero sea diferente de 0 se repetira el siguiente bucle
        sobrante = n % 10;// el sobrante tendra el valor del residuo de la divicion del numero sobre 10
        n /= 10;//el numero pasara a tener su valor sobre 10
        suma += sobrante;// se sumara la cantidad actual mas el residuo
    }
    printf("La suma de los digitos es: %d", suma);//presenta la respuesta
    return 0;
}