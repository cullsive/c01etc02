#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (!(str[i] >= 'a' && str[i] <= 'z'))
        {
            return 0;
        }
        i++;
    }
    return 1;
}



// ft_str_is_lowercase renvoie 1 si la chaîne ne contient que des lettres
// minuscules (a–z), et 0 si elle contient au moins un caractère non minuscule.
// Cette fonction reproduit le comportement de islower du C moderne, mais
// appliqué à toute une chaîne et sans utiliser <ctype.h>.
//
// L’index i agit comme un index de tableau : chaque caractère est dans str[i].
// La fonction parcourt la chaîne jusqu’au '\0'. Si un caractère n'est pas une
// lettre minuscule, elle renvoie immédiatement 0. Si tous les caractères sont
// valides, elle renvoie 1. Une chaîne vide est considérée comme valide et
// renvoie 1.




// int main(void)
// {
//     printf("%d\n", ft_str_is_lowercase("bonjour"));
//     printf("%d\n", ft_str_is_lowercase("BonJour"));   
//     printf("%d\n", ft_str_is_lowercase("hello42"));   
//     printf("%d\n", ft_str_is_lowercase(""));          

//     return 0;
// }
