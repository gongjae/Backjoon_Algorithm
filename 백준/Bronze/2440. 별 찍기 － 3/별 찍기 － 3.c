#include<stdio.h>

int main(){
    int i, j;
    int num;
    scanf("%d",&num);

    for(i=1; i<=num; i++){
        for(j=0; j<=num-i; j++){
            printf("*");
        }
        printf("\n");
    }
}