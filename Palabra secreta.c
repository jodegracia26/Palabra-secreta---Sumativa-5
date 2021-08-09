#include <stdio.h>
#include <string.h>
// Este programa permitira al usuario adivinar una palabra secreta
// El usuario tiene un maximo de 3 intentos para lograrlo.

int main()
{
    int i;
    char intento [20]; //intento es el nombre de la variable y 20 el size del string
    printf("Adivina la palabra secreta\t Tienes 3 intentos\n");
    for(i=0; i<3; i++){
        printf("Intento %d: ", i+1);
        scanf("%s",&intento); //es un string por lo tanto usar %s
        if(strncmp(intento, "Jodegracia",5)== 0){ // if (strncmp(name, "John", 4) == 0) {
            printf("Es correcto la palabra secreta es %s", "Jorge");
            return 0;
        } else {
            printf("Intente nuevamente\n");
        }

    }

}