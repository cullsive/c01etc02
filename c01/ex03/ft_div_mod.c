#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod){
    *div = a / b; 
    *mod = a % b;
}

// ft_div_mod calcule la division entière et le modulo de a par b.
// Le résultat de a / b est stocké dans *div, et celui de a % b dans *mod.

// int main(void)
// {
//     int d;
//     int m;

//     ft_div_mod(10, 3, &d, &m);

//     printf("div = %d\n", d); // 3
//     printf("mod = %d\n", m); // 1

//     return 0;
// }
