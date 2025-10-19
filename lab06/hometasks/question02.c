/*
Question:2
Write a C program that user performs multiplication and
 division without using the * and /*/
#include<stdio.h>

int main(){

    //To multiply we need a number and a multiplier: 
    int number=1256,multiplier=12,multi=0,quotient=0;

    //Since multiplication = repeated addition:
    for(int i=0;i<multiplier;i++){
        multi+=number;
    }
    printf("\nResult of Multiplication: %d",multi);

    //To divide, we minus repeadly until divisor leaves a remainder.
    int remainder=number;
    do{
        remainder-=multiplier;
        quotient++;
    }while(multiplier<=remainder);

    printf("\nResult of Divison: \nnumber: %d\nmultiplier: %d\nquotient: %d\nremainder: %d\n",number,multiplier,quotient,remainder);

    return 0;
}