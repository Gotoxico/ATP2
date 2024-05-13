#include <stdio.h>
int main(){
    int n, i, j, count=0, num=0;
    printf("Digite n: ");
    scanf("%d", &n);
    printf("Digite i: ");
    scanf("%d", &i);
    printf("Digite j: ");
    scanf("%d", &j);
    while(count<n){
        if(num%i==0 || num%j==0){
            printf("%d", num);
            printf("\n");
            count++;}
        num++;
    }
}