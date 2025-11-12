#include<stdio.h>

float CalcRental(int days,int distance){

    float baserate = days*40;
    int i;
    
    float AVGdistance = distance/days;

    if(AVGdistance>100){
        float diff = AVGdistance-100;
        baserate+=diff*0.25;
    }

    if(days>=7){
        baserate-=baserate*0.1;
    }
    return baserate;
}

int main(){

    int rentalDays=0,distance=0;
    
    printf("Enter the Rental Days: ");
    scanf("%d",&rentalDays);

    printf("Enter the Distance: ");
    scanf("%d",&distance);

    float result = CalcRental(rentalDays,distance);

    printf("%.2f",result);

    return 0;
}