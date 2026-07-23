#include <stdio.h>

int ft_strlen(char *str){
    int i = 0; 
    while(str[i] != '\0'){
        i++; 
    }
    return i; 
}

// ft_strlen renvoie la longueur de la chaîne str.
// La fonction compte les caractères jusqu'au '\0', qui marque la fin de la chaîne.

// int main(void)
// {
//     char *texte = "Bonjour Ibrahim";
//     int len = ft_strlen(texte);
//     printf("Longueur : %d\n", len);
//     return 0;
// }

