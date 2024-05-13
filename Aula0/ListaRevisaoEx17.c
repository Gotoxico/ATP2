#include <stdio.h>
int main(){
    int n, j;
    printf("Digite n: ");
    scanf("%d", &n);
    printf("Digite j: ");
    scanf("%d", &j);
    for(int i=0; i<n; i++){
        printf("%d", i*j);
        printf("\n");
    }
    return 0;
}