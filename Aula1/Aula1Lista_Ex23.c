#include <stdio.h>
int main(){
    int n;
    printf("Digite n: ");
    scanf("%d", &n);
    int vetor[n], diferentes[n], count=0;
    for(int i=0; i<n; i++){
        printf("Digite número %d: ", i+1);
        scanf("%d", &vetor[i]);
        int flag=1;
        for(int j=0; j<count; j++){
            if(vetor[i]==diferentes[j]){
                flag=0;
                break;
            }
        }
        if(flag==1){
            diferentes[count]=vetor[i];
            count++;}
        else{}
    }
    if(count==1){
        printf("O vetor possui somentes números iguais, sendo ele o número %d", diferentes[0]);}
    else{
        printf("O vetor possui %d números diferentes, sendo eles ", count);
        for(int i=0; i<count; i++){
            printf("%d", diferentes[i]);
            if(i<count-1){
                printf(",");
            }
        }
    }
    return 0;

}