#include <stdio.h>
int main(){
float compras, imposto;
printf("Digite o valor das compras:\n");
scanf("%f", &compras);
if (compras > 500)
{
    imposto = (compras - 500) * 0.5;
    printf("O valor de imposto e: %.2f", imposto);
}else{
    printf("O valor de imposto e: 0");
}

return 0;
}
