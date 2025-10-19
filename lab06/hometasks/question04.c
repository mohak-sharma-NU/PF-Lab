/*
Question:4
Write a C program that takes an integer input from the user and checks whether It is a prime
number or not.
A prime number is a natural number greater than 1. That has no positive divisors other than 1
and itself.*/
#include<stdio.h>

int main(){

    int number;
    printf("Enter a number: ");
    scanf("\n%d",&number);

    int i=number;
    do{
        i--;
        if(number%i==0) break;

    }while(i>2);

    if(i==2)i=0;

    if(primeChecker(number)){
        printf("The given number is non-prime");
    }else{
        printf("The given number is prime");
    }

    return 0;
}


// int primeChecker(int n){

//     int i=n;
//     do{
//         i--;
//         if(n%i==0) break;

//     }while(i>2);

//     if(i==2)i=0;

//     return i;
// }