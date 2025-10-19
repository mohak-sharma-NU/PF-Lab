/*
Question:8
Write a C program to check whether a given number is a perfect number. 
A perfect number is a
positive integer that is equal to the sum 
of its proper positive divisors, excluding the number
itself*/
#include<stdio.h>

int main(){

    int n,sum=0;

    printf("Enter a number: ");
    scanf("\n%d",&n);

    int i=1;
    for(i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }

    if(n==sum){
        printf("The given number is a perfect number.");
    }else{
        printf("The given number is NOT a perfect number.");
    }

    return 0;
}