#include<stdio.h>

float taxAmount(float gross){
    float tax;
    if(gross>0&&gross<=20000){
        tax=gross*0;
    }else if(gross>20001&&gross<=50000){
        tax=gross*0.1;
    }else if(gross>50000){
        float diff = gross-50000;
        tax+=diff*0.2;
        diff = 30000*0.1;
        tax+=30000*0.1;
    }
    return tax;
}

float netIncome(float tax,float gross){
    return gross-tax;
}

int main(){

    float gross;
    printf("Enter Gross Pay: ");
    scanf("%f",&gross);

    float tax,net;
    tax = taxAmount(gross);
    net = netIncome(tax,gross);

    printf("\nTax Amount: %.2f\nNet Income: %.2f",tax,net);

    return 0;
}