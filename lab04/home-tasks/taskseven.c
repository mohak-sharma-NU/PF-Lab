#include<stdio.h>

float studentDiscount(float total){
    
    printf("Are you a student(y/n)? ");
    char a='z';
    scanf("%c",&a);
    if(a=='y'||a=='Y'){
        total-=2;
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
    float total=23;
    float result = studentDiscount(total);

    printf("Yout total with student discount is: %f",result);
}