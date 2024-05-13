#include <stdio.h>
int verificadoriguaisvetor(int n, int vetor[]){
    int flag=1, count=0, diferentes[n];
    for (int i = 0; i < n; i++) {
        flag = 1;
        for(int j=0; j<count; j++){
            if(vetor[i]==diferentes[j]){
                flag=0;
                break;}
        }
        if(flag==1){
            diferentes[count]=vetor[i];
            count++;}
        else{}
    }
    if(count==1){
        return -1;}
    else{
        return count;
    }
}
int main(){
    int n, iguais;
    printf("Digite n: ");
    scanf("%d", &n);
    int vetor[n];
    for(int i=0; i<n; i++){
        printf("Digite %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
    iguais=verificadoriguaisvetor(n, vetor);
    printf("%d", iguais);
    return 0;
}