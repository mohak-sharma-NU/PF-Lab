#include<stdio.h>

int main(){

    float pi=3.1415;

    float r;

    printf("Enter the radius of the circle:");

    scanf("%f",&r);

    float area = pi*r*r;
    printf("Area: %f ",area);

    float circumference = 2*pi*r;
    printf("\nCircumference: %f ",circumference);

    return 0;
}