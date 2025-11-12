#include<stdio.h>

float calculation(float bill,int people){

    //temp variable for tracking food cost.
    float temp = bill;

    //Tax charge.
    temp+=(bill)*0.08;

    //Tip calculation
    if(bill>=50){
        temp+=(bill)*0.15; 
    }else if(bill<50){
        temp+=(bill)*0.1;
    }

    //Service charge
    if(people>6){
        temp+=(bill)*0.05;
    }

    return temp;
}

int main(){

    float bill;
    int people;

    printf("Enter Gross bill: ");
    scanf("%f",&bill);
    printf("Enter the total number of people: ");
    scanf("%f",&people);

    float result = calculation(bill,people);

    printf("The total bil is: %.2f",result);

    return 0;
}