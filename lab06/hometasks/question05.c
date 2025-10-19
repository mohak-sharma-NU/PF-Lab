/*
Question:5
Write a C program that asks the user for 10 integer 
values and counts how many are even and
how many are odd.*/
#include<stdio.h>

int main(){
    int n,ev=0,odd=0;
    for(int i=0;i<10;i++){
        printf("Enter a number: ");
        scanf("\n%d",&n);
        if(n%2==0) ev++;

        else odd++;
    }
    printf("You have entered %d even numbers and %d odd numbers",ev,odd);
    return 0;
}