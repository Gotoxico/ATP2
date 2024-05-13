#include <stdio.h>
float valor_desconto(float valor, float desconto){
    float novo_valor, valor_desconto;
    valor_desconto=valor*desconto;
    novo_valor=valor-valor_desconto;
    return novo_valor;
}
int main(){
    float valor, desconto, novo_valor;
    printf("Digite valor original: ");
    scanf("%f", &valor);
    printf("Digite desconto em decimal: ");
    scanf("%f", &desconto);
    novo_valor=valor_desconto(valor, desconto);
    printf("Valor com desconto: %f", novo_valor);
    return 0;
}