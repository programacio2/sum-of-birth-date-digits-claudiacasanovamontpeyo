#include <stdio.h>

int main() 
{
        int dia, mes, año, suma;

        printf("Introduce tu dia de nacimiento: ");
        scanf_s("%d", &dia);


        printf("Introduce tu mes de nacimiento: ");
        scanf_s("%d", &mes);

        printf("Introduce tu año de nacimiento: ");
        scanf_s("%d", &año);

        suma = dia + mes + año;

        printf("%d + %d + %d = %d\n", dia, mes, año, suma);

}