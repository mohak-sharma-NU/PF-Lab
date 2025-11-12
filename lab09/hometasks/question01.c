#include<stdio.h>

float processTransaction(float limit,float amount){
    float amountRem;

    if(amount<=limit){
        amountRem = limit-amount;
        printf("Transaction Approved.");
        return amountRem;
    }else{
        printf("Limit reached.\nTransaction Declined.");
        return limit;
    }
}

int main(){
    float limit=5000,amount;
    printf("Enter the amount you want to withdraw: ");
    scanf("%f",&amount);
    printf("Enter the current limit: ");
    scanf("%f",&limit);
    limit = processTransaction(limit,amount);

}