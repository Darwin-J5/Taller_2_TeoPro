#include <stdio.h>

int main() {
    int n;//variable del numero
    int resultado = 1;//variable del resultado

    printf("ingrese el numero factorial: ");//presenta un mensaje para ingresar el factorial
    scanf("%d", &n);//lee el factorial
    printf("%d! = ", n);//presenta el numero factorial
    while (n != 0){//mientras que el numero sea diferente de 0 se repetira el bucle
        printf("%d", n);//presenta el numero
        if (n > 1) {//si el numero es mayor a 1 se presentara un "*"
            printf(" * ");
        }
        resultado *= n;//el valor del resultado se multiplicara por el del numero
        n -= 1;//al numero se le restara 1
    }
    printf(" = %d", resultado);//se presentara el resultado
    return 0;
}