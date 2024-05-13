#include <stdio.h>
int fib(int n){
    if(n==1){
        return 1;}
    else{
        if(n==2){
            return 1;
        }
        else{
            return fib(n-2)+fib(n-1);
        }
    }
}
int main(){
    int n, termo;
    printf("Digite n: ");
    scanf("%d", &n);
    termo=fib(n);
    printf("Termo: %d", termo);
    return 0;
}