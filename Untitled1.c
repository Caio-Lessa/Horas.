#include <stdio.h>
int main(){
int hora;
printf("Digite a hora (entre 0 e 23):\n");
scanf("%i", &hora);


if ((hora >= 18 && hora <= 23) || (hora >= 0 && hora <= 5))
{
    printf("Escuro");
}

return 0;
}
