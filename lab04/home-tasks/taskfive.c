#include<stdio.h>

float extraCheese(float total){

    printf("Do you want extra cheese (y/n)? ");
    char a='z';
    scanf("%c",&a);
    if(a=='y'||a=='Y'){
        total+=1.50;
        return total;
    }
    else if(a=='n'||a=='N'){
        return total;
    }
    else
        printf("Please enter Y/y for Yes or N/n for  no.");
    return total;
}

int main(){
    int amount;
    float total=0;
    float result = extraCheese(total);
    printf("Yout total with cheese is: %f",result);
}