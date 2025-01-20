#include<stdio.h>

int main(){
    int A[10];
    int B[10];
    int winA = 0;
    int winB = 0;
    int i;

    for(i=0;i<10;i++){
        scanf("%d",&A[i]);
    }

    for(i=0;i<10;i++){
        scanf("%d",&B[i]);
    }

    for(i=0;i<10;i++){
        if(A[i] > B[i])
            winA++;
        else if(A[i] < B[i])
            winB++;
    }
    if (winA > winB)printf("A\n");
    else if(winA < winB)printf("B\n");
    else if (winA == winB)printf("D\n");

}
