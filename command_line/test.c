#include<stdio.h>
int main(int argc, char *argv[]){
    
    int a = atoi(argv[1]);
    int binary[100];
    int d,i = 0;
    while(a>0){
        d = a % 2;
        binary[i] = d;
        a /= 2;
        i++;
    }
    while(i){
        printf("%d",binary[--i]);
    }
    return 0;
}