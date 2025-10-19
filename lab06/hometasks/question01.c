#include<stdio.h>

int main(){

    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    do{
        printf("%d\n",n);
        n--;
    }while(n>=0);

    return 0;
}