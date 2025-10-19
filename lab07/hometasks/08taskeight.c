#include<stdio.h>

int main(){
    char input[50];
    printf("Enter a string: ");
    scanf("%[^A-Za-z]",input);
    printf("%s",input);
    return 0;
}