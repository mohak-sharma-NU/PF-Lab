/*
Question:7
Write a C program that takes an integer input from the user 
and displays the number in reverse
order.
Example:
 Input: 12345 → Output: 54321
 Input: 100 → Output: 001.

123=>100+20+3
300+20+1

*/
#include<stdio.h>
#include<math.h>

int main(){

    int n,rem,sum=0,count=0;
    printf("Enter a number: ");
    scanf("\n%d",&n);

    //count the total divisions needed.
    int temp=n;
    do{
        temp/=10;
        count++;
    }while(temp!=0);

    //reverse the number
    do{
        rem=n%10;
        n/=10;
        sum+=rem*pow(10,count-1);
        count--;
    }while(n!=0);

    printf("\n%d",sum);

    return 0;
}