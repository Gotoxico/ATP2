#include <stdio.h>
int main(){
    int p, flag=1;
    printf("Digite p: ");
    scanf("%d", &p);
    for(int i=2; i<=p/2; i++){
        if(p%i==0){
            flag=0;}
    }
    if(flag==1){
        printf("%d e primo!", p);}
    else{
        printf("%d nao e primo!", p);
    }
    return 0;
}