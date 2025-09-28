#include<stdio.h>

float timeDiscount(float total){

    printf("What is the time right now (hh.mm, 24hr clock) ?");
    float time=0;
    scanf("%f",&time);
    if(time>11&&time<14){
        float discount = total*0.10;
        total+=discount;
        return total;
    }
    else{
        return total;
    }
}

int main(){

    int amount;
    float total=23;
    float result = timeDiscount(total);

    printf("Yout total with time discount is: %f",result);

}