#include <stdio.h>

int ft_str_is_uppercase(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (!(str[i] >= 'A' && str[i] <= 'Z'))
        {
            return 0;
        }
        i++;
    }
    return 1;
}



// ft_str_is_uppercase renvoie 1 si la chaîne ne contient que des lettres
// majuscules (A – Z), et 0 si elle contient au moins un caractère non majuscule.
// Cette fonction reproduit le comportement de isupper du C moderne, mais
// appliqué à toute une chaîne et sans utiliser <ctype.h>.
//
// L’index i agit comme un index de tableau : chaque caractère est dans str[i].
// La fonction parcourt la chaîne jusqu’au '\0'. Si un caractère n'est pas une
// lettre majuscule, elle renvoie immédiatement 0. Si tous les caractères sont
// valides, elle renvoie 1. Une chaîne vide est considérée comme valide et
// renvoie 1.




// int main(void)
// {
//     printf("%d\n", ft_str_is_uppercase("BONJOUR"));   
//     printf("%d\n", ft_str_is_uppercase("Bonjour"));   
//     printf("%d\n", ft_str_is_uppercase("HELLO42"));   
//     printf("%d\n", ft_str_is_uppercase(""));          

//     return 0;
// }
