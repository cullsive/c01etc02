#include <stdio.h>
#include <unistd.h>

int ft_str_is_alpha(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (!((str[i] >= 'A' && str[i] <= 'Z') ||
              (str[i] >= 'a' && str[i] <= 'z')))
        {
            return 0;
        }
        i++;
    }
    return 1;
}




// isalpha vient de la bibliothèque <ctype.h>, comme ses fonctions associées
// (isdigit, isspace, isupper, islower). Ici, on réécrit le comportement de
// isalpha nous-mêmes sans utiliser <ctype.h>.
//
// ft_str_is_alpha renvoie 1 si la chaîne ne contient que des lettres
// alphabétiques (A–Z ou a–z), et 0 si elle contient au moins un caractère
// non alphabétique.
//
// L’index i agit comme un index de tableau : chaque caractère est accessible
// via str[i]. La fonction parcourt la chaîne caractère par caractère jusqu’au
// '\0'. Si un caractère n’est pas une lettre, elle renvoie immédiatement 0.
//
// Si tous les caractères sont alphabétiques, la fonction renvoie 1.
// Une chaîne vide est considérée comme valide et renvoie 1.




// int main(void)
// {
//     printf("%d\n", ft_str_is_alpha("Hello"));    
//     printf("%d\n", ft_str_is_alpha("Hello42"));  
//     printf("%d\n", ft_str_is_alpha(""));        

//     return 0;
// }
