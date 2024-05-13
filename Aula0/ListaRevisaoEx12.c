#include <stdio.h>
int main(){
    int a, b, pot=1;
    printf("Digite a: ");
    scanf("%d", &a);
    printf("Digite b: ");
    scanf("%d", &b);
    if(b==0){
        pot=1;}
    else{
        if(b==1){
            pot=a;}
        else{
            for(int i=0; i<b; i++){
                pot=pot*a;
            }
        }
    }
    printf("Potencia: %d", pot);
    return 0;
}