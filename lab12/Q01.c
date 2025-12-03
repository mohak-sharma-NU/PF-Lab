#include<stdio.h>
#include<stdlib.h>

int main(){

    int n,i;

    printf("How many integers do you want to store?");
    scanf("%d",&n);

    int* ptr = (int*) malloc(n*sizeof(int));

    for(i=0;i<n;i++){
        printf("Enter integer %d: ",i+1);
        scanf("%d",ptr+i);
    }

    printf("\nYou have entered: ");
    for(i=0;i<n;i++){
        printf("%d ",*(ptr+i));
    }

    free(ptr);

    return 0;
}