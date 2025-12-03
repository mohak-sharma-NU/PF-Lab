#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    int n,i;
    printf("How many elements? ");
    scanf("%d",&n);
    getchar();

    int* ptr = (int*) calloc(n,sizeof(int));
    printf("\nBefore Modification: ");

    for(i=0;i<n;i++){
        printf("%d ",ptr[i]);
    }
    for(i=0;i<n;i++){
        ptr[i] = i;
    }

    printf("\nAfter Modification: ");

    for(i=0;i<n;i++){
        printf("%d ",ptr[i]);
    }

    free(ptr);

    ptr = malloc(n*sizeof(int));

    printf("\nAfter Malloc: ");

    for(i=0;i<n;i++){
        printf("%d ",ptr[i]);
    } 

    return 0;
}
