#include<stdio.h>

int main(){

    int n=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    int rem=n%10;

    while(n>=10){
        n/=10;
        printf("\n");
    }

    printf("The sum of first and\nlast digit of given number is: %d ",rem+n);

    return 0;
}