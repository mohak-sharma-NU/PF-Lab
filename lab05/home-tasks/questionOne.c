#include<stdio.h>

int main(){
    int age;
    printf("Enter your age:");
    scanf("%d",&age);

    if(age>0){
        if(age<5){
            printf("Free.");
        }else if(age>65){
            printf("Discount.");
        }else if(age>=5&&age<65){
            printf("Standard.");
        }
        else{
            printf("Invalid age.");
        }
    }else{
        printf("Age must be positive.");
    }
    return 0;
}