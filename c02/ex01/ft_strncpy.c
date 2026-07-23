#include <stdio.h>
#include <unistd.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i = 0;

    while (i < n && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return dest;
}


// ft_strncpy reproduit le comportement de strncpy du C moderne.
// strncpy vient de la bibliothèque <string.h>, mais ici on la réécrit nous-mêmes.
// La fonction copie au maximum n caractères de src vers dest.
// L’index i agit comme un index de tableau : chaque caractère est dans une case src[i].
// Si src est plus courte que n, le reste de dest est rempli avec des '\0'.
// dest doit être assez grand pour contenir au moins n caractères.
// Les espaces comptent aussi dans la longueur d’une chaîne.
// On affiche dest avec %s car c’est une chaîne de caractères. et non un entie int en %d


// int main(void)
// {
//     char src[] = "Bonjour Ibrahim";
//     char dest[50];

//     ft_strncpy(dest, src, 7);

//     printf("dest = %s\n", dest);

//     return 0;
// }
