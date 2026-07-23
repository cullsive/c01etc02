#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

// ft_swap échange les valeurs des deux entiers pointés par a et b.
// On utilise une variable temporaire pour stocker *a le temps de l'échange.

// int main(void)
// {
//     int x = 10;
//     int y = 20;

//     ft_swap(&x, &y);

//     printf("x = %d, y = %d\n", x, y); // x = 20, y = 10
//     return 0;
// }
