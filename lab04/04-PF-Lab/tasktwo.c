#include<stdio.h>

float askForDeals(float total){//question 2
    printf("How many pizzas do you want?");
    int amount;
    scanf("%d",&amount);
    if(amount>1){
        printf("Check out our Deals for small pizzas:");
        // showdeals(total);
    }else{
        total+=8;
        return total;
    }
}

float showdeals(float total,int amount){
    //question 3
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
    
}