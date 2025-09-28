#include<stdio.h>

int main(){

    printf("Enter your height in centimenters: ");

    float heightInCM;
    scanf("%f",&heightInCM);

    float heightinfeet, heightinInch;

    heightinfeet = heightInCM/30.48;
    heightinInch = heightInCM/2.54;

    printf("Height in Feet: %f\n Height in Inch: %f" ,heightinfeet,heightinInch);

    return 0;
}