//Contar o número de ocorrências de cada uma das letras do alfabeto em um arquivo//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    FILE *file;
    file = fopen("Lista7_Ex5.txt", "r");

    if(file == NULL){
        printf("O arquivo nao foi aberto!");
        return(1);
    }

    char caractere;
    int a=0, b=0, c=0, d=0, e=0, f=0, g=0, h=0, i=0, j=0, k=0, l=0, m=0, n=0, o=0, p=0, q=0, r=0, s=0, t=0, u=0, v=0, w=0, x=0, y=0, z=0;

    while(!feof(file)){
        fscanf(file, "%c", &caractere);
        if(caractere=='a'|| caractere=='A'){
            a++;
        }
        if(caractere=='b'|| caractere=='B'){
            b++;
        }
        if(caractere=='c'|| caractere=='C'){
            c++;
        }
        if(caractere=='d'|| caractere=='D'){
            d++;
        }
        if(caractere=='e'|| caractere=='E'){
            e++;
        }
        if(caractere=='f'|| caractere=='F'){
            f++;
        }
        if(caractere=='g'|| caractere=='G'){
            g++;
        }
        if(caractere=='h'|| caractere=='H'){
            h++;
        }
        if(caractere=='i'|| caractere=='I'){
            i++;
        }
        if(caractere=='j'|| caractere=='J'){
            j++;
        }
        if(caractere=='k'|| caractere=='K'){
            k++;
        }
        if(caractere=='l'|| caractere=='L'){
            l++;
        }
        if(caractere=='m'|| caractere=='M'){
            m++;
        }
        if(caractere=='n'|| caractere=='N'){
            n++;
        }
        if(caractere=='o'|| caractere=='O'){
            o++;
        }
        if(caractere=='p'|| caractere=='P'){
            p++;
        }
        if(caractere=='q'|| caractere=='Q'){
            q++;
        }
        if(caractere=='r'|| caractere=='R'){
            r++;
        }
        if(caractere=='s'|| caractere=='S'){
            s++;
        }
        if(caractere=='t'|| caractere=='T'){
            t++;
        }
        if(caractere=='u'|| caractere=='U'){
            u++;
        }
        if(caractere=='v'|| caractere=='V'){
            v++;
        }
        if(caractere=='w'|| caractere=='W'){
            w++;
        }
        if(caractere=='x'|| caractere=='X'){
            x++;
        }
        if(caractere=='y'|| caractere=='Y'){
            y++;
        }
        if(caractere=='z'|| caractere=='Z'){
            z++;
        }

        }
    fclose(file);
    printf("Quantidade a||A: %d\nQuantidade b||B: %d\nQuantidade c||C: %d\nQuantidade d||D: %d\nQuantidade e||E: %d\nQuantidade f||F: %d\nQuantidade g||G: %d\nQuantidade h||H: %d\nQuantidade i||I: %d\nQuantidade j||J: %d\nQuantidade k||K: %d\nQuantidade l||L: %d\nQuantidade m||M: %d\nQuantidade n||N: %d\nQuantidade o||O: %d\nQuantidade p||P: %d\nQuantidade q||Q: %d\nQuantidade r||R: %d\nQuantidade s||S: %d\nQuantidade t||T: %d\nQuantidade u||U: %d\nQuantidade v||V: %d\nQuantidade w||W: %d\nQuantidade x||X: %d\nQuantidade y||Y: %d\nQuantidade z||Z: %d", a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z);
}