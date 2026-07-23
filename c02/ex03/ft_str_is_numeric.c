#include <stdio.h>

int ft_str_is_numeric(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (!(str[i] >= '0' && str[i] <= '9'))
        {
            return 0;
        }
        i++;
    }
    return 1;
}



// ft_str_is_numeric fonctionne comme isdigit en C moderne.
// Dans la bibliothèque <ctype.h>, isdigit teste un seul caractère et renvoie 1
// s'il s'agit d'un chiffre (0–9), sinon 0. Ici, on applique cette logique à
// toute une chaîne sans utiliser <ctype.h>.
//
// La fonction renvoie 1 si tous les caractères de la chaîne sont des chiffres,
// et 0 si elle contient au moins un caractère non numérique.
//
// L’index i agit comme un index de tableau : chaque caractère est dans str[i].
// La fonction parcourt la chaîne jusqu’au '\0'. Si un caractère n'est pas un
// chiffre, elle renvoie immédiatement 0. Si tous les caractères sont valides,
// elle renvoie 1. Une chaîne vide est considérée comme valide et renvoie 1.




// int main(void)
// {
//     printf("%d\n", ft_str_is_numeric("12345"));   
//     printf("%d\n", ft_str_is_numeric("42Piscine")); 
//     printf("%d\n", ft_str_is_numeric(""));        

//     return 0;
// }

