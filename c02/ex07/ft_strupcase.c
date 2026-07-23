#include <stdio.h>
#include <unistd.h>

char *ft_strupcase(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        i++;
    }
    return str;
}


// ft_strupcase transforme toutes les lettres minuscules d'une chaîne en
// majuscules. Les autres caractères sont laissés inchangés. Cette fonction
// reproduit le comportement de toupper du C moderne, mais appliqué à toute
// une chaîne et sans utiliser <ctype.h>.

// La fonction parcourt la chaîne jusqu'au '\0'. Si un caractère est une
// lettre minuscule (a–z), il est converti en majuscule en soustrayant 32,
// conformément à la table ASCII. La chaîne modifiée est ensuite renvoyée.



// int main(void)
// {
//     char s1[] = "bonjour";
//     char s2[] = "42Piscine";
//     char s3[] = "hellocullsive_";
//     char s4[] = "";

//     printf("%s\n", ft_strupcase(s1)); 
//     printf("%s\n", ft_strupcase(s2)); 
//     printf("%s\n", ft_strupcase(s3)); 
//     printf("%s\n", ft_strupcase(s4)); 

//     return 0;
// }

