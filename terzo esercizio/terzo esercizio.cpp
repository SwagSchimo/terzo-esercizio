// terzo esercizio.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Scrivere un programma che risolva equazioni di secondo grado: y = ax2 + bx + c

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

int main()
{
    int a, b, c;
    float x1, x2;

    printf("Inserisci i vari valori dell'equazione \n"); 
    printf("Inserire a: ");
    scanf("%d", &a);
    printf("Inserire b: ");
    scanf("%d", &b);
    printf("Inserire c: ");
    scanf("%d", &c);

    if (a == 0)
    {
        printf("NON PUOI DIVIDERE PER ZERO\n"); 
    }
    else
    {
        float delta; 
        delta = (b * b) - (4 * a * c);
        if (delta < 0) {
            printf("Il delta e' negativo (%f). L'equazione non ha soluzioni reali.\n", delta);
        }
        else
        {
            x1 = ((-b + sqrt(delta)) / (2 * a));
            x2 = ((-b - sqrt(delta)) / (2 * a));

            printf("x1 e' uguale a %f \n", x1);
            printf("x2 e' uguale a %f \n", x2);
        }
    }

}
