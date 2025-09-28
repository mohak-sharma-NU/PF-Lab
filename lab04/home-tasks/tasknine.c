#include<stdio.h>

float askForDelivery(float total){
    printf("Do you want 1.Delivery($3) or 2.Pickup?");
    int choice=0;
    scanf("%d",&choice);
    if(choice==1){
        total+=3;
        return total;
    }else{
        return total;
    }
}

int main(){

    float total = 23;
    float result = askForDelivery(total);

    printf("Your total with delivery is: %f",result);
    
    return 0;
}