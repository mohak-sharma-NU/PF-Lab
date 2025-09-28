#include<stdio.h>

float showdeals(float total,int amount){

    if(amount==1){
        total+=8;
        return total;
    }else if(amount==2){
        total+=15;
        return total;
    }else if(amount ==3){
        total+=21;
        return total;
    }
    else
        printf("Enter an integer between 1 and 3 pizzas");
    return total;
}

int main(){

    int amount;
    printf("Enter the amount of pizzas you want (1-3): ");
    scanf("%d",&amount);
    float total=0;
    float result = showdeals(total,amount);

    printf("Your total is: %f",result);
}