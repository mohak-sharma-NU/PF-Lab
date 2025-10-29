#include<stdio.h>

void PrintleftsidePyramid(int n){
    int i,j,k;
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            printf(" ");
        }
        for(k=0;k<i;k++){
            printf("*");
        }
        printf("\n");
    }
}

void PrintleftsidePyramidNumber(int n){
    int i,j,k;
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            printf(" ");
        }
        for(k=0;k<i;k++){
            printf("%d",k+1);
        }
        printf("\n");
    }
}

void PrintleftsidePyramidAlphabet(int n){
    int i,j,k;
    char a='A';
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            printf(" ");
        }
        for(k=0;k<i;k++){
            printf("%c",a+k);
        }
        printf("\n");
    }
}

/********************
 *  #####  ######   *
 *  #   #  #    #   *
 *  #   #  ####     *
 *  #   #  #   ##   *
 *  #####  #    ##  *
 *********************/

void printSideBySide(int n){
    int i,j,k;
    char a ='A';
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(k=0;k<i;k++){
            printf("*");
        }

        printf(" | ");

        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(k=0;k<i;k++){
            printf("%d",k+1);
        }

        printf(" | ");

        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(k=0;k<i;k++){
            printf("%c",a+k);
        }
        printf("\n");
    }
}
int main(){
    int n;
    printf("Enter the number of Iterations: ");
    scanf("%d",&n);

    printSideBySide(n);

    // PrintleftsidePyramid(n);
    // printf("\n");
    // PrintleftsidePyramidNumber(n);
    // printf("\n");
    // PrintleftsidePyramidAlphabet(n);
    return 0;
}