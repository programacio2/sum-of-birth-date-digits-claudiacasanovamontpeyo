#include <stdio.h>

int main() 
{
        int dia, mes, a�o, suma;

        printf("Introduce tu dia de nacimiento: ");
        scanf_s("%d", &dia);


        printf("Introduce tu mes de nacimiento: ");
        scanf_s("%d", &mes);

        printf("Introduce tu a�o de nacimiento: ");
        scanf_s("%d", &a�o);

        suma = dia + mes + a�o;

        printf("%d + %d + %d = %d\n", dia, mes, a�o, suma);

}