#include<stdio.h>


float calculation(int amount,float weight){

    float shipping = 0;

    if(amount>=100){
        return amount+=shipping;
    }else if(amount<100&&weight<2){
        shipping = 10;
    }else if(amount<100&&weight<5){
        shipping = 15;
    }else if(amount<100&&weight>2){
        shipping = 20;
    }
    return amount+=shipping;
}

int main(){

    int amount=0;
    float weight=0;

    printf("Enter the amount: ");
    scanf("%d",&amount);
    printf("Enter the weight: ");
    scanf("%f",&weight);

    float result = calculation(amount,weight);

    printf("%f",result);

    return 0;
}