#include <stdio.h>
int main(){
    int num;
    printf("Digite num: ");
    scanf("%d", &num);
    if(num%2!=0){
        printf("Cubo: %d", num*num*num);}
    else{
        printf("Quadrado: %d", num*num);
    }
    return 0;
}