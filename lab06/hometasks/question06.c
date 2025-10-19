/*
Question: 6
Write a C program that takes an integer input from the user and calculates the sum of its
individual digits.
Example:
 Input: 1234 → Output: "Sum of digits: 1+2+3+4 = 10"
 Input: 987 → Output: "Sum of digits: 9+8+7 = 24"*/
#include<stdio.h>

int main(){

    int num=0,sum=0,rem=0;

    printf("Enter a number: ");
    scanf("\n%d",&num);

    do{
        rem=num%10;
        num/=10;
        sum+=rem;
    }while(num!=0);

    printf("The sum of all the digits is equal to: %d",sum);

    return 0;
}