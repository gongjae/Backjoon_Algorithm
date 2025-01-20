#include<stdio.h>

int main(){
    int car[5];
    int date;
    int i;
    int check = 0;

    scanf("%d",&date);
    for(i=0; i<5; i++){
        scanf("%d",&car[i]);
        if(date == car[i]) 
        check++;
    }
    printf("%d\n",check);
    return 0;

}