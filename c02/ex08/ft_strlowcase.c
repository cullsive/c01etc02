#include <stdio.h>
#include <unistd.h>


char *ft_strlowcase(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        i++;
    }
    return str;
}



// ft_strlowcase transforme toutes les lettres majuscules d'une chaîne en
// minuscules. Les autres caractères sont laissés inchangés. Cette fonction
// reproduit le comportement de tolower du C moderne, mais appliqué à toute
// une chaîne et sans utiliser <ctype.h>.
//
// La fonction parcourt la chaîne jusqu'au '\0'. Si un caractère est une
// lettre majuscule (A–Z), il est converti en minuscule en ajoutant 32,
// conformément à la table ASCII. La chaîne modifiée est ensuite renvoyée.




// int main(void)
// {
//     char s1[] = "BONJOUR";
//     char s2[] = "42PISCINE";
//     char s3[] = "HELLO_WORLD!";
//     char s4[] = "";

//     printf("%s\n", ft_strlowcase(s1));
//     printf("%s\n", ft_strlowcase(s2)); 
//     printf("%s\n", ft_strlowcase(s3)); 
//     printf("%s\n", ft_strlowcase(s4)); 

//     return 0;
// }
