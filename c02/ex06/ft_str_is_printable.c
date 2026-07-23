#include <stdio.h>
#include <unistd.h>


int ft_str_is_printable(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (!(str[i] >= 32 && str[i] <= 126))
        {
            return 0;
        }
        i++;
    }
    return 1;
}


// ft_str_is_printable renvoie 1 si la chaîne ne contient que des caractères
// imprimables (codes ASCII 32 à 126), et 0 si elle contient au moins un
// caractère non imprimable. Cela reproduit le comportement de isprint du
// C moderne, mais appliqué à toute une chaîne et sans utiliser <ctype.h>.
//
// La fonction parcourt la chaîne jusqu’au '\0'. Si un caractère n'est pas
// imprimable, elle renvoie immédiatement 0. Si tous les caractères sont valides,
// elle renvoie 1. Une chaîne vide est considérée comme valide et renvoie 1.
// meme logique encore une foixxxxxxxxxxxxxxxxxxssssssssss 😄😄



// int main(void)
// {
//     printf("%d\n", ft_str_is_printable("Hello!"));  
//     printf("%d\n", ft_str_is_printable("42 Piscine")); 
//     printf("%d\n", ft_str_is_printable("\n"));      
//     printf("%d\n", ft_str_is_printable(""));         

//     return 0;
// }

