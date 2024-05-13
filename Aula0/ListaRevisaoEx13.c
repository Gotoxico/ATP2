#include <stdio.h>
int main(){
    int p, fat=1;
    printf("Digite p: ");
    scanf("%d", &p);
    for(int i=p; i>0; i--){
        fat=fat*i;
    }
    printf("Fatorial: %d", fat);
    return 0;
}