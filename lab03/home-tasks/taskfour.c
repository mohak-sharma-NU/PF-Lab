#include<stdio.h>

int main(){

    float budget, expenses;

    printf("Enter you daily budget: ");
    scanf("%f",&budget);

    printf("Enter your daily expenses: ");
    scanf("%f",&expenses);

    float leftover=budget-expenses;

    if(leftover>=0){
        printf("You've saved %f today!",leftover);
    }
    else{
        leftover =-1*leftover;
        printf("You've lost %f today!",leftover);
    }

    return 0;
}