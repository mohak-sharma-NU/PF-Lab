#include<stdio.h>
#include<math.h>

int main(){
    double a,b,c;

    // printf("Enter a, b, c:");
    // //Input in a single line:
    // scanf("%lf %lf %lf",&a,&b,&c);

    //Input in multiple line:
    printf("Enter a:");
    scanf("%lf",&a);
    printf("Enter b:");
    scanf("%lf",&b);
    printf("Enter c:");
    scanf("%lf",&c);

    double discriminant = b*b-4*a*c;
    double rootOne = (-b+sqrt(discriminant))/2*a;
    double rootTwo = (-b-sqrt(discriminant))/2*a;

    if(discriminant>0){
        printf("The given equation has two real roots, %lf %lf",rootOne,rootTwo);
    }
    else if(discriminant == 0){
        printf("The given equation has one real root, %lf and %lf",rootOne,rootTwo);
    }
    else{
        printf("The given equation has imaginary roots, %lf %lf",rootOne,rootTwo);
    }
    return 0;
}