#include<stdio.h>

void freeGarlicBread(int amount,int crust){

    if(amount==3&&crust==2){
        printf("You get free Garlic Bread!");
    }
    else{

    }
}

int main(){

    int amount=0,crust=0;
    printf("Enter the amount (1-3) and crust \n0.Regular, \n1.Thin, \n2.Stuffed.\n");

    scanf("%d",&amount);
    scanf("%d",&crust);

    freeGarlicBread(amount,crust);
}