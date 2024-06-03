#include<stdio.h>

int main(void){
    int A[3];
    int B[3];
    scanf("%d",&A);
    scanf("%d",&B);
    printf("%d\n",A[0]*(B[0]%10));
    printf("%d\n",A[0]*((B[0]/10)%10));
    printf("%d\n",A[0]*((B[0]/10)/10));
    printf("%d",A[0]*B[0]);

    return 0;
}


