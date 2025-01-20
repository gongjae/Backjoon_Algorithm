#include<stdio.h>

int main(){
    int K; //과자 한 개 가격
    int N; //과자 개수
    int M; //현재 가진 돈
//K * N > M 일 때 엄마한테 돈 받아야함
//고로 K * N - M 하면 엄마한테 받을 돈 구하기 가능
scanf("%d %d %d",&K, &N, &M);
if(K * N > M)
    printf("%d\n",K * N - M);
else
    printf("0\n");

}