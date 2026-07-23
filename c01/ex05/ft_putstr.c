#include <unistd.h>

void ft_putstr(char *str){
    int i = 0;
    while(str[i] != '\0'){
        write(1, &str[i], 1);
        i++;
    }
}

// ft_putstr affiche la chaîne str caractère par caractère en utilisant write.
// La fonction parcourt la chaîne jusqu'au '\0' et écrit chaque caractère sur
// la sortie standard 

// int main(void)
// {
//     char lora[] = "cullsive de chez culls";
//     ft_putstr(lora);
//     return 0;
// }
