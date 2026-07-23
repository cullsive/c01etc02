#include <stdio.h>
#include <unistd.h>

void ft_ultimate_div_mod(int *a, int *b)
{
    int div;
    int mod;

    div = *a / *b;
    mod = *a % *b;

    *a = div;
    *b = mod;
}

// ft_ultimate_div_mod remplace *a par la division entière de *a par *b,
// et remplace *b par le modulo de *a par *b. Cela permet de renvoyer
// deux résultats en modifiant directement les valeurs pointées.

// int main(void)
// {
//     int a = 10;
//     int b = 3;

//     ft_ultimate_div_mod(&a, &b);

//     printf("a = %d\n", a); 
//     printf("b = %d\n", b); 

//     return 0;
// }
