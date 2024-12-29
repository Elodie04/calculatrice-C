#include <stdio.h>
#include <stdlib.h>

/* Début du programme */

int main()
{
    char operateur;
    int premierNombre, secondNombre;
    int resultat;

    printf("Veuillez choisir un opérateur entre +, -, *, /, %% : \n");
    scanf(" %c", &operateur); // Ajout d'un espace avant %c pour gérer les caractères résiduels

    printf("Veuillez entrer un premier nombre : ");
    scanf("%d", &premierNombre);

    printf("Veuillez entrer un deuxième nombre : ");
    scanf("%d", &secondNombre);

    if (operateur == '+')
        resultat = premierNombre + secondNombre;
    else if (operateur == '-')
        resultat = premierNombre - secondNombre;
    else if (operateur == '*')
        resultat = premierNombre * secondNombre;
    else if (operateur == '/')
    {
        if (secondNombre != 0)
            resultat = premierNombre / secondNombre;
        else
        {
            printf("Erreur : division par zéro !\n");
            return 1; // Fin du programme en cas d'erreur
        }
    }
    else if (operateur == '%')
    {
        if (secondNombre != 0)
            resultat = premierNombre % secondNombre;
        else
        {
            printf("Erreur : modulo par zéro !\n");
            return 1; // Fin du programme en cas d'erreur
        }
    }
    else
    {
        printf("Erreur : opérateur inconnu.\n");
        return 1; // Fin du programme en cas d'erreur
    }

    // Affichage du résultat
    printf("Résultat : %d %c %d = %d\n", premierNombre, operateur, secondNombre, resultat);

    return 0;
}
