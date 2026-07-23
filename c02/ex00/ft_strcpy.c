#include <stdio.h>
#include <unistd.h>

char *ft_strcpy(char *dest, char *src)
{
    int i = 0;

    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}


// ft_strcpy reproduit le comportement de strcpy du C moderne.
// strcpy vient de la bibliothèque <string.h>, mais ici on la réécrit nous-mêmes.
// La fonction copie la chaîne src dans dest, puis retourne dest.
// Dans le main, dest doit avoir une taille suffisante pour contenir la copie.
// Ici, dest fait 50 caractères : les espaces comptent aussi dans la longueur.
// Pour afficher une chaine, on utilise %s dans printf.


// int main(void)
// {
//     char src[] = "Bonjour Ibrahim";
//     char dest[50];

//     ft_strcpy(dest, src);

//     printf("dest = %s\n", dest);

//     return 0;
// }
